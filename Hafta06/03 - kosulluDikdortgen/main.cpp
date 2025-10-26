#include <iostream>
/*
    Dışarıdan girilen  genislik çift ve yukseklik tek olmadığı sürece tekrardan giriş istencektir.
*/
using namespace std;

int main()
{
	int genislik;
	int yukseklik;
	char karakter;
	bool genislikCiftDegilmi;
	bool yukseklikTekDegilmi;
	cout << "-------------- Dikdortgen Cizim Programi --------------------" << endl;
	do
	{
		cout << "Genislik Gir:";
		cin >> genislik;
		cout << "Yukseklik Gir:";
		cin >> yukseklik;
		

		genislikCiftDegilmi = (genislik % 2 != 0);
		yukseklikTekDegilmi = (yukseklik % 2 != 1);
	}while (genislikCiftDegilmi && yukseklikTekDegilmi);
    cout << "Karakter Gir:";
	cin >> karakter;


	//ilk satır
	for (int j = 0; j < genislik; j++)
		cout << karakter;
	cout << endl;
	for (int i = 1;i< yukseklik - 1; i++)
	{
		cout << karakter;
		for (int j = 0; j < genislik-2; j++)
			cout << " ";
		cout << karakter;
		cout << endl;
	}
	

	//son satır
	for (int j = 0; j < genislik; j++)
		cout << karakter;
	cout << endl;


}