#include<iostream>

using namespace std;

int main()
{
    int sayi = 5;

    /*
        if koşulunun sağına noktalı virgül konursa
        derleyici if'e ait komutların yazımının bittiğini düşünmektedir.
        Dolayısıyla cout ile yazılmış satır koşula bağlı değildir.

        !!!!!DERLEYİCİ HATA VERMEZ !!!!!
    */
    if(sayi<0);
        cout<<"bu satir kosula ait degildir"<<endl;

        
}