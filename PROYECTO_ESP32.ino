/*void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(18,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2,HIGH);
digitalWrite(18,HIGH);
delay(2000);
digitalWrite(2,LOW);
digitalWrite(18,LOW);
delay(2000);
}
/*
 * 
 
 */
const int pinBoton = 27;     // OUT del módulo pulsador
const int pinLed = 14;      // Pin donde está conectado el LED
int estadoBoton = 0;

 const int ldr1Pin = 34;  // Pin analógico conectado al LDR1
 const int ldr2Pin = 35;  // Pin analógico conectado al LDR1
 
void setup() {
  Serial.begin(115200);  // Inicia la comunicación serial
  pinMode(pinBoton, INPUT);    // Entrada digital del botón
  pinMode(pinLed, OUTPUT);     // LED como salida
  pinMode(26,OUTPUT);
  digitalWrite(26,LOW);
  delay(500);
}

void loop() {
  estadoBoton = digitalRead(pinBoton);  // Leer el estado del botón
  int lectura1 = analogRead(ldr1Pin);  // Lee el valor analógico 1
  int lectura2 = analogRead(ldr2Pin);  // Lee el valor analógico 2
  Serial.print("Valor del LDR1: ");
  Serial.println(lectura1);           // Lo imprime en el monitor serial
  Serial.print("Valor del LDR2: ");
  Serial.println(lectura2);           // Lo imprime en el monitor serial
  delay(200);                        // Pausa para que sea más legible

  if ((lectura1<3000) && (lectura2<3000)) {
digitalWrite(26,HIGH);
delay(500);
    
  }else{

  }

  if (estadoBoton == HIGH) {
    digitalWrite(pinLed, LOW);   // Encender LED si el botón está presionado
    digitalWrite(26,LOW);
  } else {
    //digitalWrite(pinLed, LOW);    // Apagar LED si no lo está
  }
  }
