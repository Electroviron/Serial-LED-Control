int ledPin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Send '1' to turn LED ON, '0' to turn LED OFF");
}

void loop() {
  // put your main code here, to run repeatedly:


  if(Serial.available() > 0){
    char command = Serial.read();

    if(command == '1'){
      digitalWrite(ledPin, HIGH);
      Serial.println("LED ON");
    }

    if(command == '0'){
      digitalWrite(ledPin, LOW);
      Serial.println("LED OFF");
    }
  }

}
