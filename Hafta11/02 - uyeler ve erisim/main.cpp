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
 /*
 
 	public altına yazılan üyeler dışardan erişime açıktır.

 */
public: 

	/*
		veri üyeleri
	*/
	int genislik;
	int yukseklik;



	/*
		alanHesapla fonksiyonu

		sınıf üyelerine erişmesi 

		içerden erişim olarak adlandırılır.

	*/

	int alanHesapla()
	{
		return genislik*yukseklik;
	}

	
/*
	private dışardan erişimi engellemektedir.
	private altına yazılan üyelere dışardan erişilemez.
*/


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

	/*
		karakter üyesine dışardan erişiliyor
		fakat karakter private olduğu için dışardan erişime açık değildir
		derleyici hata verecektir.
	*/
	d1.karakter = 5;
}