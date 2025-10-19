#include <iostream>

using namespace std;

int main()
{
    /* for döngüleri tur sayısının bilindiği durumlarda kullanılır.*/
    
    int sinir;
    cout<<"Sinir sayisini girini:";
    cin>>sinir;

    int toplam = 0 ;
    for(int i=0;i<sinir;i++)
    {
        toplam+=i;
    }
    /*
        int i=0     satırı ile döngünün sayaç değişkeni tanımlanıyor.
                    Bu değişkeni kullanarak döngünün atacağı tur sayısını kontrol edeceğiz.
        
        i<sinir     döngünün devam koşulu. her turda döngünün 
                    devam edip etmeyeceği bu koşula bağlıdır
        
        i++         Her tur bittikten sonra ilk olarak yapılacak işlem 
                    i'nin (sayaç) bir arttırılmasıdır.
      
        
    */

    cout<<"0 ile "<<sinir<<" arasındaki sayilarin toplami:"<<toplam<<endl;
}