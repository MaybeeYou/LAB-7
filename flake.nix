{
  description = "Kursach";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs {
          inherit system;
          config.allowUnfree = true;
        };

        # Локальный пакет tgui из tgui.nix
      in {
        devShells.default = pkgs.mkShell {
          nativeBuildInputs = with pkgs; [
            cmake
            ninja
            gcc
            sfml
            udev
            freetype
            xorg.libX11
            xorg.libXext
            xorg.libXfixes
            xorg.libXi
            xorg.libXrandr
            xorg.libXcursor
            xorg.libXinerama
            libGL
            openal
            flac
            libogg
            libvorbis
          ];

          shellHook = ''
            export SFML_DIR="${pkgs.sfml_2}/lib/cmake/SFML"
            export CMAKE_PREFIX_PATH="
              ${pkgs.udev};
              ${pkgs.xorg.libX11};
              ${pkgs.xorg.libXext};
              ${pkgs.xorg.libXfixes};
              ${pkgs.xorg.libXi};
              ${pkgs.xorg.libXrandr};
              ${pkgs.xorg.libXcursor};
              ${pkgs.libGL};
            "
            echo "🎮 Добро пожаловать в среду разработки SFML + TGUI"
          '';
        };
      });
}
