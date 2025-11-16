#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
/*

	çizilecek satır sayısını belirtmek istersek.

	fonksiyonunun bu değeeri dışarıdan almasını sağlayabiliriz.

*/

void ciz(int satir)
{
	/*
		fonksiyon tanımanırken parametrenin değerinin atılmış olduğunu düşünmeliyiz.
		Bu değeri fonksiyonu çağıran atayacaktır.
	*/
	for (int i = 1; i < satir; i++)
	{
		cout << setw(i) << "*";
		cout << endl;
	}

}
int main()
{
	/*
		Fonksiyonu çağırabilmek için argümanı belirtmemiz gerekmektedir.
		ciz fonksiyonu tam sayı bir değer beklemektedir.
	*/
	ciz(15);

	/*
		main fonksiyonu ciz fonksiyonunu çağırmıştır.
		ciz fonksiyonu çağrılandır.
		
	
	*/

}