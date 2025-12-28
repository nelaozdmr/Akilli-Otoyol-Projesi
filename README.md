# Akilli-Otoyol-Projesi
Akıllı Otoyol - Ultrasonik Hayvan Uzaklaştırma Sistemi
Bu proje, karayollarında meydana gelen hayvan kaynaklı kazaları azaltmak ve yaban hayatını korumak amacıyla geliştirilmiş bir aktif güvenlik sistemi prototipidir.

🚀 Projenin Amacı
Otoyol kenarına yerleştirilen sistem, yaklaşan bir canlıyı (köpek, tilki, çakal vb.) algıladığında, insanların duyamayacağı ancak hayvanların rahatsız olacağı 25 kHz (ultrasonik) frekansında bir ses yayar. Bu sayede hayvanın yola girmesi engellenerek hem sürücü güvenliği hem de hayvan refahı sağlanır.

🛠️ Teknik Özellikler
Kontrolcü: Arduino Uno

Algılama: HC-SR501 PIR (Pasif Kızılötesi) Sensörü (Hassasiyet ayarı ile ~1 metreye kalibre edilmiştir).

Aktif Uzaklaştırma: Piezo Buzzer (25,000 Hz Frekans Üretimi).

Enerji Tasarrufu: Sistem sadece hareket algıladığında aktifleşecek şekilde kodlanmıştır.

💻 Yazılım Mantığı
Kod, sensörün OUT pininden gelen HIGH sinyalini takip eder. Hareket algılandığı anda tone() fonksiyonu ile hedef frekans üretilir ve 500ms (yarım saniye) boyunca yayınlanır. Hareket kesildiğinde noTone() komutuyla sistem uyku moduna geçer.


