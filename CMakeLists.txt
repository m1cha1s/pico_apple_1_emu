cmake_minimum_required(VERSION 3.16)

include($ENV{PICO_SDK_PATH}/pico_sdk_init.cmake)

project(pico_apple_1_emu)

pico_sdk_init()

add_executable(pico_apple_1_emu
    main.c
)

add_subdirectory(apple_1_emu)

target_link_libraries(pico_apple_1_emu PRIVATE pico_stdlib apple_1_emu)

pico_add_extra_outputs(pico_apple_1_emu)

pico_enable_stdio_usb(pico_apple_1_emu 1)
pico_enable_stdio_uart(pico_apple_1_emu 0)