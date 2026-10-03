#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

namespace {
constexpr char kTag[] = "RobotCleaner";
}

extern "C" void app_main(void) {
    ESP_LOGI(kTag, "RobotCleaner boot");

    while (true) {
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}
