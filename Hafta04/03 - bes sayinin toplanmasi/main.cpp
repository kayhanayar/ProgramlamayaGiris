#include <iostream>
using namespace std;


int main()
{
    /*
        turSayisi değişkeni döngünün atacağı tur sayısını belirlemektedir.
        bu tip değişkenlere sayaç adı verilmektedir.
        sayaç bu sefer azaltırak döngü çalıştırılmıştır.
    */

    int turSayisi = 0;

    /*
        toplamları tutması için bir değişken oluşturuyoruz
        ve ilk değer olarak 0 değeri atıyor.
        Aksi halde toplam rastgele bir değer ile başlayacaktır
    */
    int toplam = 0;

    while(turSayisi>5)
    {
        //tur sayısı 0'dan başlamaktadır. 
        //o yüzden 1 arttırarak sırayı yazdırıyoruz

        cout<<turSayisi+1<<". sayi gir:"<<endl;
        
        int girilenSayi;

        cin>>girilenSayi;

        toplam +=girilenSayi;   

        turSayisi++;
    }

    cout<<"toplam:"<<toplam<<endl;
}