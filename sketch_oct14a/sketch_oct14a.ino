int delayTime = 20;
float V_DD = 1023.0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(115200); // 115200 for vscode
}

void loop() {
  // put your main code here, to run repeatedly:
  float humidity = (analogRead(A0)/V_DD)*125.0 - 12.5;
  Serial.print("humidity(%) : ");
  Serial.print(humidity);
  Serial.println(" %");

  float temp = (analogRead(A1)/V_DD)*218.75 - 66.875;
  Serial.print("Temperature( 'C) : ");
  Serial.print(temp);
  Serial.println(" 'C");
  delay(delayTime);
}