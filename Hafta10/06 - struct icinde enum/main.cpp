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
enum Yon
{
	Sol,
	Sag,
	Yukari,
	Asagi
};
struct Dikdortgen
{
	float genislik;
	float yukseklik;
	Konum koordinat;
	Yon	yon;
};
Yon rastgeleYonOlustur()
{
	Yon yeniYon =(Yon) (rand() % 4);
	return yeniYon;
}
Konum rastgeleKoordinatOlustur()
{
	Konum p1;
	p1.x = rand() % 20;
	p1.y = rand() % 10;

	return p1;
}
Dikdortgen rastgeleDikdortgenOlustur()
{
	Dikdortgen d1;
	d1.genislik = 2+rand() % 40;
	d1.yukseklik = 2 + rand() % 10;

	d1.koordinat = rastgeleKoordinatOlustur();
	d1.yon = rastgeleYonOlustur();
	return d1;
}

int main()
{
	
	Dikdortgen d1 = rastgeleDikdortgenOlustur();
	
	
}