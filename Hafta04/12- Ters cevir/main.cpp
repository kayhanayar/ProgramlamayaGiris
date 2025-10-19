


#include <iostream>

using namespace std;

int main()
{
    
    
    int sayi;

    cout<<"<-------------Test cevir yazdir--------------->"<<endl;
    cout<<"sayi giriniz:";
    cin>>sayi;

    int tersSayi = 0;
    while(sayi)
    {
        int basamak = sayi%10;
        tersSayi=tersSayi*10+basamak;
        sayi/=10;
      
    }
    cout<<"ters sayi:"<<tersSayi<<endl;
    
}