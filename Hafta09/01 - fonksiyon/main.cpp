#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
/*

	Fonksiyon tanımı
	fonksiyon bir kod bloğuna isim vermek olarak düşünülebilir.

	aşağıda bir fonksiyon tanımlanmıştır.

*/

void ciz()
{
	for (int i = 1; i < 10; i++)
	{
		cout << setw(i) << "*";
		cout << endl;
	}

}
int main()
{
	/*
			fonksiyonu çağırmak için
			önce fonksiyon ismi ardından yazılan ismin bir fonksiyon olduğunu
			derleyiciye belirtmek için () parantezler kullanılacaktır.

	*/
	ciz();

	/*
		fonksiyon çağrılması durumunda fonksiyon içerisinde yazılı olan
		komutlar çalıştırıalcaktır.
	*/

}