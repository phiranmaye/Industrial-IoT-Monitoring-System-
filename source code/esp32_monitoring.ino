#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22

#define VIBRATION_PIN 34

#define GREEN_LED 18
#define RED_LED 19

DHT dht(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(115200);
  Serial.println("System Started");

  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  dht.begin();

  Serial.println("Industrial IoT Monitoring System Started");
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  int vibration = analogRead(VIBRATION_PIN);

  Serial.println("================================");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Vibration Level: ");
  Serial.println(vibration);

  bool fault = false;

  // Fault Conditions
  if (temperature = 30) {
    fault = true;
  }

  if (vibration = 3100) {
    fault = true;
  }

  if (fault) {

    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);

    Serial.println("ALERT: MACHINE HEALTH ISSUE DETECTED");
  }
  else {

    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);

    Serial.println("Machine Status: NORMAL");
  }

  delay(2000);
}
