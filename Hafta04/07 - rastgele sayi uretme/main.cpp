#include <iostream>
using namespace std;


int main()
{

    /*
        rand --> rastgele sayı üreten fonksiyon

        rand()   ---> fonksiyon çağrısı yapılıyor

        aşağıda rastgele bir sayı üretiliyor ve

        üretilen sayı değişkene atanıyor
    */


    int sayi = rand();
   

    cout<<"rastgele sayi:"<<sayi<<endl;

    /* 
        rast gele üretilen sayı pozitif bir tam sayıdır

        Aşağıdaki satırda 0 ile 99 arasında rastgele sayı üretilmektedir.
    */

    int yuzdenKucukSayi = rand()%100;
    


    cout<<yuzdenKucukSayi<<endl;
}