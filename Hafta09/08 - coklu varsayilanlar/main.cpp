#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

/*

	parametre kullanılmazsa satir değişekenine otomatik olarak 10 değeri derleyici tarafından atanacaktır.
*/
void ciz(string yazi="merhaba", int satir = 10)
{

	for (int i = 1; i < satir; i++)
	{
		cout << setw(i) << yazi;
		cout << endl;
	}

}
int main()
{

	// iki argümanında varsayılan değerleri olduğu için parametresi çağrılabilir
	ciz();

	// bir argüman girilirse bu değer ilk parametreye atanmalıdır.
	// ilk parametre string olduğundan 15 değer uygun değildir kod hata verecektir.
	ciz(15);

	/* ilk argüman atandıktan sonra ikinci argüman boş bırakılabilri. varsayılan değer atanacaktır.*/
	ciz("hohoho");



}