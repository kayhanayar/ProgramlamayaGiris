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
        ön ek toplamı(prefix)

            a[1]  = a[0]+a[1];
            a[2]  = a[1]+a[2];
            a[3]  = a[2]+a[3];

            a[n]  = a[n-1]+a[n];
    */

    for (int i = 1; i < diziBoyutu; i++)
	{
		sayilar[i] = sayilar[i-1]+sayilar[i];
	}

}