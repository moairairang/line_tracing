void InitialSpeed(int MotorSpeed){
  Error = 0 ;
  PreError = 0;
  Integral = 0;
  Ki = 0;
  MaxSpeed = MotorSpeed;

  if(MotorSpeed < 40){
    Kp = 90;
    Kd = 45;
    LeftSpeed = MotorSpeed - 3;  
    RightSpeed = MotorSpeed ;
  }
  else if(MotorSpeed <= 45){
    Kp = 90;
    Kd = 45;
    LeftSpeed = MotorSpeed - 3;
    RightSpeed = MotorSpeed ;
  }
  else if(MotorSpeed <= 100){
    Kp = 90;
    Kd = 45;
    LeftSpeed = MotorSpeed - 3;
    RightSpeed = MotorSpeed ;
  }
}