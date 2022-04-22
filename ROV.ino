#define kanan1 2
#define kanan2 3
#define kiri1 4
#define kiri2 5
#define dive1 6
#define dive2 7

#define speed1 9
#define speed2 10

#define kontrolMaju 12
#define kontrolMundur 13
#define kontrolKanan 0
#define kontrolKiri 1

void setup() {
  pinMode(kanan1, OUTPUT);
  pinMode(kanan2, OUTPUT);
  pinMode(kiri1, OUTPUT);
  pinMode(kiri2, OUTPUT);

  pinMode(kontrolMaju, INPUT);
  pinMode(kontrolMundur, INPUT);
  pinMode(kontrolKanan, INPUT);
  pinMode(kontrolKiri, INPUT);

  pinMode(speed1, OUTPUT);
  pinMode(speed2, OUTPUT);
}

void loop() {
  int upndown = analogRead(A0)/4;
  analogWrite(speed2, upndown);
  selam();
  int n = analogRead(A1)/4;
  analogWrite(speed1, n);
  if (digitalRead(kontrolMaju)==1){
    maju();
  }
  if (digitalRead(kontrolMundur)==1){
    mundur();
  }
  if (digitalRead(kontrolKanan)==1){
    kanan();
  }
  if (digitalRead(kontrolKiri)==1){
    kiri();
  }
}

void maju(){
  digitalWrite(kanan1, HIGH);
  digitalWrite(kanan2, LOW);
  digitalWrite(kiri1, HIGH);
  digitalWrite(kiri2, LOW);
}

void mundur(){
  digitalWrite(kanan1, LOW);
  digitalWrite(kanan2, HIGH);
  digitalWrite(kiri1, LOW);
  digitalWrite(kiri2, HIGH);
}

void kanan(){
  digitalWrite(kanan1, LOW);
  digitalWrite(kanan2, HIGH);
  digitalWrite(kiri1, HIGH);
  digitalWrite(kiri2, LOW);
}

void kiri(){
  digitalWrite(kanan1, HIGH);
  digitalWrite(kanan2, LOW);
  digitalWrite(kiri1, LOW);
  digitalWrite(kiri2, HIGH);
}

void selam(){
  digitalWrite(dive1, HIGH);
  digitalWrite(dive2, LOW);
}
