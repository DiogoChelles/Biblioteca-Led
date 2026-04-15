/* 

Autor: Diogo Chelles

Programa: POO

Descrição: Exemplo 2 da atividade de POO

Data: 15/04/2026

Versão: 1.0

*/

#include <Arduino.h>
#include <LED.h>

/**
 * @brief Este projeto consiste em demonstrar o funcionamento das funções: "piscar(float frequencia, uint16_t repeticoes)", que faz com que o LED pisque conforme a frequência e número de repetições passadas pelo usuário, e "update()", que verifica e atualiza constantemente o estado do LED por meio de funções condicionais.
 */

Led led1(40);

void setup() 
{
  led1.piscar(28, 100);
}

void loop() 
{
  led1.update();
}

