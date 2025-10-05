#include<iostream>

/*
   Atama operatörünün solunda sadece tek bir değişken olabilir.

   Başka bir işlem olamaz.

*/
using namespace std;

int main()
{

    int sayi1= 2;
    int sayi2= 5;
    /*
        Aşağıdaki ifade derleyici hatası(compiler error) verecektir.

        Atama operatörünün solunda sadece bir değişken olabilir.
    */

    //sayi2+5 = sayi1;

    /*
    
        Atama operatörü zincirleme kullanılabilir.

        Aşağıdaki ifadede ilk olarak en sağdaki atama operatörü devreye girecektir.

        15 değeri sayi1 değişkenine atanacaktır.

        = operatörü işleminin sonucu da atama değeridir.

        sayi1=15   işleminin sonucu  da 15 olacaktır.

        sayi2 = sayi1=15  ===> sayi2= 15  ===> 15
    
    */
    cout<<(sayi2=sayi1=15);

    /*
    
        () operatörüleri işlem önceliği için kullanılabilir.

        cout içerisindeki () operatörlerini kaldırırsanız derleme hatası oluşacaktır.

        çünkü << operatörü = operatöründen daha önce çalışmaktadır.
    */
}