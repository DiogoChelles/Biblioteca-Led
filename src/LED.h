#ifndef LED_h
#define LED_h

#include <Arduino.h>


/**
 * @class Led
 * @brief Classe para controle não bloqueante de um LED.
 * Permite ligar, desligar, ligar por tempo determinado,
 * piscar continuamente e piscar por quantidade definida.
 * 
 * @note O método "update()" deve ser chamado continuamente dentro do "loop()".
 */
class Led
{
    private:
        uint8_t pino;
        bool estado;    //atributo
        bool desligarPorTempo = false;
        uint32_t desligarNoMomento;
        
        uint32_t tempoAnteriorPiscar;
        uint32_t tempoEspera;
        bool estadoPiscar;
        uint16_t repeticoes;

        /**
         * @brief Processa a lógica de piscada do LED.
         */
        void funcaoPiscar();

        /**
         * @brief Processa o desligamento temporizado.
        */
        void funcaoDesligamento();

    public:

        /**
         * @brief Constroi um objeto Led.
         * @param pin Número do pino digital onde o LED está conectado.
         */
        Led(uint8_t pin);

        /**
         * @brief Liga o LED continuamente.
         */
        void ligar();
        
        // ⇧⇧⇧ Método sobrecarga

        /**
         * @brief Liga o LED por um tempo determinado.
         * @param tempoLigado_ms Tempo, em milissegundos, em que o LED ficará ligado.
         */
        void ligar(uint32_t tempoLigado_ms);

        /**
         * @brief Desliga o LED e cancela os modos automáticos.
         */
        void desligar();

        /**
         * @brief Inicia a piscada continua em 1Hz.
         */
        void piscar();

        /**
         * @brief 
         * @param frequencia Frequência da piscada em Hertz.
         */
        void piscar(float frequencia);

        /**
         * @brief Pisca o LED na frequência desejada uma quantidade definida de vezes.
         * @param repeticoes Quantidade de piscadas completas.
         */
        void piscar(float frequencia, uint16_t repeticoes);

        /**
         * @brief Descreve o estado do LED
         */
        bool getEstado();

        /**
         * @brief Retorna o pino configurado para o LED 
         */
        uint8_t getPino();

        /**
         * @brief Define manualmente o estado do LED
         * @param estado "true" para ligado, "false" para desligado.
         */
        void setEstado(bool estado);

        /**
         * @brief Altera o estado atual do LED para seu estado oposto.
         */
        void alternar();

        /**
         * @brief
         */
        void update();

};

#endif