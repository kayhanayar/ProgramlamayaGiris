#include<iostream>

using namespace std;

int main()
{
    int sayi = 5;

    /*
        Koşul ifadesinin hemen ardından {} kullanmak yerine cout komutu kullanılmıştır
        Dolayısıyla derleyici if koşulunun tek bir satır ile yazıldığını düşünmektedir. 

        {} arasındaki ifadeler if koşuluna bağlı değildir.
    */
    if(sayi<0)
        cout<<"kosula ait satir"<<endl;
    {
        cout<<"Bu satir kosula ait degildir"<<endl;
        sayi = sayi*sayi;
    }
        
}