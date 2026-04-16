/* 

Autor: Diogo Chelles

Programa: POO

Descrição: Exemplo 5 da atividade de POO

Data: 15/04/2026

Versão: 1.0

*/

#include <Arduino.h>
#include <LED.h>

/**
 * @brief Este projeto consiste em demonstrar o funcionamento das funções: "ligar(uint32_t tempoLigado_ms)", que faz o LED acender e permanecer aceso pelo tempo determinado - em milissegundos - pelo usuário, e "update()", que Verifica e atualiza constantemente o estado do LED por meio do uso de funções condicionais.
 */

Led led1(40);

void setup() 
{
  led1.ligar(5000);
}

void loop() 
{
  led1.update();
}