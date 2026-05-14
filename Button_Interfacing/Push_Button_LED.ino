int sw1 = 2;
int sw2 = 4;
int led1 = 3;
int led2 = 5;

void setup(){
  pinMode(sw1, INPUT_PULLUP); // Negative Logic Switch
  pinMode(sw2, INPUT);  // Positive Logic Switch
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop(){
 // Negative Logic - press=LOW → Positve Logic LED ON
  if(digitalRead(sw1) == LOW){
    digitalWrite(led1, HIGH);
  }else{
    digitalWrite(led1,LOW);
  }

  // Positive Logic - press=LOW → Negative Logic LED ON
  if(digitalRead(sw2) == HIGH){
    digitalWrite(led2, LOW);
  }else{
    digitalWrite(led2, HIGH);
  }
}
