#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

/*

	Bir biri ile ilişkisi bulunan sabit değerleri isimlendirmek için

	enum (enumaration) kullanılabilir.

	Aşağıdaki tanımdan sonra artık Sol,Sag ,Yukari ve Asagi kelimelerini

	kodumuz içerisinde kullanabiliriz

*/
enum Yon
{
	Sol,
	Sag,
	Yukari,
	Asagi
};

int main()
{

	/*
		derleyici enum içerisindeki isimlere tanım sırasına göre değer atamaktadır.

		Sol ilk tanımlandığı için 0 değerini alacaktır.
	*/
	Yon yeniyon =Sol;
	/*
		eğer yeniyon değişkeninin değerini ekrana çıkartırsak 0 göreceğiz.
		yeniyon bir sayıdır.
	*/
	cout << yeniyon;

	/*
		enum kullanımı kodumuzun okunabilirliğini arttırmaktadır.
	*/

	switch (yeniyon)
	{
	case Sol:
		cout << "Sola gittin" << endl;
		break;
	case Sag:
		cout << "Saga gittin" << endl;
		break;
	case Yukari:
		cout << "Yukari gittin" << endl;
		break;
	case Asagi:
		cout << "Asagi gittin" << endl;
		break;
	}


	
	
}