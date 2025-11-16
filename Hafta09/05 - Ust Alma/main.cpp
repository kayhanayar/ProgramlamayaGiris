#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
/*

	fonksiyon yaptığı işlemler sonucu elde edilen değeri 
	kendisini çağıran fonksiyona döndürebilir
	aşağıdaki fonksiyon bir tam sayı değer döndürecektir.
*/

int UstAl(int sayi,int ust)
{
	int carpim = 1;
	
	for (int i = 0; i < ust; i++)
	{
		carpim *= sayi;
	}
	
	return carpim;

}
int main()
{
	/*
	
		fonksiyonun döndürdüğü değer bir değişkene atanıyor
	
	*/
	int sonuc = UstAl(5,3);

	cout << "UstAl(5,3)=" << sonuc<<endl;



}