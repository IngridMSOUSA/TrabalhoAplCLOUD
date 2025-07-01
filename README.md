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

## Integrantes:


DANILO BORGES GONÇALVES DA SILVA
INGRID MOREIRA SOUSA
KAUÃ LESSA
LEONARDO PEREIRA CAMPOS
YAN AUGUSTO MACHADO NASCIMENTO



## 💻 Bibliotecas Necessárias

Instale via Gerenciador de Bibliotecas da Arduino IDE:

- `Adafruit BME280`
- `Adafruit Unified Sensor`
- `ESP8266WiFi.h`

## 🚀 Como Usar

1. Abra a Arduino IDE.
2. Selecione a placa: **NodeMCU 1.0 (ESP-12E Module)**.
3. Instale as bibliotecas listadas acima.
4. Conecte os fios conforme a tabela de conexões.
5. Faça o upload do código.
6. Acesse o IP mostrado no monitor serial para ver os dados no navegador.

## 🌐 Exemplo de Interface Web

Após conectar o ESP8266 à sua rede Wi-Fi, ele exibirá um IP no Serial Monitor. Acesse esse IP no navegador para visualizar:

