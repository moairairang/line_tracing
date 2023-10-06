#include <POP32.h>


int l1, l, c, r, r1;
int RefL1 = 800;
int RefL = 900;
int RefC = 900;
int RefR = 900;
int RefR1 = 900;

int Kp, Ki, Kd, Error, PreError, Integral, MaxSpeed;

int Speed = 40;
int SlowSpeed;
int SuperSlowSpeed;
int LeftSpeed, RightSpeed;
int TurnSpeed;

void setup() {
  LeftSpeed = Speed * .75;
  RightSpeed = Speed * .75;
  TurnSpeed = Speed * 1.42;
  SlowSpeed = Speed * 0.625;
  SuperSlowSpeed = Speed * 0.20;
  ShowADC();
  beep();
  waitAnykey_bmp();
  beep();
}

void loop() {
  can1();
}