# Projeto: Leitura de Dados Ambientais com BMP280 e NodeMCU ESP8266MOD

Este projeto utiliza o microcontrolador **NodeMCU ESP8266MOD** em conjunto com o sensor **BMP280** (ou BME280) para ler dados de **temperatura, pressão atmosférica e altitude**, com exibição em uma **interface web** acessível via Wi-Fi.

## 🔧 Componentes Utilizados

- NodeMCU ESP8266MOD
- Sensor BMP280 (ou BME280)
- Protoboard
- Jumpers macho-fêmea
- Fonte USB 5V

## 🔌 Conexões (I2C)

| BMP280 Pin | NodeMCU Pin |
|------------|-------------|
| VCC        | 3V3         |
| GND        | GND         |
| SCL        | D1 (GPIO5)  |
| SDA        | D2 (GPIO4)  |

> Certifique-se de que o sensor está configurado para I2C e utilizando o endereço padrão (0x76 ou 0x77).

## 💻 Bibliotecas Necessárias

Instale via Gerenciador de Bibliotecas da Arduino IDE:

- `Adafruit BME280`
- `Adafruit Unified Sensor`
- `ESP8266WiFi.h`

## 🚀 Como Usar

1. Abra a Arduino IDE.
2. Selecione a placa
