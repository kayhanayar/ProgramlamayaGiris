#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

/*

	Sınıf sadece tanımdan ibarettir.

	Sınıftan üretilen degişkene nesne adı verilmektedir.


*/

class Dikdortgen
{
public:

	/*
		veri üyeleri
	*/
	int genislik;
	int yukseklik;


	/*
		Sınıflar fonksiyonlara sahip olabilirler
		bu fonksiyonlara üye fonksiyon veya metot adı verilir.

		alanHesapla çağrıldığı nesneye ait olan verilere erişebilir.
	*/

	int alanHesapla()
	{
		return genislik*yukseklik;
	}

};
int main()
{

	
	//	Dikdortgen sınıfından bir nesne üretiliyor.
	Dikdortgen d1;

	//d1 nesnesinin veri üyelerine değer atanıyor
	d1.genislik = 10;
	d1.yukseklik = 20;

	cout<<d1.alanHesapla()<<endl;


	/*
		alanHesapla fonksiyonu bir üye fonksiyondur.
		yani ait olduğu nesne ile çağrılabilmektedir.
		
		alanHesapla() şeklinde çağrı yapamazsınız.

		

	*/
}