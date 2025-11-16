#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
/*

	fonksiyon yaptığı işlemler sonucu elde edilen değeri 
	kendisini çağıran fonksiyona döndürebilir
	aşağıdaki fonksiyon bir tam sayı değer döndürecektir.
*/

int Faktoriyel(int sayi)
{
	int carpim = 1;
	
	for (int i = 2; i <=sayi; i++)
	{
		carpim *= i;
	}
	//sonuc çağırana döndürülüyor
	return carpim;

}
int main()
{
	/*
	
		fonksiyonun döndürdüğü değer bir değişkene atanıyor
	
	*/
	int sonuc = Faktoriyel(5);

	cout << "Faktoriyel(5)=" << sonuc<<endl;

}