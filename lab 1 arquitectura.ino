int MonitorSerial;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {

  if (digitalRead(2) == 1) {
    digitalWrite(3, LOW);
    delay(250);
    digitalWrite(4, LOW);
    delay(250);
    digitalWrite(5, LOW);
    delay(250);
    digitalWrite(6, LOW);
    delay(250);
    digitalWrite(7, LOW);
    delay(250);
    digitalWrite(8, LOW);
    delay(250);
    digitalWrite(9, LOW);
    delay(250);
    digitalWrite(10, LOW);
    delay(250);
    digitalWrite(10, HIGH);
    delay(250);
    digitalWrite(9, HIGH);
    delay(250);
    digitalWrite(8, HIGH);
    delay(250);
    digitalWrite(7, HIGH);
    delay(250);
    digitalWrite(6, HIGH);
    delay(250);
    digitalWrite(5, HIGH);
    delay(250);
    digitalWrite(4, HIGH);
    delay(250);
    digitalWrite(3, HIGH);
    delay(250);
  } else if(Serial.available()>0){
    MonitorSerial = Serial.read();
    if(MonitorSerial == '2'){
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      delay(1800);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      delay(1800);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(10, HIGH);
      delay(1800);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      delay(1800);
      Serial.println("INTERMITENTES");
    } 
  }else {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
  }
}