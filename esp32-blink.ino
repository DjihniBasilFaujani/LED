#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcdSatu(0x27, 16, 2);

int Merah = 2;
int Kuning = 4;
int Hijau = 15;

void setup() {
  pinMode(Merah, OUTPUT);
  pinMode(Kuning, OUTPUT);
  pinMode(Hijau, OUTPUT);
  lcdSatu.init();
  lcdSatu.backlight();
}

void loop() {
  digitalWrite(Merah, HIGH);
  lcdSatu.setCursor(0,0);
  lcdSatu.print("Stop");
  delay(5000);

  digitalWrite(Merah, LOW);
  lcdSatu.clear();

  digitalWrite(Kuning, HIGH);
  lcdSatu.setCursor(0,0);
  lcdSatu.print("Siap-siap");
  delay(2000);
  
  digitalWrite(Kuning, LOW);
  lcdSatu.clear();

  digitalWrite(Hijau, HIGH);
  lcdSatu.setCursor(0,0);
  lcdSatu.print("Jalan");
  delay(5000);
  
  digitalWrite(Kuning, LOW);
  lcdSatu.clear();
}
