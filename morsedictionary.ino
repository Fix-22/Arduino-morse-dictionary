//MORSE DICTIONARY

#include "pitches.h"

const int led8 = 8; //punto
const int led2 = 2; //linea
const int led13 = 13; //in funzione
int buzzer = 9;
int pulsante = 7;
int pulsantestato = LOW;

int melodia[] = {
  NOTE_C3, NOTE_F3, NOTE_C3, NOTE_D2, NOTE_C3
};

int durataNote[] = {
  4, 8, 5, 5, 3
};

int numeroNote = 5;



char tastiera = 0;


void setup() {
  pinMode(led8, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led13, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  for(int i = 0; i < numeroNote; i++){
    int durata = 1500 / durataNote[i];
    tone(buzzer, melodia[i], durata);
    delay(durata * 1.3);
  }
  digitalWrite(led13, HIGH);
}

void loop() {
  tastiera = Serial.read();
  switch(tastiera){

  
  
  //LETTERE

  case 'a':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'b':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'c':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'd':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'e':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'f':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'g':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW); 
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'h':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'i':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);

  case 'j':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'k':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);  
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'l':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'm':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'n':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'o':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'p':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 'q':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'r':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 's':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case 't':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'u':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'v':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'w':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'x':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'y':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500); 
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case 'z':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  

  //NUMERI
  
  case '1':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case '2':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case '3':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;

  case '4':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;
  
  case '5':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case '6':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case '7':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case '8':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;

  case '9':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led8, HIGH);
  delay(500);
  digitalWrite(led8, LOW);
  delay(1000);
  break;
  
  case '0':
  digitalWrite(led13, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(1000);
  break;
  
  
  default:
  Serial.flush();
  digitalWrite(led13, HIGH);
  
  
}

}
