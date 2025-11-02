#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int sayi= 12345;
    
    /*
        yukarıdaki sayının her bir basamağı bulunup tek tek ekrana çıkartılacak

    */

    while(sayi)
    {
        int basamak = sayi%10;
        char basamakKarakteri = '0'+basamak;
        cout<<basamak<<endl;
        sayi/=10;
    }

    cout<<"----------------------------------------------"<<endl;

    /* 
        sayinin basamaklarını bir karakter dizisine yerleştirelim.
        ilk önce basamak sayısı bulunuyor. 
    */
    sayi = 12345;
    int basamakSayisi = 0;
    int gecici = sayi;
    while(gecici)
    {
        int basamak = gecici%10;
        basamakSayisi++;
        gecici/=10;
    }    


    char basamaklar[20];
    //karakter dizimizin son elemanını '\0' özel karakterini yerleştiriyoruz.
    basamaklar[basamakSayisi]='\0';
    basamakSayisi--;
    gecici = sayi;
    /*
        basamakları tersten bulduğumuz için dizimize yerleştirirkende tersten gitmemiz gerekiyor
    */
    while(gecici)
    {
        int basamak = gecici%10;
        basamaklar[basamakSayisi]='0'+basamak;
        basamakSayisi--;
        gecici/=10;
    }   
    cout<<basamaklar<<endl;
}