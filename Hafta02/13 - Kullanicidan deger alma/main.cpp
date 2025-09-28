#include<iostream>

/*
    c++ dilinde kullanıcıdan değer alma işlemi için cin nesnesi kullanılmaktadır.

    cin nesnesi ile beraber >> operatörü kullanıldığında kullanıcıdan gelen değer

    istenilen değişkene atanabilmektedir.
*/
using namespace std;

int main()
{
    int sayi;


    cin>>sayi;  //program bu noktaya geldiğinde kullanıcının değer girmesi beklenecektir.


    /*
    
        cin>>sayi   -->kullanıcının girdiği değer sayi değişkenine atanacaktır.

        kullanıcı değer girdikten sonra degeri programa yollamak için enter tuşuna basmalıdır.

        Aksi taktirde uygulama değer girilmeye devam edildiğini düşünecektir.


    */

    cout<<"Girilen Sayi;"<<sayi<<endl;

}