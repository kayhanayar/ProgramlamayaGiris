#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
/*

	birbirleriyle ilişkisi bulunan değişkenleri
	struct(yapi) ile gruplandirabiliriz

	pozisyon yeni bir veri türüdür.
	şuan sadece bir tanım yaptık. henüz bir yapı oluşturmadık
*/
struct Konum
{
	float x;
	float y;
};
/*
	Dikdörtgen iki ondalık sayının yanı sıra bir adet
	Konum türünde yapıya sahiptir.
*/
struct Dikdortgen
{
	float genislik;
	float yukseklik;
	Konum koordinat;
};


int main()
{
	/*
		yapıya sahip bir yapının oluşturulurken değer atılması aşağıdaki olacaktır.
	*/
	Dikdortgen d1{ 
		20.0f,		//genislik
		30.0f,		//yukseklik
		{ 40.0f,40.0f}		//koordinat değerleri
	};

	d1.genislik = 100.0f;
	d1.yukseklik = 100.0f;
	
	/*
		Yapı içindeki yapıya erişmek için yine . operatörü kullanılır.
		içerdeki yapının elemanlarına erişmek için de . operatörü kullanılacaktır.
	*/

	d1.koordinat.x = 50.0f;
	d1.koordinat.y = 60.0f;



	cout << "d1.koordinat.x:" << d1.koordinat.x << endl;
	cout << "d1.koordinat.y:" << d1.koordinat.y << endl;
	
	
}