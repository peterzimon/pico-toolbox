/*
 * picotest for Raspberry Pi Pico
 *
 * @version     1.0.0
 * @author      <YOU>
 * @copyright   2022
 * @licence     MIT
 * 
 * For printf debug run `minicom -D /dev/tty.usbmodem12345 -b 115200`
 *
 */
#include "main.h"

int main() {
    // Use for debugging
    stdio_init_all();

    const uint LED_PIN = PICO_DEFAULT_LED_PIN;

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    int loopCount = 0;

    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(250);
        gpio_put(LED_PIN, 0);
        sleep_ms(250);

        printf("Loop no: %d \r\n", loopCount);
        loopCount++;
    }

    return 0;
}
