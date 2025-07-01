#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <Adafruit_BMP280.h>

#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME280 bme;
Adafruit_BMP280 bmp;

bool usandoBME = false;
bool sensorDetectado = false;

void setup() {
  Serial.begin(115200);
  delay(1000); // Aguarda inicialização do Serial
  Wire.begin(D2, D1); // SDA = D2 (GPIO4), SCL = D1 (GPIO5)

  Serial.println("Procurando sensor BME280/BMP280...");

  // Tenta BME280 nos dois endereços
  if (bme.begin(0x76)) {
    usandoBME = true;
    sensorDetectado = true;
    Serial.println("Sensor BME280 detectado no endereço 0x76.");
  } else if (bme.begin(0x77)) {
    usandoBME = true;
    sensorDetectado = true;
    Serial.println("Sensor BME280 detectado no endereço 0x77.");
  }
  // Se não achou BME, tenta BMP nos dois endereços
  else if (bmp.begin(0x76)) {
    usandoBME = false;
    sensorDetectado = true;
    Serial.println("Sensor BMP280 detectado no endereço 0x76.");
  } else if (bmp.begin(0x77)) {
    usandoBME = false;
    sensorDetectado = true;
    Serial.println("Sensor BMP280 detectado no endereço 0x77.");
  }

  if (!sensorDetectado) {
    Serial.println("Erro: Nenhum sensor BME/BMP280 detectado nos endereços 0x76 ou 0x77.");
  }
}

void loop() {
  if (sensorDetectado) {
    if (usandoBME) {
      Serial.print("Temperatura: ");
      Serial.print(bme.readTemperature());
      Serial.println(" °C");

      Serial.print("Pressão: ");
      Serial.print(bme.readPressure() / 100.0F);
      Serial.println(" hPa");

      Serial.print("Umidade: ");
      Serial.print(bme.readHumidity());
      Serial.println(" %");

      Serial.print("Altitude estimada: ");
      Serial.print(bme.readAltitude(SEALEVELPRESSURE_HPA));
      Serial.println(" m");
    } else {
      Serial.print("Temperatura: ");
      Serial.print(bmp.readTemperature());
      Serial.println(" °C");

      Serial.print("Pressão: ");
      Serial.print(bmp.readPressure() / 100.0F);
      Serial.println(" hPa");

      Serial.print("Altitude estimada: ");
      Serial.print(bmp.readAltitude(SEALEVELPRESSURE_HPA));
      Serial.println(" m");
    }

    Serial.println("--------------------------");
  } else {
    Serial.println("Nenhum sensor detectado. Verifique as conexões.");
  }

  delay(3000);
}
