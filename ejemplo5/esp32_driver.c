#include "esp32_driver.h"
#include <stdio.h>


#define M_ESP32_INIT        ("ESP32 inicializado con reloj de  %d \n")
#define M_ESP32_UART_SET    ("Configurando UART con:\n\tbaudrate:%d\n\tgpio_tx:%d\n\tgpio_rx:%d\n")



esp32_err_t esp32_init(uint32_t freq){
    printf(M_ESP32_INIT,freq);
    return ESP_OK;
    
}


esp32_err_t esp32_uart_set( esp32_uart_t uart, uint32_t baudrate, esp32_gpio_t tx, esp32_gpio_t rx ){
    printf(M_ESP32_UART_SET,baudrate,tx,rx);
    return ESP_OK;
}


