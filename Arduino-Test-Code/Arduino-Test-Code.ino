int l = 0;

void setup() {
  Serial.begin(2000000);  //initialize serial
}

void loop() {
  l++; //count program scans

    Serial.print(Serial.readStringUntil(10));
    //Serial.print(" @ ");
   // Serial.print(l); //print program scan count
    //Serial.print(" scans");
    //Serial.write(10);

  
}
