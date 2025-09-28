#include<iostream>

/*
   ondalık sayılar için     float, double
   karakter için            char
   16 bit tam sayı          short
   pozitif tamsayılar       unsigned int

*/
using namespace std;

int main()
{
    /*
    
        float 32 bitlik bir ondalık sayıdır.
        değer atanırken f karakteri konmalıdır
    
    */
    float ondalikSayi  = 3.5f;  

    /*
    
        double 64 bitlik bir ondalık sayıdır.

        çok daha büyük ondalık sayıları tutuabilir.

        değer atanırken f karakteri kullanılmaz.
    
    */


    double buyukOndalikSayi = 3.5;


    cout<<"ondalik Sayi:"<<ondalikSayi<<endl;

    /*
    
        Tam sayı değişkenine ondalik değer atanırsa 
        ondalık kısım(virgülden sonrası) kaybedilecektir.

        Örneğin 3.5 sayısını tam sayıya atarsak atanan değer 3 olur.


    */

    int tamSayi = ondalikSayi;

    cout<<"Tam sayi:"<<tamSayi<<endl;

    /*
    
        yukarıdaki atama işleminde veri kaybı yaşanmıştır.
        C++ derleyicisi bu tip veri kayıplarında programcıları uyarmaktadır.
        Fakat değer ataması gerçekleştirilir.

        c# veya java gibi dillerde bu tip atamalara direk olarak izin verilmemektedir.
    
        uyarıları kaldırmak için dönüşüm yapılması gerekir.
        aşağıda ondalik sayı atanmadan önce tam sayıya dönüştürülmüştür
        Buradaki dönüşüm derleyiciye yaptığımız işlemin farkında olduğumuzu belirtmektedir.
        Bu nedenle derleyici uyarı vermeyecektir.
    */
   int yeniTamSayi = (int)ondalikSayi;

   cout<<"Yeni Tam sayi:"<<yeniTamSayi<<endl;

  
    /*
    
        char değişken türü tek bir karakter tutmak için kullanılmaktadır.
        karakter değerleri ' ' iki tektırnak içerisinde tutulmaktadır.
       
        'a'     a karakteri
       
        iki tırnak arasında tek bir karakter bırakılmalıdır.
    */

    char a = 'a';

    /*
        Dikkat 'a' karakteri ekrana çıkartılacak karakter anlamına gelmektedir.
        Derleyici tırnak içerisindeki değeri derlemez. 

    */

    cout<<a;

    char karakter = 'b';

    cout <<karakter;
}