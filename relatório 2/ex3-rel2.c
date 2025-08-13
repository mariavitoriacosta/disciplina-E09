#define LIGADA 0
#define DESLIGADA 1

#define INTERRUPTOR_OFF 0
#define INTERRUPTOR_ON 1

unsigned char estado_atual = DESLIGADA, lamp = 0, interruptor = 0;

int main(void){
    for(;;){
        switch (estado_atual) {
            case DESLIGADA:
                lamp = 0;
                if(interruptor == INTERRUPTOR_ON) {
                    estado_atual = LIGADA;
                }
                break;    
            case LIGADA: 
                lamp = 1;
                if(interruptor == INTERRUPTOR_OFF){
                    estado_atual = DESLIGADA;
                }
                break;
            
            default:
                
                break;
        }
    }
}