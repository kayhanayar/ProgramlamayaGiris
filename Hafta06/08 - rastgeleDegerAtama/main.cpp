#include <iostream>

/*

	Dizilere Rastgele değer atama

	ve Aritmetik ortalama

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

	float aritmetikOrtalama = 0;
	for (int i = 0; i < diziBoyutu; i++)
		aritmetikOrtalama += sayilar[i];

	aritmetikOrtalama /= diziBoyutu;

	cout << "Aritmetik Ortalama:" << aritmetikOrtalama<<endl;
	
}