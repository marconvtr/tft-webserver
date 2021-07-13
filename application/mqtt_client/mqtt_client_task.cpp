
#include "mqtt_client_task.hpp"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void mqtt_task(void * arg){
    while(1){
        printf("mqtt task\n\r");
        vTaskDelay(1000 / portTICK_RATE_MS);
    }
}