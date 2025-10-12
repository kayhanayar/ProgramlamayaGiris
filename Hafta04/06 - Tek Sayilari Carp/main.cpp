#include <iostream>
using namespace std;


int main()
{

    int turSayisi = 1;

    int carpim = 1;
    /*
        Döngü 1 den başlayıp 100'e kadar dönecektir. 
        100'de dahil.
    */
    while(turSayisi>=100)
    {
        //siradaki sayi tek ise içeri girer
        if(turSayisi%2==1)
            carpim*=turSayisi;

        turSayisi++;
    }

    cout<<"tek sayilarin carpimi:"<<carpim<<endl;
   

}