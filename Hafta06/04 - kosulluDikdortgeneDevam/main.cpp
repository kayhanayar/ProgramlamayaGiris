#include <iostream>

using namespace std;

int main()
{
	int genislik;
	int yukseklik;
	char karakter;
	bool genislikCiftDegilmi;
	bool yukseklikTekDegilmi;
	cout << "-------------- Dikdortgen Cizim Programi --------------------" << endl;
	while(true)
	{
		cout << "Genislik Gir:";
		cin >> genislik;
		if (genislik % 2 == 0)
			break;
		else
		{
			cout << "!!!! Genislik Cift Olmalidir !!!!"<<endl;
		}	
	}
	while (true)
	{
		cout << "Yukseklik Gir:";
		cin >> yukseklik;
		if (yukseklik % 2 == 1)
			break;
		else
		{
			cout << "!!!! Yukseklik  Olmalidir !!!!" << endl;
		}


	}
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