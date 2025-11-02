#include <iostream>
#include<string>

using namespace std;

int main()
{
    /*
    
        c++ programlama dili karakter dizilerini daha kolay kontrol edebilmemiz için
        programcılara string sınıfını vermektedir.
        string sınıfının dan önce bir nesne oluşturacağız. Aşağıuda bir string nesnesi oluşturulmaktadır.

        strYazi bir string nesnesini temsil etmektedir.
    */

    string strYazi = "Merhaba";

    // cout string nesnelerini direk ekrana çıkartabilmektedir.
    cout<<strYazi<<endl;
    //string nesneleri ile + operatörü kullanılarak yazı birleştirilmesi yapılabilir.
    strYazi+=" Dunya";
    cout<<strYazi<<endl;
    //string nesnelerinin karakterline bir dizi indeksi kullanılarak erişilebilir.
    cout<<strYazi[0]<<endl;
    //string nesnelerine karakter eklenebilmektedir.
    strYazi+='!';
    cout<<strYazi<<endl;
}