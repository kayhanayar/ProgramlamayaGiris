#include <iostream>

using namespace std;

int main()
{
   int sayi = 3;

    /*
        iç içe döngülerde dış döngünün her turunda iç döngü yeniden başlayacaktır.
        Örneğin aşağıdaki iç döngü ve dış döngü 3 tur atarak bitiyor.
        Dış döngünün her turunda içerideki döngü baştan başlayıp 3 tur atacak ve sonlanacaktır.
    */
    for (int i = 0; i < sayi; i++)  //-----> Dış döngü
    {
        cout << "<----" << i << ".tur dis dongu basladi----->" << endl;

        /*iç döngünün sayacı için farklı bir değişken oluşturuluyor*/
        
        for (int j = 0; j < sayi; j++)    // ----> iç döngü
        {
            cout << "     <----" << j << ". tur ic dongu----->" << endl;
        }


        cout << "<----" << i << ".tur dis dongu bitti----->" << endl << endl;
    }
}