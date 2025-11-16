#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
/*

	fonksiyon çalışabilmesi için dışarıdan iki değer verilmesi gerekmektedir.

*/

void ciz(char karakter,int satir)
{
	/*
		fonksiyon tanımanırken parametrenin değerinin atılmış olduğunu düşünmeliyiz.
		Bu değeri fonksiyonu çağıran atayacaktır.
	*/
	for (int i = 1; i < satir; i++)
	{
		cout << setw(i) << karakter;
		cout << endl;
	}

}
int main()
{
	/*
		Fonksiyonu çağırabilmek için argümanları belirtmemiz gerekmektedir.
		ciz fonksiyonu bir karakter ve tam sayı bir değer beklemektedir.
	*/
	ciz('+',15);



}