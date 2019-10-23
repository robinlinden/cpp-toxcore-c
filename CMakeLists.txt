cmake_minimum_required(VERSION 3.14.1)

project(cxxtox)

include(FetchContent)

FetchContent_Declare(Toxcore
    GIT_REPOSITORY https://github.com/TokTok/c-toxcore.git
    GIT_TAG 7aab0d9 # v0.2.10
    PATCH_COMMAND git apply ${CMAKE_CURRENT_SOURCE_DIR}/patch/cmake.patch
)
set(BUILD_TOXAV FALSE CACHE INTERNAL "")
set(BOOTSTRAP_DAEMON FALSE CACHE INTERNAL "")
set(DHT_BOOTSTRAP FALSE CACHE INTERNAL "")
set(ENABLE_SHARED FALSE CACHE INTERNAL "")
FetchContent_MakeAvailable(Toxcore)

add_library(${PROJECT_NAME}
    include/cxxtox/options.h
    include/cxxtox/tox.h
    src/options.cpp
    src/tox.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        include
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
        toxcore_static
)

target_compile_options(${PROJECT_NAME}
    PRIVATE
        $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:
            -pedantic-errors;
            -Wall;
            -Wconversion;
            -Werror;
            -Wextra;
            -Wnon-virtual-dtor;
            -Wshadow;
        >
)
