#include <iostream>
using namespace std;


int main()
{

    /*
        Döngünün atacağı tur sayısı 0-99 arası rastgele bir sayı olacaktır.
    */
    int turSayisi= rand()%100;

    while(turSayisi)
    {
        cout<<turSayisi<<endl;

        turSayisi--;
    }
}