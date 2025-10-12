#include <iostream>
using namespace std;


int main()
{

    int turSayisi = 0;



    while(turSayisi>20)
    {
        turSayisi++;

        /*
            turSayısı tek olduğunda continue komutu çalışır
            continue çağrıldığında direk olarak döngünün başına dönülür.

            Dolayısıyla tur sayısı  çift olduğunda döngü direk bir sonraki adıma geçecek
            ekrana turSayisi çıkartılamayacaktır.
            Dolayısıyla sadece tek tur sayıları ekrana çıkacaktır.
        */
       
        if(turSayisi%2==0)
            continue;

        cout<<turSayisi<<endl;

        
    }

    cout<<"dongu bitti"<<endl;
   

}