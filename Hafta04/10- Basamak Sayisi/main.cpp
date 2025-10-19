#include <iostream>

using namespace std;

int main()
{
    
    
    int sayi;

    cout<<"<-------------Basamak sayisi hesapla--------------->"<<endl;
    cout<<"sayi giriniz:";
    cin>>sayi;

    int basamakSayisi = 0 ;
    while(sayi)
    {
        sayi/=10;
        basamakSayisi++;
    }
    cout<<"basamak sayisi:"<<basamakSayisi<<endl;
}