#include <iostream>

/*

	Dizilere Rastgele değer atama

	tek ve çift adedi bulma

*/
using namespace std;

int main()
{
	const int diziBoyutu = 10;

	int sayilar[diziBoyutu];
	int tekAdedi = 0;
	int ciftAdedi = 0;
	for (int i = 0; i < diziBoyutu; i++)
	{
		sayilar[i] = rand() % 100;
	}

	
	for (int i = 0; i < diziBoyutu; i++)
	{
		if (sayilar[i] % 2)
			tekAdedi++;
		else
			ciftAdedi++;
	}
		

	cout << "Tek adedi:" << tekAdedi<<endl;
	cout << "Cift adedi:" << ciftAdedi << endl;
	
}