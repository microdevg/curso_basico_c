//#ifndef ESP32_DRIVERS_H
//#define ESP32_DRIVERS_H

#include <stdint.h>




typedef enum {
    ESP_ERROR,
    ESP_OK
} esp32_err_t;

typedef enum {
    UART_0 ,
    UART_1 ,
    UART_2
} esp32_uart_t ;



 typedef enum {
    GPIO_0 = (uint32_t) 0,   // Podría agregar mas gpio 
    GPIO_1 = (uint32_t) 1,
    GPIO_2 = (uint32_t) 2,
    GPIO_3 = (uint32_t) 3,
    GPIO_4 = (uint32_t) 4,

} esp32_gpio_t;


esp32_err_t esp32_init(uint32_t freq);


esp32_err_t esp32_uart_set(  esp32_uart_t uart, uint32_t baudrate,  esp32_gpio_t tx, esp32_gpio_t rx );







//#endif