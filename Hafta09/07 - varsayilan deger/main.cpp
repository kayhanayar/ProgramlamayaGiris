#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
/*

	fonksiyonlar birbirlerinin gövdesinden habersizdir.
	main fonksiyonu attir fonksiyonunda habersizdir.
	attir fonksiyonu da main fonksiyonundan
*/

void  arttir(int sayi)
{
	sayi++;
}
int main()
{

	int sayi = 10;
	arttir(sayi);
	/*

		arttir fonksiynun parametresi ile main fonksiyonundaki sayi değişkeni
		isimleri aynı olmasına rağmen farklı etki alanlarında bulunmaktadır.
		birbirlerinden haberdar değildirler.
		dolayısıyla attir   main'deki sayı değişkenini değiştiremez.

		argümanlar fonksiyona değer ile geçmektedir(pass by valu)
		yani fonksiyon çağrılırken main deki sayı değişkeninin değeri argüman olarak verilmektedir.
		değişkenin kendisi değil.

	*/
	cout << "arttir(sayi) sonrasi sayi=" << sayi <<endl;



}