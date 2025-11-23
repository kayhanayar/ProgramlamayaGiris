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
int main()
{
	//Konum türünde yeni bir yapı oluşturduk
	Konum p1;

	/*
		Konum p1 iki değişkene sahiptir.
		Değişkenlere erişmek için   p1 sağında nokta operatörü kullanılmaıdır.

		p1'e ait olan değişkenlere değer atanmaktadır.
	*/

	p1.x = 10.0f;
	p1.y = 20.0f;

	/*
		
		Konum.p1    Şeklinde istekte bulunulamaz. Konum sadece bir tür ismidir.
	
		x=15.0f;    şeklinde sadece x de kullanılamaz. x değişkeni konum türünden bir objeye aittir.
	*/

	cout << "p1.x:" << p1.x<<endl;
	cout << "p1.y:" << p1.y << endl;
}