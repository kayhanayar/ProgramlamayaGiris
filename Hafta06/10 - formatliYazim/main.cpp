#include <iostream>
/* setw fonksiyonu için ekleniyor*/
#include<iomanip>
/*

	formatlı çıktı

*/
using namespace std;

int main()
{
	const int diziBoyutu = 10;

	int sayilar[diziBoyutu];
	for (int i = 0; i < diziBoyutu; i++)
	{
		sayilar[i] = rand() % 100;
	}

	/* 
		setw bir sonraki çıktının kaç karakter yer alacağını belirtmektedir.
		eger belirtilen degerden kucuk ise varsayılan olarak saga yaslar.

		Her bir sayı 10 birimlik bir alana yerleştirilecektir.
	*/
	for (int i = 0; i < diziBoyutu; i++)
		cout << setw(10) << i ;
	cout << endl;
	for (int i = 0; i < diziBoyutu; i++)
		cout << setw(10) << sayilar[i] ;

	cout << endl << "--------std::left ile  sola yaslaniyor-------------" << endl;
	/*
		std::left cout ile kullanıldıktan sonra devamlı olarak sola yaslı yazılır.
	*/
	cout << std::left;
	for (int i = 0; i < diziBoyutu; i++)
		cout << setw(10) << i;
	cout << endl;
	for (int i = 0; i < diziBoyutu; i++)
		cout << setw(10) << sayilar[i];
}