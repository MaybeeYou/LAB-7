set(CMAKE_CXX_COMPILER "/run/current-system/sw/bin/clang++")
set(CMAKE_CXX_COMPILER_ARG1 "")
set(CMAKE_CXX_COMPILER_ID "Clang")
set(CMAKE_CXX_COMPILER_VERSION "19.1.7")
set(CMAKE_CXX_COMPILER_VERSION_INTERNAL "")
set(CMAKE_CXX_COMPILER_WRAPPER "")
set(CMAKE_CXX_STANDARD_COMPUTED_DEFAULT "17")
set(CMAKE_CXX_EXTENSIONS_COMPUTED_DEFAULT "ON")
set(CMAKE_CXX_STANDARD_LATEST "26")
set(CMAKE_CXX_COMPILE_FEATURES "cxx_std_98;cxx_template_template_parameters;cxx_std_11;cxx_alias_templates;cxx_alignas;cxx_alignof;cxx_attributes;cxx_auto_type;cxx_constexpr;cxx_decltype;cxx_decltype_incomplete_return_types;cxx_default_function_template_args;cxx_defaulted_functions;cxx_defaulted_move_initializers;cxx_delegating_constructors;cxx_deleted_functions;cxx_enum_forward_declarations;cxx_explicit_conversions;cxx_extended_friend_declarations;cxx_extern_templates;cxx_final;cxx_func_identifier;cxx_generalized_initializers;cxx_inheriting_constructors;cxx_inline_namespaces;cxx_lambdas;cxx_local_type_template_args;cxx_long_long_type;cxx_noexcept;cxx_nonstatic_member_init;cxx_nullptr;cxx_override;cxx_range_for;cxx_raw_string_literals;cxx_reference_qualified_functions;cxx_right_angle_brackets;cxx_rvalue_references;cxx_sizeof_member;cxx_static_assert;cxx_strong_enums;cxx_thread_local;cxx_trailing_return_types;cxx_unicode_literals;cxx_uniform_initialization;cxx_unrestricted_unions;cxx_user_literals;cxx_variadic_macros;cxx_variadic_templates;cxx_std_14;cxx_aggregate_default_initializers;cxx_attribute_deprecated;cxx_binary_literals;cxx_contextual_conversions;cxx_decltype_auto;cxx_digit_separators;cxx_generic_lambdas;cxx_lambda_init_captures;cxx_relaxed_constexpr;cxx_return_type_deduction;cxx_variable_templates;cxx_std_17;cxx_std_20;cxx_std_23;cxx_std_26")
set(CMAKE_CXX98_COMPILE_FEATURES "cxx_std_98;cxx_template_template_parameters")
set(CMAKE_CXX11_COMPILE_FEATURES "cxx_std_11;cxx_alias_templates;cxx_alignas;cxx_alignof;cxx_attributes;cxx_auto_type;cxx_constexpr;cxx_decltype;cxx_decltype_incomplete_return_types;cxx_default_function_template_args;cxx_defaulted_functions;cxx_defaulted_move_initializers;cxx_delegating_constructors;cxx_deleted_functions;cxx_enum_forward_declarations;cxx_explicit_conversions;cxx_extended_friend_declarations;cxx_extern_templates;cxx_final;cxx_func_identifier;cxx_generalized_initializers;cxx_inheriting_constructors;cxx_inline_namespaces;cxx_lambdas;cxx_local_type_template_args;cxx_long_long_type;cxx_noexcept;cxx_nonstatic_member_init;cxx_nullptr;cxx_override;cxx_range_for;cxx_raw_string_literals;cxx_reference_qualified_functions;cxx_right_angle_brackets;cxx_rvalue_references;cxx_sizeof_member;cxx_static_assert;cxx_strong_enums;cxx_thread_local;cxx_trailing_return_types;cxx_unicode_literals;cxx_uniform_initialization;cxx_unrestricted_unions;cxx_user_literals;cxx_variadic_macros;cxx_variadic_templates")
set(CMAKE_CXX14_COMPILE_FEATURES "cxx_std_14;cxx_aggregate_default_initializers;cxx_attribute_deprecated;cxx_binary_literals;cxx_contextual_conversions;cxx_decltype_auto;cxx_digit_separators;cxx_generic_lambdas;cxx_lambda_init_captures;cxx_relaxed_constexpr;cxx_return_type_deduction;cxx_variable_templates")
set(CMAKE_CXX17_COMPILE_FEATURES "cxx_std_17")
set(CMAKE_CXX20_COMPILE_FEATURES "cxx_std_20")
set(CMAKE_CXX23_COMPILE_FEATURES "cxx_std_23")
set(CMAKE_CXX26_COMPILE_FEATURES "cxx_std_26")

