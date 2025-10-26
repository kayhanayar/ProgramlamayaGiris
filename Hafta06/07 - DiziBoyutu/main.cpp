#include <iostream>

/*

	Dizi Boyutu
*/
using namespace std;

int main()
{


	/*
		diziler oluşturulurken tüm değerleri aşağıdaki gibi atanabilri.

		aşağıda 5 elemanı olan bir dizi oluşturulmaktadır.
	*/
	
	int notlar[] = { 1,2,3,4,5 };


	/*
		Dizilerin boyutları sabit bir sayı olmalıdır.
		Kimi derleyiciler buna izin verebilmektedir.
		Fakat C++ standartları için aşağıdaki dizi oluşturma işlemi hatalıdır.
	*/

	int boyut = 10;
	int yeniDizi[boyut];

	/*
		Değişken sabit yapılırsa dizi boyutu olarak kullanılabilir.

		const anahtar kelimesi tanımlandığı değişkeni sabit yapmaktadır.

		Yani Aşağıdaki satırdan sonra yeniBoyut değişkenine kod içerisinde değer atayamayız.
	*/
	const int yeniBoyut = 20;
	int dizi[yeniBoyut];
}