/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

#include "mqtt_client_task.hpp"
#include "webserver_task.h"
#include "display_task.hpp"

extern "C" {
    void app_main(void)
    {
        printf("Hello beautiful world!\n");
        xTaskCreate(&mqtt_task, "mqtt_task", 2048, NULL, 5, NULL);
        xTaskCreatePinnedToCore(display_task, "gui", 4096*2, NULL, 0, NULL, 1);
    }
}
