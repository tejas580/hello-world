int sensor_pin = A0,led_pin =7;
void setup()
{
  Serial.begin(9600);
  pinMode(led_pin,OUTPUT);
}
void loop()
{
  int data = analogRead(sensor_pin);
  digitalWrite(led_pin,data > 950? LOW:HIGH);
  Serial.print(data);
  Serial.println(data > 950?"dry": data>400?"midium":"wet");
  delay(500);
}
