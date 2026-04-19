/* 

Autor: Diogo Chelles

Programa: POO

Descrição: Exemplo 1 da atividade de POO

Data: 15/04/2026

Versão: 1.0

*/

#include <Arduino.h>
#include <LED.h>

/**
 * @brief Este projeto consiste em demonstrar o funcionamento das funções: "piscar()", que faz com que o LED pisque de forma contínua na frequência de 1Hz, e "update()", que Verifica e atualiza constantemente o estado do LED por meio do uso de funções condicionais.
 */

Led led1(40);

void setup() 
{
  led1.piscar();
}

void loop() 
{
  led1.update();
}
