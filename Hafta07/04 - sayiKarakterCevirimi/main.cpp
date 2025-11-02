#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    /*
        cout ekrana sadece karakterleri çıkartabilmektedir.
        örneğin 123 tamsayısının ekrana çıkartılabilmesi için
        cout her bir basamağın karakter kodunu bulup ekrana çıkarması gerekir.

        Örneğin '0' karakterinin sayısal kodu 48'dir
                '1' karakterinin sayısal kodu 49
                '2' karakterinin sayısal kodu 50
                ..  .....                     ..
    */

    char k ='0';

    int sifirinSayisalDegeri = k;
    /*
        Sifir karakterinin sayısal değeri aşağıda çıkartılıyor
    */
   cout<<"0 karakterinin kodu="<<sifirinSayisalDegeri<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<endl;
   for(int i=1;i<10;i++)
   {
        int karakterKodu ='0'+i;
        cout<<i<<" sayisinin karakter kodu = "<<karakterKodu<<endl;
   }

   /*
        cout kedisine verdiğimiz değişkenin türüne göre okuduğu değeri değerlendirmektedir.

        Örneğin değişkenimizin türü char  ve hafızada okuduğu değer 48 ise 
        cout 48'in bir karakter kodu olduğu düşünmekte ve ekrana 0 karakterini basmaktadır.

        Fakat değişken türü int ve hafızada yine 48 değeri okunursa iki basamaklı bir tam sayının
        ekrana çıkartılması gerektiğini düşünecek o yüzden tam sayının basamaklarını bulacak daha sonra
        her bir basamağın karakter kodu karşılıklarına çevirerek ilgili karakteri ekrana çıkartacaktır.
   */
    cout<<"----------------------------------------------"<<endl;
    char karakter= 48;
    cout<<"karakter ="<<karakter<<endl;
    int sayi = 48;
    cout<<"sayi = "<<sayi<<endl;
}