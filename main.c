#include <stdio.h>
#include <pico/stdlib.h>

#include <apple_1_emu.h>

uint8_t readkey() {
    return getchar();
}

void writechar(uint8_t ch) {
    printf("%c", ch);
}

uint8_t keyavailable() {
    return 1;
}

int main() {
    stdio_init_all();

    printf("Apple 1 emulator!\n");

    apple_1_init();

    for (;;) {
        apple_1_step();
    }

    return 0;
}