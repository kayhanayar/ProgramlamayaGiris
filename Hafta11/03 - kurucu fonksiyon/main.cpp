#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

/*

	Sınıf üyelerine iki türlü erişim yapılabilir 

	içerden veya dışardan erişim

	dışardan erişim sınıftan oluşturulan nesne aracılığıyla yapılır

	Örneğin.

	Dikdortgen d1;

	d1.genislik  = 5;  -> dışardan erişimdir.

	d1.alanHesapla();  -> dışardan erişimdir.


*/

class Dikdortgen
{

public: 
	int genislik;
	int yukseklik;


	/*
		kurucu fonksiyon sınıftan nesne oluşturulduğunda otomatik olarak çağrılmaktadır
		kurucu fonksiyonun görevi oluşturulacak olan nesnenin üyelerine ilk değerleri atmakatdır.

		kurucu fonksiyon ait olduğu sınıf ile aynı isme sahip olmalıdır.

		fonksiyonu çağıran derleyicidir. o yüzden dönüş değeri yoktur.
	*/

	Dikdortgen()
	{
		/*
			karakter üyesine içerden erişim yapılmaktadır.
			içeriden erişim yapılırken erişim belirteci önemli değildir.
		*/

		karakter='*';

		cout<<"Dikdortgen() fonksiyonu cagrildi..........."<<endl;
	}



	int alanHesapla()
	{
		return genislik*yukseklik;
	}
private:

	int karakter;
};
int main()
{

	
	//	Dikdortgen sınıfından bir nesne üretiliyor.
	Dikdortgen d1;

	//d1 nesnesinin veri üyelerine değer atanıyor
	//dışardan erişim
	d1.genislik = 10;
	d1.yukseklik = 20;

	//alanHesapla fonksiyonuna dışardan erişim yapılıyor.
	cout<<d1.alanHesapla()<<endl;

}