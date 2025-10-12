#include <iostream>
using namespace std;

/*
    aynı komutların birden fazla çalıştırılması gerektiği
    durumlarda döngü komutları kullanılabilir

    ilk olarak while döngüsünü görecegiz

    while (iken şeklinde çevrilebilir)

    while(sayac<5)  ifadesi ==>  sayac<5'iken  şeklinde çevrilebilir
*/
int main()
{
    int turSayisi = 0;
    /*
        while komutu if'de olduğu gibi koşuluna bağlı olarak çalışmaktadır
        koşul doğru ise döngüye ait olan komutlar çalışmakadır 
        Aksi durumda döngü sonlanır.  
        Aşağıdaki döngü 5 tur atacaktır.
    */
    while(turSayisi<5)
    {
        cout<<turSayisi<<". tur"<<endl;
        turSayisi++;
    }
}