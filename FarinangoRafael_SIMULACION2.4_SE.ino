/*
 * CAPITULO II:PUERTOS DIGITALES
 * CODIFICACION 4: MANEJO DE CICLOS DE PROGRAMACION IN-OUT
 * OBJETIVO:ENCENDER Y APAGAR LEDS EN DEPENDENCIA CON BOTONES Y SWITCHS EN RELACION A CICLOS DE PROG.
 * NOMBRE: RAFAEL FARINANGO
 */

#define sw 6
#define boton 7
const int leds[6]={8,9,10,11,12,13};
int i;
int j=0;
int bin;
 
void setup() {
  for(i=0;i<6;i++){
    pinMode(leds[i],OUTPUT);
    }
  i=0;
  pinMode(sw,INPUT);
  pinMode(boton,INPUT);
}

void loop() {
  while(digitalRead(sw)==HIGH){
    for(i=0;i<6;i++){
      digitalWrite(leds[i],HIGH);
      delay(200);
      digitalWrite(leds[i],LOW);
      delay(200);
      }
    }
//contador binario de 6 bits
  if(digitalRead(boton)==LOW){
    delay(300);
    bin=0;
    j++;
    PORTB=bin|j; //funcion AND asignada al puerto 8
    } 
}
