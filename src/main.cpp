#include <M5Unified.h>

void setup() {
    auto cfg = M5.config();
    M5.begin(cfg);

    M5.Display.setRotation(1);
    M5.Display.setTextSize(2);
    M5.Display.println("RobotCleaner");

    Serial.println("RobotCleaner boot");
}

void loop() {
    M5.update();

    if (M5.BtnA.wasPressed()) {
        Serial.println("BtnA pressed");
    }

    delay(10);
}
