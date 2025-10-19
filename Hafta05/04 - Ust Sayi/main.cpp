#include <iostream>

using namespace std;

int main()
{
    
    
    int taban;
    int ust;
    cout<<"<-------------Ust Sayi hesapla--------------->"<<endl;
    cout<<"taban giriniz:";
    cin>>taban;
    cout<<"ust giriniz:";
    cin>>ust;

    int sonuc = 1 ;
    /* üst satısı kadar tur atacak. */
    for(int i=0;i<ust;i++)
    {
        sonuc*=taban;
    }

    cout<<taban<<" uzeri "<<ust<<" = "<<sonuc<<endl;
}