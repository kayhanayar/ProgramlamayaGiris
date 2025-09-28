#include<iostream>

/*
    degisken hafiza hucresini isimlendirmek icin kullanilir.

    int sayi;

    Yukarıdaki ifade ile hafızadan 4 baytlık bir alan bizim için ayrılacaktır
    Bu alana da kod içerisinde erişmek için sayi ismini kullanmamiz yeterli olacaktır.

    int(tamsayi) değişkenin türünü belirtmektedir. Tür aracılığıyla derleyici hafızada ne tutmak istediğimizi öğrenmektedir.

    Hafıza sadece bitlerden oluşmaktadır. Ne tür veri tutarsanız tutun herşey bitlerden oluşur.

    değişken türü aracılığıyla derleyici ayırdığımız alandaki bitleri istediğimiz türe çevirebilmektedir.

*/
using namespace std;

int main()
{
    
    int sayi;     //Tam sayı değişken oluşturuldu ve alan ismi sayi yapıldı.

    cout<<sayi;     //sayi değişkenine değer atanmadı. Ekrana ne çıkacağını bilemeyiz.

    /*
        c++ programlama dili değişkenlere ilk değer atamamaktadır. 
        Dolayısıyla değer atanmayan değişkenler için ayrılan hafıza alanında
        daha önceden ne veri bulunuyorsa sahip olacakları değerde o olacaktır.
    */

    
    sayi = 5;   //sayi değişkenine 5 değeri atanıyor.

    cout<<sayi;     //Ekrana 5 değeri çıkacaktır.

    
    int yeniSayi = 15;  //Bir değişken tanımlanırken ilk değeri de atanabilir.

    cout<<yeniSayi;

}