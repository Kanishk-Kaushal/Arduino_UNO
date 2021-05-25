const int buttonPin = 12;
int pushCount = 0;
int state = 0;
int previousState = 0;

void setup(){
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  state = digitalRead(buttonPin);
  if(state != previousState){
    if(state == HIGH){
      pushCount++;
     
    }
    delay(5);
  }
  previousState = state;

  int count = (pushCount-1)%8;
  Serial.println(count);

  switch(count){
    case 0:
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    break;

    case 1:
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    break;

    case 2:
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    break;

    case 3:
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    break;

    case 4:
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    break;

    case 5:
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    break;

    case 6:
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    break;

    case 7:
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    break;

    default:
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    break;
  }

}
