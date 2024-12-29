#include <xc.h>

//Configura��es
#pragma config FOSC = XT        //XT = Cristal com frequ�ncia de 455Khz at� 4Mhz
#pragma config WDTE = OFF       //Watchdog timer desabilitado
#pragma config PWRTE = OFF      //Power-up Timer desabilitado
#pragma config MCLRE = ON       //Pino de reset habilitado
#pragma config BOREN = OFF      //Brown-out Reset desabilitado
#pragma config LVP = OFF        //Pino PGM (RB4) desabilitado
#pragma config CPD = OFF        //Data Code Protection desabiltado
#pragma config CP = OFF         //Code Protection desabilitado

//Valor do cristal = 4Mhz
#define _XTAL_FREQ 4000000

//Vari�veis
                            /*0     1     2     3     4     5     6     7     8     9*/
unsigned char display[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x67};
unsigned char segmento;
int contador = 0;

void main(){
    TRISB = 0x00;       //Todos os pinos s�o sa�da
    PORTB = 0x00;       //Todos os pinos em LOW
    
    while(1){
        segmento = display[contador];                       //Var�vel "segmento" recebe o valor de "display"
        PORTB = segmento;                                   //Valor de "segmento" � enviado para o PORTB e os pinos s�o ligados
        
        __delay_ms(1000);
        contador++;                                         //O valor de "contado" � incrementado toda vez que o looping � reiniciado
        
        contador = (contador > 0x09) ? 0x00 : contador;     //Se contador for maior que 9, retorna a 0. Do contrario continua sendo ele mesmo   
    }
}