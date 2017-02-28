int sensor_value;

void setup() {
  // put your setup code here, to run once:
  pinMode(A3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor_value = analogRead(A3);
  Serial.println(sensor_value);
  delay(300);
}
