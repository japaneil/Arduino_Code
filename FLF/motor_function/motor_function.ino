int motor1pin1 = 2;
int motor1pin2 = 3;
int motor2pin1 = 4;
int motor2pin2 = 5;
int s1 = A5;
int s2 = A4;
int s3 = A3;
int s4 = A2;
int s5 = A1;
int colors1 = 0;
int colors2 = 0;
int colors3 = 0;
int colors4 = 0;
int colors5 = 0;


void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT); 
  pinMode(motor2pin1, OUTPUT); 
  pinMode(motor2pin2, OUTPUT);
  pinMode(s1, INPUT);
  pinMode(s2, INPUT); 
  pinMode(s3, INPUT); 
  pinMode(s4, INPUT);
  pinMode(s5, INPUT); 
  pinMode(s6, INPUT);
  Serial.begin(9600);
  
}

void forward() {
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);
  
  }
void backward() {
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);

  }
void left() {
  digitalWrite(motor1pin1, HIGH);
  digitalWrite(motor1pin2, LOW);
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, HIGH);  
  
  }
void right() {
  digitalWrite(motor1pin1, LOW);
  digitalWrite(motor1pin2, HIGH);
  digitalWrite(motor2pin1, HIGH);
  digitalWrite(motor2pin2, LOW);
  
  }

void loop() {
    colors1 = analogRead(s1);
    colors2 = analogRead(s2);
    colors3 = analogRead(s3);
    colors4 = analogRead(s4);
    colors5 = analogRead(s5);

    if(colors3<100){
      forward();
    }

  
}
