// LED Flip Flop dan Mengukur Intesitas Cahaya Menggunkan Sensor LDR

int sensorValue = 0; //Menyimpan nilai input dari sensor LDR

void setup() //Mendeklarasikan mode pin dari terminal yang digunakan
{
  
  pinMode(A0, INPUT); //Menjadikan pin A0 sebagai input dari sensor LDR
  Serial.begin(9600);
  pinMode(6, OUTPUT); //Menjadikan pin 6 sebagai output dari sensor LDR yang akan dikirimkan ke LED berdasarkan tingkat kecerahan
  
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop()
{
  
  sensorValue = analogRead(A0);// Arduino akan membaca nilai dari pin A0 dank akan mendeklarasikannya ke variabel sensor value
  Serial.println(sensorValue);
  analogWrite(6, map(sensorValue,0, 1023, 0, 255));// Menampilkan nilai pada multimeter
  delay(100);// Memberi jeda waktu selama 0,1 detik
  
  digitalWrite(13, HIGH); // Memberi tegangan positif (+) pada pin LED 1
  delay(500);// Memberi jeda waktu selama 0,5 detik
  digitalWrite(13, LOW); // Memberi tegangan negatif (-) pada pin LED 1
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  
}