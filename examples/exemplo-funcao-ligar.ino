/* 

Autor: Diogo Chelles

Programa: POO

Descrição: Exemplo 4 da atividade de POO

Data: 15/04/2026

Versão: 1.0

*/

#include <Arduino.h>
#include <LED.h>

/**
 * @brief Este projeto consiste em demonstrar o funcionamento das funções: "ligar()", que faz o LED acender e permanecer aceso por tempo indeterminado, e "update()", que Verifica e atualiza constantemente o estado do LED por meio do uso de funções condicionais.
 */

Led led1(40);

void setup() 
{
  led1.ligar();
}

void loop() 
{
  led1.update();
}