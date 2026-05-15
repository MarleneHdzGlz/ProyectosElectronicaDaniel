#include <Arduino.h>

const int NEBULIZER_PIN = 0;                 // GP0 = pin físico 1
const unsigned long ON_TIME_MS  = 10000;     // 10 s encendido
const unsigned long OFF_TIME_MS = 6UL * 60UL * 60UL * 1000UL; // 6 h apagado

void setup() {
    pinMode(NEBULIZER_PIN, OUTPUT);
    digitalWrite(NEBULIZER_PIN, LOW);        // inicia apagado
}

void loop() {
    digitalWrite(NEBULIZER_PIN, HIGH);       // encender nebulizador
    delay(ON_TIME_MS);                       // 10 segundos

    digitalWrite(NEBULIZER_PIN, LOW);        // apagar nebulizador
    delay(OFF_TIME_MS);                      // 6 horas

   
}