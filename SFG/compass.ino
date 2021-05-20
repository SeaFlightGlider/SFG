#include <QMC5883LCompass.h>

QMC5883LCompass compass;
int a;

void initialize_compass() {
  compass.init();
}

void compass_read() {
  compass.read();

  a = compass.getAzimuth();
  Serial.println("compass bearing");
  Serial.print(a);

  delay(250);
  // put your main code here, to run repeatedly:

}
