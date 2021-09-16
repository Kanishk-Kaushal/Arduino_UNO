//master
int button=13;
int b=0;
int ps=0;
int push=0;
int p=0;
void setup()
{
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop()
{
  b=digitalRead(button);
  if(b!=ps)
  {
    if(b==HIGH)
    {
      push++;
    }
    delay(50);
  }
  ps=b;
  p=(push%2);


  if(p==1)
 {
   Serial.write('1');
 }
  else
    Serial.write('2');

  delay(20);
}
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//slave
int led=13;
char message;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 if(Serial.available())
 {
   message=Serial.read();
   if(message=='1')
   {
     digitalWrite(led,HIGH);
    }
   else if(message=='2')
   {
     digitalWrite(led,LOW);
   }

 }Serial.println(message);
  delay(20);

}
