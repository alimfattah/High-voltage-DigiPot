# High-voltage-DigiPot

   AD5290 merupakan salah satu jenis potensiometer digital yang memiliki kapabilitas tegangan yang tinggi pada resistor networknya (up to 30 Volt). Potensiometer yang banyak beredar di pasaran saat ini mayoritas terbatas hanya up to 5 volt pada resistor network sehingga aplikasinya sangat terbatas. Potensiometer digital bisa disebut juga RDAC (resistive digital to analog converter) sederhananya rangkaiannya terdiri dari kumpulan resistor yang membentuk sebuah tangga (ladder resistor), setiap anak tangga terdapat sebuah saklar yang semuanya dapat menghubungkan ke terminal keluaran. Jumlah anak tangga atau step ini menentukan rasio/resolusi resistansi potensiometer digital, Angka pada Step ini umunya dinyatakan dalam nilai bit seperti 8 bit yang menandakan bahwa potensiometer digital tersebut memiliki variasi resistansi sebanyak 255 buah. Potensiometer digital yang ada dipasaran saat ini memiliki variasi resolusi 5 sampai 10 bit.
        AD5290 memiliki desain power single supply yang dapat beroperasi dari pemberian tegangan +4.5 to +33 Volt atau dual supply antara ±4.5 to ±16.5 Volt, suplai tegangan tersebut dihubungkan pada pin VDD/VSS yang harus disesuaikan dengan kebutuhan tegangan resistor network. Tegangan yang ada pada Terminal A, Terminal B, dan Terminal W yang lebih positif dari VDD atau lebih negatif dari VSS dibatasi oleh dioda clamp bias maju internal, sangat penting untuk pemberian daya pada pin vdd/vss terlebih dahulu sebelum pengaplikasian segala tegangan suplai ke Terminal A, Terminal B, dan Terminal W. Alangkah baiknya dilakukan bypassing capacitor pada terminal VDD dan VSS. Untuk meminimalkan bounce ground digital, terminal ground digital AD5290 harus dihubungkan dengan jarak yang cukup jauh dengan ground analog.

         	 Model	      |  Taps  | Rab(Kohm)| Package Desc
	----------------------+--------+----------+------------------------
	 AD5290YRMZ10         | 8 bits |   10     | 10-Lead MSOP
	 AD5290YRMZ10-R7      | 8 bits |   10     | 10-Lead MSOP
	 AD5290YRMZ50         | 8 bits |   50     | 10-Lead MSOP	
	 AD5290YRMZ50-R7      | 8 bits |   50     | 10-Lead MSOP		
	 AD5290YRMZ100        | 8 bits |   100    | 10-Lead MSOP
     AD5290YRMZ100-R7     | 8 bits |   100    | 10-Lead MSOP

  pada ad5290 terdapat batasan arus yang mengalir pada ketiga terminal resistor yaitu maksimum secara kontinu sebesar 5 miliamper dan 15 ma peak sehingga hal tersebut bisa membatasi aplikasi dari potensiometer digital dalam kasus tertentu. Dengan batasan tersebut maka dapat disimpulkan bahwa potensiometer digital tidak bisa sepenuhnya mengantikan potensiometer analog dan saat ini sangat susah juga mendapatkan potensiometer digital yang berspesifikasi tegangan yang tinggi. Kelebihan dari potensiometer digital antara lain yaitu : memiliki resolusi yang tinggi, dapat beroperasi pada suhu dan kelembapan sesuai dengan karakteristik material  semikonduktor, dapat dikontrol secara jarak jauh dan secara digital melalui komputer atau perangkat digital lain.
  Dalam interface komunikasi spi dengan AD5290, secara default pengaturan komunikasi SPI CPOL CPHA dengan konfigurasi CPOL =0 CPHA =0.  namun dalam kasus tertentu konfigurasi komunikasi spi bisa diatur sesuai dengan kebutuhan penggunanya
  

  
   
   
