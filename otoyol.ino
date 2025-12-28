/* AKILLI OTOYOL - KESİN FİNAL KODU
  Sensör: HC-SR501 (VCC, GND, OUT)
  Hedef: Köpek Uzaklaştırma (25 kHz)
*/

const int pirPin = 2;    // Sensörün OUT bacağı Arduino 2'de
const int buzzerPin = 9; // Buzzer artı (+) ucu Arduino 9'da

// Köpeklerin duyabildiği ultrasonik frekans (25 kHz)
const int kopekFrekansi = 25000; 

void setup() {
  pinMode(pirPin, INPUT);      // Sensör giriş
  pinMode(buzzerPin, OUTPUT);   // Buzzer çıkış
  Serial.begin(9600);          // Bilgisayarla iletişim hızı
  Serial.println("Sistem Aktif: Hareket Algilaninca Ultrasonik Ses Yayilacak.");
}

void loop() {
  int hareketVarMi = digitalRead(pirPin); // Sensörü oku

  if (hareketVarMi == HIGH) { // Hareket (Hayvan) algılanırsa
    Serial.println("HAYVAN ALGILANDI! -> Ultrasonik ses aktif.");
    
    // Köpeği uzaklaştıran ultrasonik sesi başlat
    tone(buzzerPin, kopekFrekansi); 
    
    // ÖNEMLİ: Sesin etkili olması ve sistemin takılmaması için bekleme süresi
    delay(500); // 3 saniye boyunca çalmaya devam eder
  } 
  else {
    // Hareket yoksa veya bittiyse sesi kapat
    noTone(buzzerPin); 
  }
  
  delay(300); // Sensörün kararlı çalışması için kısa bekleme
}