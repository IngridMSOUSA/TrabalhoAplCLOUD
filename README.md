## Projeto: Leitura de Dados Ambientais com BMP280 e NodeMCU ESP8266MOD

Este projeto utiliza o microcontrolador NodeMCU ESP8266MOD em conjunto com o sensor BMP280 (ou BME280) para ler dados de temperatura, pressão atmosférica e altitude, com exibição em uma interface web acessível via Wi-Fi.

## 🔧 Componentes Utilizados:

NodeMCU ESP8266MOD

Sensor BMP280 (ou BME280)

Protoboard

Jumpers macho-fêmea

Fonte USB 5V

## 🔌 Conexões (I2C:

BMP280 Pin	NodeMCU Pin
VCC	3V3
GND	GND
SCL	D1 (GPIO5)
SDA	D2 (GPIO4)

Certifique-se de que o sensor esteja configurado para I2C e utilizando o endereço padrão 0x76 ou 0x77.

## 👥 Integrantes do Projeto:

Danilo Borges Gonçalves da Silva

Ingrid Moreira Sousa

Kauã Lessa

Leonardo Pereira Campos

Yan Augusto Machado Nascimento

## 💻 Bibliotecas Necessárias:
Instale via Gerenciador de Bibliotecas da Arduino IDE:

Adafruit BME280

Adafruit Unified Sensor

ESP8266WiFi.h

## 🚀 Como Usar:

Abra a Arduino IDE.

Selecione a placa: NodeMCU 1.0 (ESP-12E Module).

Instale as bibliotecas listadas acima.

Conecte os fios conforme a tabela de conexões.

Faça o upload do código para o NodeMCU.

Acesse o IP mostrado no Monitor Serial para visualizar os dados em um navegador.

## 🌐 Exemplo de Interface Web:

Após conectar o ESP8266 à sua rede Wi-Fi, ele exibirá um endereço IP no Monitor Serial.

Acesse esse IP em qualquer navegador da mesma rede para visualizar os dados coletados em tempo real, como temperatura, pressão e altitude.
