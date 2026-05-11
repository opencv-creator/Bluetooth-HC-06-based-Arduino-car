// Motor A (Left)
int in1 = 8;
int in2 = 9;
// Motor B (Right)
int in3 = 10;
int in4 = 11;

void motor_setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void direction(int i) {
  if(i==1)
  {

  forward();


  }
  else if(i==4)
  {

  backward();

  }
    else if(i==3)
  {

  turnLeft();

  }
    else if(i==2)
  {

  turnRight();;

  }
      else if(i==5)
  {

   stopMotors();

  }

  
}

// DIRECTION FUNCTIONS
void forward() {
  // Motor A Forward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  // Motor B Forward
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void backward() {
  // Motor A Backward
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  // Motor B Backward
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void turnLeft() {
  // Motor A Backward, Motor B Forward
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void turnRight() {
  // Motor A Forward, Motor B Backward
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void stopMotors() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}