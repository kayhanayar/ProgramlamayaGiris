#include <iostream>
#include<ctime>
using namespace std;


int main()
{

    /*
        rastgele sayı üretme algoritması uygulama her çalıştığında daima aynı sayıları üretecektir.

        Farklı sayıların üretilmesi için uygulama her çalıştığında

        farklı olacak bir değer ile algoritmanın beslenmesi gerekir.

        srand rastgele sayı üretme algoritmasının besleme değerini atamak için kullanılmaktadır.

        her uygulama çalıştığında time fonksiyonu farklı bir değer ile algoritmayı besleyecektir.
    */

    srand(time(0));
    
    int turSayisi= rand()%100;

    while(turSayisi)
    {
        cout<<turSayisi<<endl;

        turSayisi--;
    }
}