int LED_Pin = 13;  //ประกาศตัวแปรชื่อ LED_Pin เป็นชนิด int เพื่อเก็บค่าตำแหน่ง Pin ที่จะควบคุม LED

void setup() {
  pinMode(LED_Pin, OUTPUT);  //กำหนดโหมดของ Pin ที่ขา LED_Pin เป็น OUTPUT
 
}

void loop() {
  digitalWrite(LED_Pin, HIGH);  //ทำการส่ง Digital ออกทาง LED_Pin เป็น HIGH
  delay(1000);  //หน่วงเวลา 1000 (หน่วยเป็น มิลิวินาที โดยที่ 1000 มิลลิวินาที่ เท่ากับ 1 วินาที)
  digitalWrite(LED_Pin, LOW);  //ทำการส่ง Digital ออกทาง LED_Pin เป็น HIGH
  delay(1000); //หน่วงเวลา 1000 (หน่วยเป็น มิลิวินาที โดยที่ 1000 มิลลิวินาที่ เท่ากับ 1 วินาที)
 
}
