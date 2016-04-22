/**
 * Simple program wrote by Electronic Section to test that you have serial communication
 * 
 * @author Sam Mottley
 */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    String temp = Serial.readString();
    Serial.println("Read: "+temp);
  }
}
