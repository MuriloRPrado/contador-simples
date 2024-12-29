<h1>Contador Simples com Display de 7 Segmentos</h1>

<p>Este projeto foi criado para testar habilidades e conhecimentos em microcontroladores PIC (família 16F) e na linguagem C. Trata-se de um contador simples que inicia em zero, conta até nove e retorna para zero novamente, exibindo os números em um Display de 7 Segmentos do tipo cátodo comum.</p>

<h2>Construido com:</h2>
<ul>
  <li><b>Linguagem C:</b> para implementação do firmware;</li>
  <li><b>MPLAB X IDE:</b> ambiente de desenvolvimento integrado para a microcontroladores PIC;</li>
  <li><b>MPLAB IPE:</b> ferramenta para gravação de programas em dispositivos Microchip PIC;</li>
  <li><b>KiCad:</b> é um programa utilizado para criação de esquemáticos e layout de placas de circuito impresso (PCB), além da visualização 3D.</li>
</ul>

<h2>Lista de Componentes Utilizados</h2>
<table border="1">
<thead>
  <tr>
    <th>Quantidade</th>
    <th>Componente</th>
  </tr>
</thead>
<tbody>
  <tr>
    <th>1</th>
    <th>PIC16F628A</th>
  </tr>
  <tr>
    <th>1</th>
    <th>Display de 7 Segmentos Cátodo Comum</th>
  </tr>
  <tr>
    <th>1</th>
    <th>Cristal de 4Mhz</th>
  </tr>
  <tr>
    <th>2</th>
    <th>Capacitor Cerâmico de 22pF</th>
  </tr>
   <tr>
    <th>2</th>
    <th>Capacitor Cerâmico de 100nF</th>
  </tr>
   <tr>
    <th>1</th>
    <th>Capacitor Eletrolitico de 100uF</th>
  </tr>
    <tr>
    <th>1</th>
    <th>Resistor 330 ohms</th>
  </tr>
   <tr>
    <th>1</th>
    <th>Resistor 10k ohms</th>
  </tr>
   <tr>
    <th>7</th>
    <th>Resistor 220 ohms</th>
  </tr>
   <tr>
    <th>1</th>
    <th>LED (Pode ser de qualquer cor)</th>
  </tr>
   <tr>
    <th>1</th>
    <th>Adaptador P4 Fêmea</th>
  </tr>
   <tr>
    <th>1</th>
    <th>Fonte P4 de 5V</th>
  </tr>
  <tr>
    <th></th>
    <th>Jumpers para ligação</th>
  </tr>
</tbody> 
</table>

<h2>Contador Simples com Display de 7 Segmentos</h2>

<p>O programa faz uso de uma tabela para controlar os segmentos do display, associando cada número (0-9) ao padrão correspondente em um Display de 7 Segmentos. O contador incrementa de 1 a cada segundo, exibindo os números sequencialmente e retornando a 0 após atingir 9.</p>

<h2>Como utilizar:</h2>

<p>1- Conecte os componentes seguindo o esquema;</p>
<p>2- Grave o firmware no microcontralador PIC16F628A utilizando o MPLAB IPE;</p>
<p>3- Ligue a fonte de 5V no circuito;</p>
<p>4- O contador será exibido automáticamente no display e iniciará a contagem.</p>

<h2>Esquema Elétrico</h2>

Abaixo, está o esquema elétrico do projeto:

![image](https://github.com/user-attachments/assets/b76369ad-2b26-4bfc-a3b3-1a58a902d6fb)

Ele foi desenvolvimento no KiCad e demonstra as conexões do PIC16F628A com o Display de 7 Segmento e os demais componentes necessários para o funcionamento do circuito.

<p><b>Explicações importantes sobre o circuito:</b></p> 
<ul>
  <li>Nos pinos VDD e VSS foi utilizado um capacitor carâmico de 100nF como capacitor de desacoplamento, a fim de estabilizar a alimentação;</li>
  <li>No cristal foi utilizado dois capacitores cerâmico de 22pF ligado ao GND para estabilizar o funcionamento do oscilador;</li>
  <li>No pino de reset (RB5/MCLR/VPP) foi utilizado um resistor de 10k ohms e um capacitor cerâmico de 100nF. O resistor para garantir que o pino MCLR permaneça em nível alto e o capacitor para manter um funcionamento estável;</li>
  <li>Para manter a alimentação do circuito estável, conectar um capacitor eletrolitico de 100nF nas entradas (Postivo e negativo);</li>
  <li>Para saber se a protoboard está sendo alimentada pela fonte 5V, conectar um LED junto com um resistor de 330 ohms nas entradas de alimentação (Positivo e negativo). Isso pode ser visualizado na foto do protótipo físico que será mostrado abaixo.</li>
</ul>

<h2>Protótipo Físico</h2>

<p>Abaixo, está uma foto do protótipo físico funcionando para demonstrar o contador em ação: </p>

![prototipoFisico](https://github.com/user-attachments/assets/532769fc-5257-4fbe-ad4d-c15db21df2ab)




