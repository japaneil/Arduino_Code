int motor1pin1 = 2;
int motor1pin2 = 3;
int motor2pin1 = 4;
int motor2pin2 = 5;
int s1 = A5;
int s2 = A0;
int s3 = A1;
int s4 = A2;
int s5 = A3;
int s6 = A4;
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
  Serial.println(analogRead(s3));
  delay(1000);
  
}
