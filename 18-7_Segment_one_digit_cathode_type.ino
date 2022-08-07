int A = 13;
int B = 12;
int C = 11;
int D = 10;
int E = 9;
int F = 8;
int G = 7;


void setup() 
{
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  
}

void sravani(int value){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);

 if (value==0)
 {
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);

 }
 if (value==1)
 {

  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
 }
 if (value==2)
 {
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(G,LOW);
  
 }
 if (value==3)
 {
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(G,LOW);
  
 }
 if (value==4)
 {
 
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
 }
 if (value==5)
 {
  digitalWrite(A,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
 }
 if (value==6)
 {
  digitalWrite(A,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
 }
 if (value==7)
 {
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  
 }
 if (value==8)
 {
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
 }
 if (value==9)
 {
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
 }
}
void loop()
{
  sravani(0);
  delay(200);
  sravani(1);
  delay(200);
  sravani(2);
  delay(200);
  sravani(3);
  delay(200);
  sravani(4);
  delay(200);
  sravani(5);
  delay(200);
  sravani(6);
  delay(200);
  sravani(7);
  delay(200);
  sravani(8);
  delay(200);
  sravani(9);
  delay(200);
  
}
  
