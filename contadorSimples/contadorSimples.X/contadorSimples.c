#include <xc.h>

//Configurações
#pragma config FOSC = XT        //XT = Cristal com frequência de 455Khz até 4Mhz
#pragma config WDTE = OFF       //Watchdog timer desabilitado
#pragma config PWRTE = OFF      //Power-up Timer desabilitado
#pragma config MCLRE = ON       //Pino de reset habilitado
#pragma config BOREN = OFF      //Brown-out Reset desabilitado
#pragma config LVP = OFF        //Pino PGM (RB4) desabilitado
#pragma config CPD = OFF        //Data Code Protection desabiltado
#pragma config CP = OFF         //Code Protection desabilitado

//Valor do cristal = 4Mhz
#define _XTAL_FREQ 4000000

//Variáveis
                            /*0     1     2     3     4     5     6     7     8     9*/
unsigned char display[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x67};
unsigned char segmento;
int contador = 0;

void main(){
    TRISB = 0x00;       //Todos os pinos são saída
    PORTB = 0x00;       //Todos os pinos em LOW
    
    while(1){
        segmento = display[contador];                       //Varável "segmento" recebe o valor de "display"
        PORTB = segmento;                                   //Valor de "segmento" é enviado para o PORTB e os pinos são ligados
        
        __delay_ms(1000);
        contador++;                                         //O valor de "contado" é incrementado toda vez que o looping é reiniciado
        
        contador = (contador > 0x09) ? 0x00 : contador;     //Se contador for maior que 9, retorna a 0. Do contrario continua sendo ele mesmo   
    }
}