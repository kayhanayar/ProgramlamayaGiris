#include <iostream>

/*

	Dizi Giriş

*/
using namespace std;

int main()
{


	
	int notlar[10]; 

	/*
	
		Dizilerin en büyük avantajı for döngüsü ile uyumlu olmasıdır.

		Örneğin aşağıda dizinin elemanlarına değer atayan bir döngü verilmiştir.
	*/


	for (int i = 0; i < 10; i++)
		notlar[i] = i*i;

	/*
	
		Dizi indeksleri	0	1	2	3	4	5	6	7	8	9
		Dizi değerleri		0	1	4	9	16	25	36	49	64	81
	
	*/

	//aynı şekilde ekrana çıkarm işlemleri de döngü ile yapılabilir.


	for (int i = 0; i < 10; i++)
		cout << notlar[i] << " ";
	cout << endl;

}