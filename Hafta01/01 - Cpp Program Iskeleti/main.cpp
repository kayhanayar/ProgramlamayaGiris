/*
    cout nesnesi  iostream.hpp dosyası içerisinde barınmaktadır.
    cout nesnesinin kodunu projemize ekliyoruz

    # ile başlayan komutlar derleme işlemi öncesinde derleyiciye yapmasını
    istediğimiz işlemleri gerçekleştirir
    #include komutu derleyiciye < > içerisindeki kütüphaneyi kodumuza eklemesini sağlamaktadır.

*/

#include<iostream>



/*
    kullanılacak namespace(isim uzayı) aktif ediliyor.
    cout nesnesi std isim uzayında barınmaktadır.
*/
using namespace  std;

/*
    Programımız çalıştıracağı komutları barındıracak fonksiyon tanımlanıyor
    main fonksiyonu C++ dili için standarttır. main fonksiyonu olmayan program çalıştırılamaz.
*/
int main()
{
    /* 
        cout nesnesi ekrana yazı çıkartmak için kullanılmaktadır.
        cout nesnesine ekrana çıkartacağı yazıyı << operatörü ile verilmesi gerekmektedir.
        C++ programlama dilinde yazıları çift tırnaklar("") arasına yazılmalıdır.
    */

    cout<<"Merhaba Dunya";
}

/*
    derlemek için komut isteminde aşağıdaki komutu girmeniz yeterli olacaktır

        g++ main.cpp -o program

*/