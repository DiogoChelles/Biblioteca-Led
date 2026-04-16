# Biblioteca LED

Biblioteca simples para controle não bloqueante de LED com Arduino e ESP32.

A classe `Led` permite:

- ligar o LED continuamente
- ligar por tempo determinado
- apagar
- alternar estado
- piscar continuamente
- piscar uma quantidade definida de vezes

O funcionamento é não bloqueante, usando `millis()`.  
Por isso, o método `update()` deve ser chamado repetidamente dentro do `loop()`.

---

## Estrutura da biblioteca

```text
BIBLIOTECA-LED/
      ├── examples/
      │   ├──exemplo-funcao-ligar/
      │   │   ├── .vscode/
      │   │   │   └── extensions.json
      │   │   ├── include/
      │   │   │   └── README
      │   │   ├── lib/
      │   │   │   └── README
      │   │   ├── src/
      │   │   │   └── exemplo-funcao-ligar.ino
      │   │   ├── .gitignore
      │   │   └── platformio.ini
      │   ├── exemplo-funcao-ligar-paramTempoLigado/
      │   │   ├── .vscode/
      │   │   │   └── extensions.json
      │   │   ├── include/
      │   │   │   └── README
      │   │   ├── lib/
      │   │   │   └── README
      │   │   ├── src/
      │   │   │   └── exemplo-funcao-ligar-paramTempoLigado.ino
      │   │   ├── .gitignore
      │   │   └── platformio.ini
      │   ├── exemplo-funcao-piscar/
      │   │   ├── .vscode/
      │   │   │   └── extensions.json
      │   │   ├── include/
      │   │   │   └── README
      │   │   ├── lib/
      │   │   │   └── README
      │   │   ├── src/
      │   │   │   └── exemplo-funcao-piscar.ino
      │   │   ├── .gitignore
      │   │   └── platformio.ini
      │   ├── exemplo-funcao-piscar-paramFrequencia/
      │   │   ├── .vscode/
      │   │   │   └── extensions.json
      │   │   ├── include/
      │   │   │   └── README
      │   │   ├── lib/
      │   │   │   └── README
      │   │   ├── src/
      │   │   │   └── exemplo-funcao-piscar-paramFrequencia.ino
      │   │   ├── .gitignore
      │   │   └── platformio.ini
      │   ├── exemplo-funcao-piscar-paramFrequencia-paramRepeticoes/
      │   │   ├── .vscode/
      │   │   │   └── extensions.json
      │   │   ├── include/
      │   │   │   └── README
      │   │   ├── lib/
      │   │   │   └── README
      │   │   ├── src/
      │   │   │   └── exemplo-funcao-piscar-paramFrequencia-paramRepeticoes.ino
      │   │   ├── .gitignore
      │   │   └── platformio.ini
      ├── src/
      │   ├── LED.h
      │   └── LED.cpp
      ├── library.json
      ├── README.md
      └── LICENSE
```
