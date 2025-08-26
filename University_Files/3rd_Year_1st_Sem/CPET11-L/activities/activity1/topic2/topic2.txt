int t = 0;

void setup()
{
  for(int x = 4 ; x<=11 ; x++){
  pinMode(x,OUTPUT);}
  pinMode (4 , OUTPUT);
  pinMode (5 , OUTPUT);
  pinMode (6 , OUTPUT);
  pinMode (7 , OUTPUT);
  pinMode (8 , OUTPUT);
  pinMode (9 , OUTPUT);
  pinMode (10 , OUTPUT);
  pinMode (11 , OUTPUT);
  pinMode(3, INPUT);
}

void loop()
{
  if (digitalRead(3)==HIGH){
    t++;
    delay(100);
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
  pattern5();}

}
  
void pattern1(){
  for(int x = 4; x<=11 ; x++){
    digitalWrite(x, HIGH);
    delay(100);
    digitalWrite(x, LOW);
    delay(100);}}
    
void pattern2(){    
  for(int x = 4; x<=11 ; x++){
    digitalWrite(x, HIGH);
    delay(100);}
  for(int x = 11 ; x>=4 ; x--){
    digitalWrite(x, LOW);
    delay(100);}}
    
void pattern3(){
  for(int x = 4; x<=11 ; x++){
    digitalWrite(x, HIGH);
    delay(100);
    digitalWrite(x, LOW);}
  for(int x = 11; x>=4 ; x--){
    digitalWrite(x, HIGH);
    delay(100);
    digitalWrite(x, LOW);}}
 
void pattern4(){
  digitalWrite(4, HIGH);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(11, LOW);
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(100);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(4, HIGH);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(4, LOW);
  digitalWrite(11, LOW);
  delay(100);}

  void pattern5 (){
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 digitalWrite(7, LOW);
 digitalWrite(8, LOW);
 digitalWrite(9, LOW);
 digitalWrite(10, LOW);
 digitalWrite(11, LOW);
 t=0;}