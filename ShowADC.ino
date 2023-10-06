void ShowADC(){
  l1 = analog(6);
  l = analog(3);
  c = analog(1);
  r = analog(0);
  r1 = analog(2);
  oled.text(2,0,"L1 = %d", l1);
  oled.text(3,0,"L = %d", l);
  oled.text(4,0,"C = %d", c);
  oled.text(5,0,"R = %d", r);
  oled.text(6,0,"R1 = %d", r1);
  oled.show();
}