#include "alarm.h"
Alarm alarm(4,5);
void setup() {
  alarm.setup();
}

void loop() {
  alarm.komut("onkapi");
  delay(500);
  alarm.komut("arkakapi");
  delay(500);
  alarm.komut("sustur");
  delay(500);
  
}
