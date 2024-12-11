#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "driver/gpio.h"

#define LED GPIO_NUM_2

void app_main(void)
{
    bool blink = false;
    gpio_set_direction(LED, GPIO_MODE_OUTPUT);
    while (1)
    {
        blink = !blink;
        gpio_set_level(LED, blink);
        printf("helo word\n");
        sleep(1);
    }
}