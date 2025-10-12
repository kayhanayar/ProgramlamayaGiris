#include <iostream>
using namespace std;


int main()
{
    int turSayisi = 0;

    while(turSayisi<5)
    {
        cout<<turSayisi<<". tur"<<endl;
        
        /*
            Döngünün her turunda turSayisi arttırılmaktadır.
            Aşağıdaki satırı kaldırırsak turSayisi hep 0 kalacaktır
            Böylece döngü uygulamaa çalıştığı sürece tur atacaktır.
            Bu tip döngülere sonsuz döngü adı verilmektedir.
        */
        turSayisi++;
    }

    /*
        Yukarıdaki döngüyü elle yazmaya kalksak aşağıdaki komutları yazmamaız gerekir


       cout<<turSayisi<<". tur"<<endl;
       turSayisi++;

       cout<<turSayisi<<". tur"<<endl;
       turSayisi++;

       cout<<turSayisi<<". tur"<<endl;
       turSayisi++;

       cout<<turSayisi<<". tur"<<endl;
       turSayisi++;

       cout<<turSayisi<<". tur"<<endl;
       turSayisi++;        
       
    */
}