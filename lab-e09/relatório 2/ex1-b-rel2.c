#define VERDE    0
#define AMARELO  1
#define VERMELHO 2

#define PIN_VERDE     2
#define PIN_AMARELO   3
#define PIN_VERMELHO  4

#ifdef ARDUINO
  #define delay_ms(ms) delay(ms)
#endif

unsigned char estado_atual = VERDE;

static inline void setSaidas(unsigned char v, unsigned char a, unsigned char r) {
  digitalWrite(PIN_VERDE,   v);
  digitalWrite(PIN_AMARELO, a);
  digitalWrite(PIN_VERMELHO,r);
}

int main(void)
{
  pinMode(PIN_VERDE,   OUTPUT);
  pinMode(PIN_AMARELO, OUTPUT);
  pinMode(PIN_VERMELHO,OUTPUT);

  for(;;) {
    switch (estado_atual) {

      case VERDE:
        setSaidas(HIGH, LOW,  LOW);
        delay_ms(12000);
        estado_atual = AMARELO;
        break;

      case AMARELO:
        setSaidas(LOW,  HIGH, LOW);
        delay_ms(3000);             
        estado_atual = VERMELHO;
        break;

      case VERMELHO:
        setSaidas(LOW,  LOW,  HIGH); 
        delay_ms(15000);            
        estado_atual = VERDE;
        break;

      default:
        estado_atual = VERDE;        
        break;
    }
  }
  return 0;
}
