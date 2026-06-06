#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <Servo.h>

#define DHTPIN 2
#define DHTTYPE DHT11

#define RAIN_PIN 3
#define BUZZER 8
#define SERVO_PIN 9

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo myServo;

void setup() {
  pinMode(RAIN_PIN, INPUT);
  pinMode(BUZZER, OUTPUT);

  myServo.attach(SERVO_PIN);
  myServo.write(0);

  dht.begin();

  lcd.init();
  lcd.backlight();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Weather Monitor");
  delay(2000);
}

void loop() {

  float humidity = dht.readHumidity();

  bool rainDetected = (digitalRead(RAIN_PIN) == LOW);

  lcd.clear();

  // Line 1: Humidity
  lcd.setCursor(0, 0);
  lcd.print("HUMIDITY:");

  if (!isnan(humidity)) {
    lcd.print(humidity, 2);
    lcd.print("%");
  } else {
    lcd.print("ERROR");
  }

  // Line 2: Rain Status
  lcd.setCursor(0, 1);

  if (rainDetected) {
    lcd.print("RAINING");

    myServo.write(90);      // Rotate servo to 90°
    digitalWrite(BUZZER, HIGH);
  }
  else {
    lcd.print("NOT RAINING");

    myServo.write(0);       // Return servo
    digitalWrite(BUZZER, LOW);
  }

  delay(1000);
}