#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define S_TEMP 0b00000001
#define S_UMID 0b00000010
#define S_PRESS 0b00000100
#define S_LUMIN 0b00001000
#define S_MOV 0b00010000

// simulação do registrador SENSOR_REG
uint8_t SENSOR_REG = 0b00000000;

uint8_t activate_sensor (uint8_t sensor) {
    SENSOR_REG = SENSOR_REG | sensor;
    return SENSOR_REG;
}

uint8_t disable_sensor (uint8_t sensor) {
    SENSOR_REG = SENSOR_REG & ~sensor;
    return SENSOR_REG;
}

bool verify_sensor (uint8_t sensor) {
    if(sensor == SENSOR_REG & sensor) {
        return true;
    }
    return false;
}

int main() {
    activate_sensor(S_TEMP);
    activate_sensor(S_MOV);

    disable_sensor(S_TEMP);

    if(verify_sensor(S_PRESS) == true){
        printf("O sensor de pressão está ligado!");
    }
    else{
        printf("O sensor de pressão está desligado!");
    }
}