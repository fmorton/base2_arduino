
int input_sensor = A3;   // slider

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(input_sensor, INPUT);
  //Serial.begin(9600);
}

void disco_step(int red, int green, int blue, int delay_amount) {
  analogWrite(9, red);
  analogWrite(10, green);
  analogWrite(11, blue);
  delay(delay_amount);
}

void loop() {
  int max_color_value = 40;
  int red = random(0, max_color_value);
  int green = random(0, max_color_value) - red;
  int blue = random(0, max_color_value) + red;
  int sensor_value = analogRead(input_sensor);
  int light_amount = (sensor_value % 20) * 15;
  int delay_amount = sensor_value / 10;

  //Serial.println(String(sensor_value)+" "+String(light_amount)+" "+String(delay_amount));
  //Serial.println(String(red)+" "+String(green)+" "+String(blue));

  if (sensor_value > 1) {
    disco_step(red, green, blue, light_amount);
  }

  disco_step(0, 0, 0, delay_amount);
}
