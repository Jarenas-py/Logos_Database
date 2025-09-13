int t = 0;
int potentio= A0;
int delayTime;

void setup(){
  for(int x = 4 ; x<=11 ; x++){
  pinMode(x, OUTPUT);}
  pinMode(3, INPUT);
}

void loop(){
  if (digitalRead(3)==HIGH){
    t++;
    delay(10);
  }
    
if (t==1){
  pattern1();}
if (t==2){
  pattern2();}
if (t==3){
  pattern3();}
if (t==4){
  pattern4();}
if (t==5){
  reset();}
}
  
void pattern1(){
  for(int x = 4; x<=11 ; x++){
    delayTime= analogRead(potentio);
    digitalWrite(x, HIGH);
    delay(delayTime);
    digitalWrite(x, LOW);
    delay(delayTime);}}
    
void pattern2(){    
  for(int x = 4; x<=11 ; x++){
    delayTime= analogRead(potentio);
    digitalWrite(x, HIGH);
    delay(delayTime);}

  for(int x = 11 ; x>= 4 ; x--){
    delayTime= analogRead(potentio);
    digitalWrite(x, LOW);
    delay(delayTime);}}
    
void pattern3(){
  for(int x = 4; x<=11 ; x++){
    delayTime= analogRead(potentio);
    digitalWrite(x, HIGH);
    delay(delayTime);
    digitalWrite(x, LOW);}

  for(int x = 11; x>=4 ; x--){
    delayTime= analogRead(potentio);
    digitalWrite(x, HIGH);
    delay(delayTime);
    digitalWrite(x, LOW);}}
 
void pattern4(){
  delayTime= analogRead(potentio);
  digitalWrite(4, HIGH);
  digitalWrite(11, HIGH);
  delay(delayTime);
  digitalWrite(4, LOW);
  digitalWrite(11, LOW);
  delay(delayTime);

  delayTime= analogRead(potentio);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(delayTime);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  delay(delayTime);

  delayTime= analogRead(potentio);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(delayTime);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(delayTime);

  delayTime= analogRead(potentio);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(delayTime);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(delayTime);

  delayTime= analogRead(potentio);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(delayTime);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(delayTime);

  delayTime= analogRead(potentio);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(delayTime);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(delayTime);

  delayTime= analogRead(potentio);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(delayTime);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  delay(delayTime);

  delayTime= analogRead(potentio);
  digitalWrite(4, HIGH);
  digitalWrite(11, HIGH);
  delay(delayTime);
  digitalWrite(4, LOW);
  digitalWrite(11, LOW);
  delay(delayTime);}

void reset(){
  for (int i = 0 ; i < 8 ; i++){
    digitalWrite(i, LOW);
    t = 0;
  }
}