#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
int faktoriyel(int sayi);

void ciz(char karakter,int sayi)
{
	/* fonksiyon tanımı aşağıda yapıldığı için yukarı ön tanım yapılmıştır*/
	int satir = faktoriyel(sayi);

	for (int i = 1; i < satir; i++)
	{
		cout << setw(i) << karakter<<endl;
	}

}
int faktoriyel(int sayi)
{
	int carpim = 1;
	for (int i = 2; i <= sayi; i++)
		carpim *= i;
	return carpim;
}
int main()
{
	ciz('*', 4);

}