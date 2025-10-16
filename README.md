# Primeira ponderada - LED interno e externo

## 1. Parte 1 - piscando o led interno do arduíno

Na primeira parte, fiz um código simples que ajuda a piscar, com um delay definido por mim de 2 segundos, o led interno ao arduíno, conectado à porta 13 deste. Na imagem abaixo, em laranja, pode-se observar o led interno.

<div align="center">
<sub>Figura 01: Imagem do arduíno.</sub>
</div>
<div align="center">
<img src="parte 1/assets/arduino.png">
</div>

<div align="center">
<sub>Fonte: Simulador TinkerCad.</sub>
</div>

Para isso, após conectar o led no computador, abri o Arduino IDE e, depois de garantir que o Arduino Uno estava selecionado e a porta correta do computador estava conectada, pude rodar o código contido em `blink.ino`, presente após a imagem.

<div align="center">
<sub>Figura 02: Print do Arduino IDE.</sub>
</div>
<div align="center">
<img src="parte 1/assets/arduinoIDE.png">
</div>

<div align="center">
<sub>Fonte: Arduino IDE.</sub>
</div>

```c++
// a função setup cria um código inicial, que será rodado uma vez no início
void setup() {
  // configura o led_builtin do arduíno (led interno, conectado à porta 13) como saída
  pinMode(LED_BUILTIN, OUTPUT);
}
// a função loop cria um código que rodará continuamente
void loop() {
  // escreve um valor HIGH (ligado) em um pino digital configurado como saída (nesse caso o led builtin)
  digitalWrite(LED_BUILTIN, HIGH);
  // delay de 2 segundos (2 mil milissegundos)
  delay(2000);
  // escreve o valor LOW (desligado) no led interno
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);
}
```

O código acima faz o led interno ao arduíno piscar, com um delay de 2 segundos.

## 2. Parte 2 - Piscando um led físico (protótipo)

Para essa segunda parte, usaremos o simulador TinkerCad para emular um led real piscando a partir de um Arduino Uno.

Coloquei, no protótipo, os seguintes componentes:

1. Protoboard - placa de prototipação de circuito .
2. Arduino Uno 
3. Jumpers preto e vermelho
4. Led vermelho
5. Resistor de 1kΩ

<div align="center">
<sub>Figura 03: Protótipo de circuito do TinkerCad.</sub>
</div>
<div align="center">
<img src="parte 2/assets/pisca_pisca.png">
</div>

<div align="center">
<sub>Fonte: TinkerCad.</sub>
</div>

As ligações realizadas foram as seguintes: 

Com o fio vermelho, conectei a porta 13 do arduíno à coluna 19 da protoboard. 

Com o fio preto, conectei o GND do arduíno à coluna 14.

O resistor foi conectado à coluna 19 (porta 13) e à coluna 15.

O catodo do led foi conectado à coluna 14 (GND), e o anodo do led foi conectado à coluna 15 (uma das pernas do resistor).

Abaixo, segue a representação esquemática do circuito descrito acima.

<div align="center">
<sub>Figura 04: Esquemático de circuito do TinkerCad.</sub>
</div>
<div align="center">
<img src="parte 2/assets/esquematico.png">
</div>

<div align="center">
<sub>Fonte: TinkerCad.</sub>
</div>

Com isso, o simulador roda mostrando o led interno do arduíno piscando juntamente com o led externo. A simulação completa pode ser observada em `piscapisca.brd`.

A partir disso, pode-se criar um modelo físico, observado na imagem abaixo: 

<div align="center">
<sub>Figura 05: Esquemático de circuito do TinkerCad.</sub>
</div>
<div align="center">
<img src="parte 2/assets/led.png">
</div>

<div align="center">
<sub>Fonte: TinkerCad.</sub>
</div>

Em `assets`, pode-se observar um vídeo do led funcionando, e outro vídeo que mostra vários leds piscando, com um circuito construído de maneira similar.



