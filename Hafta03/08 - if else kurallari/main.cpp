#include<iostream>

using namespace std;

int main()
{
    int sayi = 5;

    /*
        asagidaki else ifadesi ile if arasındaki ek bir komut olduğu için
        bağları kopmuştur. Dolayısıyla derleyici hatası verir.
        
    */
    if(sayi<0)
        cout<<"sayi negatiftir"<<endl;
        cout<<"if kosuluna ait degildir"<<endl;
    else
        cout<<"sayi pozitiftir"<<endl;

    

    /*
        if-else {} ile yazılabilir
    */
    if(sayi<0)
    {
        cout<<"sayi negatiftir"<<endl;
        cout<<"if kosuluna aittir"<<endl;
    }
    else
        cout<<"sayi pozitiftir"<<endl;
}