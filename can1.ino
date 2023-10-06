void can1() {
//  TracSimpleJC(Speed, Speed + 15);
//  TurnLeft(); //Left1
//  TracSimpleJC(Speed, Speed + 105);
//  TurnLeft(); //Left2
//  TracSimpleJC(Speed, Speed + 10);
//  TurnLeft(); //Left3
//  TracSimpleJC(Speed, Speed + 5);
//  TurnLeft(); //Left4
//  TracSimpleJC(Speed, Speed + 10);
//  TurnRight(); //Right1
//  TracSimpleJC(Speed, Speed + 55);
//  TracSimpleJC(Speed, Speed + 10);
//  TurnRight(); //Right2
//  TracSimpleJC(Speed, Speed + 10);
//  TurnRight();
//  TracSimpleJC(Speed, SlowSpeed + 20);
//  Speed = 42;
//  TracSimpleJC(Speed - 3, 100);
//  TracSimpleJC(Speed, 100);
//  TracSimpleJC(Speed, 100);
//  TurnLeft();
//  TracSimpleJC(Speed, 50);
//  TracSimpleJC(SlowSpeed, 50);
//  beep();
//  while(1){
//    ao();
//  }
  Speed = 45;
  TracPIDJC(Speed, Speed * 1.2);
  TurnLeft(); //Left1
  TracPIDJC(Speed, Speed * 2);
  TurnLeft(); //Left2
  TracPIDJC(Speed, Speed * 2);
  TurnLeft2(); //Left3
  TracPIDJC(Speed, Speed - 15);
  TurnLeft(); //Left4
  TracPIDJC(Speed, Speed + 25);
  TurnLeft(); //Left5
  TracPIDJC(Speed, Speed * 1.1);
  TurnRight();
  TracPIDJC(Speed, Speed * 0);
  Speed = 45;
  TracPIDJC(Speed, Speed * 1);
  TurnRight(); //Right2
  TracPIDJC(Speed, Speed * 1);
  TracPIDJC(Speed, Speed * 1);
  TurnRight(); //Right2
  TracPIDJC(Speed, SlowSpeed * 1.7);
  Speed = 37;
  TracPIDJC(Speed, 100);
  TracSimpleJC(Speed, 100);
  TracSimpleJC(Speed, 100);
  TracPIDJC(Speed, 100);
  Kp = 90;
  Kd = 45;
  TurnLeft();
  TracPIDJC(Speed, 50);
  TracPIDJC(Speed, 50);
  TracPIDJC(SlowSpeed, 50);
  beep();
  while(1){
    ao();
  }
}