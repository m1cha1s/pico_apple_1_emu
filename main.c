#include <stdio.h>
#include <pico/stdlib.h>

#include <apple_1_emu.h>

int main() {
    stdio_init_all();

    printf("Apple 1 emulator!\n");

    apple_1_init();

    for (;;) {
        apple_1_step();
    }

    return 0;
}