set(CMAKE_CXX_PLATFORM_ID "Linux")
set(CMAKE_CXX_SIMULATE_ID "")
set(CMAKE_CXX_COMPILER_FRONTEND_VARIANT "GNU")
set(CMAKE_CXX_SIMULATE_VERSION "")




set(CMAKE_AR "/run/current-system/sw/bin/ar")
set(CMAKE_CXX_COMPILER_AR "CMAKE_CXX_COMPILER_AR-NOTFOUND")
set(CMAKE_RANLIB "/run/current-system/sw/bin/ranlib")
set(CMAKE_CXX_COMPILER_RANLIB "CMAKE_CXX_COMPILER_RANLIB-NOTFOUND")
set(CMAKE_LINKER "/run/current-system/sw/bin/ld")
set(CMAKE_LINKER_LINK "")
set(CMAKE_LINKER_LLD "")
set(CMAKE_CXX_COMPILER_LINKER "/nix/store/dyqmjp3wzcxrwlqhzlzvlw12jir1snlh-binutils-wrapper-2.44/bin/ld")
set(CMAKE_CXX_COMPILER_LINKER_ID "GNU")
set(CMAKE_CXX_COMPILER_LINKER_VERSION 2.44)
set(CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT GNU)
set(CMAKE_MT "")
set(CMAKE_TAPI "CMAKE_TAPI-NOTFOUND")
set(CMAKE_COMPILER_IS_GNUCXX )
set(CMAKE_CXX_COMPILER_LOADED 1)
set(CMAKE_CXX_COMPILER_WORKS TRUE)
set(CMAKE_CXX_ABI_COMPILED TRUE)

set(CMAKE_CXX_COMPILER_ENV_VAR "CXX")

set(CMAKE_CXX_COMPILER_ID_RUN 1)
set(CMAKE_CXX_SOURCE_FILE_EXTENSIONS C;M;c++;cc;cpp;cxx;m;mm;mpp;CPP;ixx;cppm;ccm;cxxm;c++m)
set(CMAKE_CXX_IGNORE_EXTENSIONS inl;h;hpp;HPP;H;o;O;obj;OBJ;def;DEF;rc;RC)

foreach (lang IN ITEMS C OBJC OBJCXX)
  if (CMAKE_${lang}_COMPILER_ID_RUN)
    foreach(extension IN LISTS CMAKE_${lang}_SOURCE_FILE_EXTENSIONS)
      list(REMOVE_ITEM CMAKE_CXX_SOURCE_FILE_EXTENSIONS ${extension})
    endforeach()
  endif()
endforeach()

set(CMAKE_CXX_LINKER_PREFERENCE 30)
set(CMAKE_CXX_LINKER_PREFERENCE_PROPAGATES 1)
set(CMAKE_CXX_LINKER_DEPFILE_SUPPORTED )

# Save compiler ABI information.
set(CMAKE_CXX_SIZEOF_DATA_PTR "8")
set(CMAKE_CXX_COMPILER_ABI "ELF")
set(CMAKE_CXX_BYTE_ORDER "LITTLE_ENDIAN")
set(CMAKE_CXX_LIBRARY_ARCHITECTURE "")

if(CMAKE_CXX_SIZEOF_DATA_PTR)
  set(CMAKE_SIZEOF_VOID_P "${CMAKE_CXX_SIZEOF_DATA_PTR}")
endif()

if(CMAKE_CXX_COMPILER_ABI)
  set(CMAKE_INTERNAL_PLATFORM_ABI "${CMAKE_CXX_COMPILER_ABI}")
endif()

if(CMAKE_CXX_LIBRARY_ARCHITECTURE)
  set(CMAKE_LIBRARY_ARCHITECTURE "")
endif()

set(CMAKE_CXX_CL_SHOWINCLUDES_PREFIX "")
if(CMAKE_CXX_CL_SHOWINCLUDES_PREFIX)
  set(CMAKE_CL_SHOWINCLUDES_PREFIX "${CMAKE_CXX_CL_SHOWINCLUDES_PREFIX}")
