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

void konumAta(Konum yeniKonum)
{
	yeniKonum.x = 10;
	yeniKonum.y = 20;
}
int main()
{
	/*
		oluşturma anında yapının elemanlarına aşağıdaki gibi değer atanabilir.
		yapinin ilk tanımlı değişkenine(x) 400   ikinci değişkenine 300 atanacaktır.
	*/
	Konum yeniKonum{ 400.0f,300.0f };

	cout << "------------fonksiyon oncesi---------------" << endl;
	cout << "yeniKonum.x:" << yeniKonum.x << endl;
	cout << "yeniKonum.y:" << yeniKonum.y << endl;
	
	/* 
	  fonksiyon argümanı değer olarak alır. 
	  yani fonksiyon kendi yapısını oluşturacak ve argüman olarak verilen
	  yapının değerlerini kendi yapısına kopyalayacaktır.
	*/
	
	konumAta(yeniKonum);
	cout << "------------fonksiyon sonrasi---------------" << endl;
	cout << "yeniKonum.x:" << yeniKonum.x << endl;
	cout << "yeniKonum.y:" << yeniKonum.y << endl;

	/*
		fonksiyon argüman olarak aldığı yapıyı değiştiremedi.
	*/
}