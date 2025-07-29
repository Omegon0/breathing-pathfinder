int BUT = D0;

int LED1 = D3;
int LED2 = D4;
int LED3 = D5;
int LED4 = D3;
int LED5 = D4;
int LED6 = D5;

int speed = 1;

void setup() {
  pinMode(BUT, INPUT_PULLUP);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
}

void breathe() {
  digitalWrite((int) (255 * sin(speed * millis())), LED1);
  if(speed > 1) digitalWrite((int) (255 * sin(speed * millis())), LED2);
  if(speed > 2) digitalWrite((int) (255 * sin(speed * millis())), LED3);
  if(speed > 3) digitalWrite((int) (255 * sin(speed * millis())), LED4);
  if(speed > 4) digitalWrite((int) (255 * sin(speed * millis())), LED5);
  if(speed > 5) digitalWrite((int) (255 * sin(speed * millis())), LED6);
}

void loop() {
  if(digitalRead(BUT) == HIGH) speed += 1;
  if(speed > 6) speed = 1;

  breathe();
}
