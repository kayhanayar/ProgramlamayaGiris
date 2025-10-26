#include <iostream>

using namespace std;
/*

    Genişlik ve yükseklik dışarıdan alındığı dikdrotgen öçizme

*/
int main()
{
	int genislik;
	int yukseklik;
	char karakter;
	cout << "-------------- Dikdortgen Cizim Programi --------------------" << endl;
	cout << "Genislik Gir:";
	cin >> genislik;
	cout << "Yukseklik Gir:";
	cin >> yukseklik;
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