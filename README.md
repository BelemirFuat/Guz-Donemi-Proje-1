# Guz-Donemi-Proje-1
Atatürk Üniversitesi 2022-2023 Yazılım Mühendisliği 1.Sınıf Güz Dönemi 1.Proje

ESKİ abonelerinin aylık faturalarını düzenlemek ve bazı istatistiksel bilgiler elde etmek için bir program istenmektedir. Bunun için her aboneye ilişkin aşağıdaki veriler programa girilmektedir:
• Abone tipi kodu (1: konut, 2: işyeri, 3: kamu kurumu, 4: turistik tesis)
• Önceki sayaç değeri (0 ya da 0’dan büyük tamsayı)
• Şimdiki sayaç değeri (önceki sayaç değerine eşit ya da daha büyük tamsayı)
• Önceki ve şimdiki sayaç okuma tarihleri arasında geçen gün sayısı (0’dan büyük tamsayı)
Aylık su tüketim ücreti hesaplanırken, bazı abone tipleri için ton başına sabit fiyat uygulanmakta, bazı abone tipleri için ise kademeli fiyatlandırma uygulanmaktadır. Ayrıca tüketilen su miktarına göre atık su ücreti de hesaplanmaktadır. Aşağıda, abone tipleri ve bu abone tiplerine göre uygulanan su tüketim ve atık su tarifeleri görülmektedir:
Abone Tipi Kodu
Abone Tipi
Su Tüketim Tarifesi
Atık Su Tarifesi
Kademe
Birim Fiyat
Kademe
Birim Fiyat
1
Konut
1. kademe (0-13 ton) 2. kademe (14-20 ton) 3. kademe (21 ton ve üzeri)
2,24 TL 5,78 TL 9,33 TL
Kademesiz
1,91 TL
2
İşyeri
1. kademe (0-10 ton) 2. kademe (11 ton ve üzeri)
7,71 TL 8,88 TL
Kademesiz
3,79 TL
3
Kamu Kurumu
Kademesiz
6,64 TL
Kademesiz
2,56 TL
4
Turistik Tesis
Kademesiz
5,78 TL
Kademesiz
1,91 TL
Dersin Adı:
Algoritma ve Programlamaya Giriş
Proje – 1:
ESKİ Aylık Fatura Düzenleme Sistemi
Verilme Tarihi:
27.10.2022 Perşembe
Kod Teslim Tarihi:
14.11.2022 Pazartesi, Saat 23:59
Rapor Teslim Tarihi:
(Kod Kontrolü Sırasında Getiriniz)
Kod Kontrol Tarihi:
22.11.2022 Salı – 24.11.2022 Perşembe
Kademeli fiyatlandırma uygulanan abone tipleri için yukarıda belirtilen tüketim aralıkları, 30 günlük süre içindir. Bu aralıklar, her ay ücret hesaplanırken, son sayaç okuma tarihi ile bir önceki sayaç okuma tarihi arasında geçen gün sayısına göre ölçeklendirilmektedir. Buna göre, her abone için aşağıdaki bilgiler hesaplanarak ekrana yazdırılmalıdır:
• Abone tipi
• Aylık su tüketim miktarı
• Aylık su tüketim ücreti
• Aylık atık su ücreti
• Toplam KDV tutarı (%8)
• Toplam fatura tutarı
Daha sonra başka abone olup olmadığı sorularak (e/E/h/H); varsa yeni aboneye ilişkin işlemler yapılmalı, yoksa aşağıdaki istatistiksel bilgiler ekrana yazdırılmalıdır:
1. Her abone tipi için; abone sayıları, yüzdeleri ve günlük ortalama su tüketim miktarları
2. Aylık su tüketim miktarı, 1. kademeyi aşmayan konut abonelerinin sayısı ve yüzdesi
3. Aylık su tüketim miktarı, 1. kademeyi aşan işyeri abonelerinin sayısı ve yüzdesi
4. Günlük ortalama su tüketim miktarı en yüksek olan konut tipi abonenin günlük ortalama su tüketim miktarı
5. Aylık su tüketim ücreti en yüksek olan abonenin tipi, aylık su tüketim miktarı ve ödediği aylık su tüketim ücreti
6. Aylık atık su ücreti en yüksek olan abonenin tipi, aylık su tüketim miktarı ve ödediği aylık atık su ücreti
7. Her abone tipi için aylık toplam su tüketim miktarları ve İzmir’in aylık toplam su tüketim miktarı
8. Her abone tipi için elde edilen aylık toplam su tüketim ücretleri ve tüm abonelerden elde edilen aylık toplam su tüketim ücreti
9. Tüm abonelerden elde edilen aylık toplam atık su ücreti
10. Devlete ödenen aylık toplam KDV tutarı
Notlar:
1. Veri girişleri sırasında, kullanıcının belirtilen kısıtlara uygun olarak giriş yapması sağlanmalıdır.
2. Çıktı sırasında, ondalıklı sayılar virgülden sonra 2 basamağa kadar duyarlı olarak yazdırılmalıdır.
3. Sıfıra bölme hatası oluşmaması için yeterli miktarda veri girişi yapılacağını varsayınız.
4. En büyük ve en küçük değer bulma istekleri için, bu değere sahip yalnız 1 abone olabileceğini varsayınız.
5. Bu projenin şimdiye kadar işlenen konular dahilinde (if yapıları, switch-case, iç-içe döngüler (while)) kullanılarak yapılması beklenmektedir.
Raporda bulunması gerekenler:
• Kapak (dersin adı, proje numarası ve adı, öğrenci numarası ve ad-soyadı, teslim tarihi)
• Analiz (problemi kendi cümlelerinizle tanımlayıp açıklayınız)
• Tasarım (problemin çözümüne yönelik geliştirdiğiniz algoritmayı yazınız)
• Programcı Kataloğu (analiz, tasarım, gerçekleştirim, test ve raporlama için harcadığınız süreleri yazınız, kaynak kodun çıktısını ekleyiniz)
• Kullanıcı Kataloğu (programın kullanım kılavuzunu ekran görüntüleri de kullanarak hazırlayınız, varsa programdaki kısıtlamaları belirtiniz)
DİKKAT EDİLMESİ GEREKEN NOKTALAR:
Projenin Teslim Edilmesi:
1. Proje, 2 kişilik gruplar halinde yapılacaktır.
2. Kaynak kod dosyası (.c uzantılı), adı grup üyelerinin öğrenci numaralarının alt çizgi karakteri ile birleşiminden (örneğin 210710001_220710001.c) oluşacak şekilde, grup üyelerinden birisi tarafından ilgili dersin OBS sistemi üzerinden “Ödev” yükleme kısmı kullanılarak sisteme yüklenmelidir.
3. Kaynak kod dosyası, son teslim tarihi geçmediği sürece sisteme tekrar tekrar yüklenebilecektir, ancak sistemde sadece en son yüklenen dosyanın saklandığı unutulmamalıdır.
4. Kaynak kod tesliminde en fazla 2 günlük gecikmeler kabul edilecek, ancak son teslim tarihinden sonraki her gün için proje notunda %20 kesinti yapılacaktır.
5. Rapor, bilgisayar çıktısı olarak, dersin ilgili Öğretim Üyesi ya da Araştırma Görevlisi’nden herhangi birisine kod kontrolü sırasında teslim edilmelidir.
6. Kod kontrolü sırasında, grup üyelerinin tümü hazır bulunmalıdır.
Projenin Değerlendirilmesi:
1. Projenin değerlendirmesinde; programın doğru ve eksiksiz çalışmasının yanında etkinlik ve yapısal programlama ilkelerine uygunluk (lab derslerinden sonra verilen örnek çözümlere bakabilirsiniz.) ta dikkate alınacaktır. Buna göre puanlama şu şekildedir:
 Girintili yazım stili: 5 puan
 Anlamlı değişken isimleri kullanma: 5 puan
 Açıklamalar (gerekli görülen yerlerde): 5 puan
 Etkinlik (gereksiz işlemlerden kaçınma): 10 puan
 Doğru çalışma: 45 puan
 Rapor: 20 puan
 Kod kontrolü sırasındaki kişisel performans: 10 puan
2. Kopya çekildiği tespit edildiğinde, çeken ve çektiren kişiler projeden sıfır alacaktır.
“Hiç kimse başarı merdivenlerini elleri cebinde tırmanmamıştır.”
S. Keth Moorhead
Herkese başarılar dilerim…
