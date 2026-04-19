/* 

Autor: Diogo Chelles

Programa: POO

Descrição: Exemplo 3 da atividade de POO

Data: 15/04/2026

Versão: 1.0

*/

#include <Arduino.h>
#include <LED.h>

/**
 * @brief Este projeto consiste em demonstrar o funcionamento das funções: "piscar(float frequencia)", que faz com que o LED pisque por tempo indefinido continuamente com base na frequência passada pelo usuário, que neste caso é "0.10", fazendo com que o LED fique aceso por 5 segundos e apagado por 5 segundos, e "update()", que Verifica e atualiza constantemente o estado do LED por meio do uso de funções condicionais.
 */

Led led1(40);

void setup() 
{
  led1.piscar(0.10);
}

void loop() 
{
  led1.update();
}