endif()





set(CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES "/nix/store/jzd366x5mm9j9bx5yc4h4d4flmb25mnv-sfml-2.6.2/include;/nix/store/82ffxxqq1zarn0w7001vmd3pyhvx12xf-systemd-minimal-libs-257.5-dev/include;/nix/store/ilrqz505fw5z0v08x2vxyncbb3flfy3g-tgui-1.9.0/include;/nix/store/qhjihbfx6pvj6yarz4dz145k4q7k0p17-freetype-2.13.3-dev/include;/nix/store/hn19nyhqdx3hnix88yri8vap30pqs8x3-zlib-1.3.1-dev/include;/nix/store/9fbfv8dk7rnjarnkx4y54yqdcqsfdhba-bzip2-1.0.8-dev/include;/nix/store/pmhw8cxkjxwr57vpvs2mmsvg5yymxhh3-brotli-1.1.0-dev/include;/nix/store/vlzlx6gi0cq3r2862cqarv616wv0n596-libpng-apng-1.6.46-dev/include;/nix/store/qqma6s4b9fllphlqvxpa71r8fjcfqamq-libX11-1.8.12-dev/include;/nix/store/65fy49a9kgg0sigjbsrs1akiacfi5nj3-xorgproto-2024.1/include;/nix/store/2cw6b26lg892dni10jikf9265x8m5z3d-libxcb-1.17.0-dev/include;/nix/store/6hflfaz91sxhp4ld468745d3zmsih4ng-libXext-1.3.6-dev/include;/nix/store/5lh33kxjzl0g76ik5ckjxbj8b8i9v9al-libXau-1.0.12-dev/include;/nix/store/wnafaa411xgp35mj5rl5f0b6r57dhm74-libXfixes-6.0.1-dev/include;/nix/store/xxkb2vxhp0pn1270a4byb0j4vmn2d1bf-libXi-1.8.2-dev/include;/nix/store/za0ldlvlayj2v6f20d2kql4381gpypz5-libXrandr-1.5.4-dev/include;/nix/store/j00q3kfxkhy2yvw54iq00q6i9brqm0gq-libXrender-0.9.12-dev/include;/nix/store/zngm1l5kk6lfly2azmf707vw5na0barl-libXcursor-1.2.3-dev/include;/nix/store/k255rcsx8q9f6q5y9d3d20j3x3rd7yyv-libXinerama-1.1.5-dev/include;/nix/store/mfdr1dnk1c2kdlmsmhjjbr1wg4vmv84d-libglvnd-1.7.0-dev/include;/nix/store/rkww6dfq0wgmj173jjgavn23v2j2avxv-openal-soft-1.24.2/include;/nix/store/80b5m5sxx432syl2shy5cdpgcd388mx8-flac-1.5.0-dev/include;/nix/store/sllnjqkmc527amm0lw1vj7zjm5kd6xdc-libogg-1.3.5-dev/include;/nix/store/j388dkaiy8aj20qjyaxwnd7vyvdpfgbv-libvorbis-1.3.7-dev/include;/nix/store/9ds850ifd4jwcccpp3v14818kk74ldf2-gcc-14.2.1.20250322/include/c++/14.2.1.20250322;/nix/store/9ds850ifd4jwcccpp3v14818kk74ldf2-gcc-14.2.1.20250322/include/c++/14.2.1.20250322/x86_64-unknown-linux-gnu;/nix/store/fmysfy9gl5d59yir4fksi29wz10maljg-clang-wrapper-19.1.7/resource-root/include;/nix/store/r25srliigrrv5q3n7y8ms6z10spvjcd9-glibc-2.40-66-dev/include")
set(CMAKE_CXX_IMPLICIT_LINK_LIBRARIES "stdc++;m;gcc_s;gcc;c;gcc_s;gcc")
set(CMAKE_CXX_IMPLICIT_LINK_DIRECTORIES "/nix/store/jzd366x5mm9j9bx5yc4h4d4flmb25mnv-sfml-2.6.2/lib;/nix/store/zl17r6w5h1sgmrsg7dqa3il2y2kvm6l7-systemd-minimal-libs-257.5/lib;/nix/store/ilrqz505fw5z0v08x2vxyncbb3flfy3g-tgui-1.9.0/lib;/nix/store/8dr41ckl7sbv2v5aim3csxzql03z68hk-zlib-1.3.1/lib;/nix/store/mq1680dppidpggmaqaklwapvgm6iw3a6-bzip2-1.0.8/lib;/nix/store/ddnrpqdpfm1nsrfji3hr4aqmd93y6xkv-brotli-1.1.0-lib/lib;/nix/store/srcfig7bzw7br814yy8iivq5al07cdii-libpng-apng-1.6.46/lib;/nix/store/15755cxaiv750fs6p2qwwq3r01g94b37-freetype-2.13.3/lib;/nix/store/gfdyxhblv873s4x2pvn0y37c2144kbar-libxcb-1.17.0/lib;/nix/store/qvya5walwxj7f37j2yclr0mf6z1c4lim-libX11-1.8.12/lib;/nix/store/xabrkfx4g2dkwphsfzallyjh0k3bqlww-libXau-1.0.12/lib;/nix/store/cjycdx733qs94c8pv1dyk5nqi4j2waxl-libXext-1.3.6/lib;/nix/store/vf1azaa8wzx6brffmziv4659nwsbqhkh-libXfixes-6.0.1/lib;/nix/store/ypd4ql6nldk4s04z3dq431m81d85xki9-libXi-1.8.2/lib;/nix/store/i4ca0qwbamp5vv1m982w5wvwyfjfv7pi-libXrender-0.9.12/lib;/nix/store/55py0j2q87wf4vsx9hx6lf83mly2vvjz-libXrandr-1.5.4/lib;/nix/store/ln9yl1gy2akj3gfmxzyc0hviqccccinh-libXcursor-1.2.3/lib;/nix/store/zcjb5avxn4i4x414smn2vviy459mbwwr-libXinerama-1.1.5/lib;/nix/store/iszaj55ikcbnfckr6qggj7s2158glk8j-libglvnd-1.7.0/lib;/nix/store/rkww6dfq0wgmj173jjgavn23v2j2avxv-openal-soft-1.24.2/lib;/nix/store/lhsivrrhnsawcy8cvgxvchnkk701kdzh-flac-1.5.0/lib;/nix/store/jqwh458rb4jnwdg45yx3jz9ss25n19is-libogg-1.3.5/lib;/nix/store/fppn1lq7lvcyajvykark55mlm0cr7c3q-libvorbis-1.3.7/lib;/nix/store/cg9s562sa33k78m63njfn1rw47dp9z0i-glibc-2.40-66/lib;/nix/store/9ds850ifd4jwcccpp3v14818kk74ldf2-gcc-14.2.1.20250322/lib/gcc/x86_64-unknown-linux-gnu/14.2.1.20250322;/nix/store/7c0v0kbrrdc2cqgisi78jdqxn73n3401-gcc-14.2.1.20250322-lib/lib;/nix/store/9ds850ifd4jwcccpp3v14818kk74ldf2-gcc-14.2.1.20250322/lib;/nix/store/6hqzbvz50bm87hcj4qfn51gh7arxj8a6-gcc-14.2.1.20250322-libgcc/lib;/nix/store/4xqa6mk1lllnsprl2swlw94vczzn02y9-clang-19.1.7-lib/lib;/nix/store/9ds850ifd4jwcccpp3v14818kk74ldf2-gcc-14.2.1.20250322/lib/gcc/x86_64-unknown-linux-gnu/14.2.1;/lib64;/lib")
set(CMAKE_CXX_IMPLICIT_LINK_FRAMEWORK_DIRECTORIES "")
set(CMAKE_CXX_COMPILER_CLANG_RESOURCE_DIR "/nix/store/fmysfy9gl5d59yir4fksi29wz10maljg-clang-wrapper-19.1.7/resource-root")

set(CMAKE_CXX_COMPILER_IMPORT_STD "")
### Imported target for C++23 standard library
set(CMAKE_CXX23_COMPILER_IMPORT_STD_NOT_FOUND_MESSAGE "Experimental `import std` support not enabled when detecting toolchain; it must be set before `CXX` is enabled (usually a `project()` call)")


### Imported target for C++26 standard library
set(CMAKE_CXX26_COMPILER_IMPORT_STD_NOT_FOUND_MESSAGE "Experimental `import std` support not enabled when detecting toolchain; it must be set before `CXX` is enabled (usually a `project()` call)")



