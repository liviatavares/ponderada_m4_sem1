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
