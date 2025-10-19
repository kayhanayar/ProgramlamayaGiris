#include <iostream>

using namespace std;

int main()
{
   int satir = 5;

   for (int disSayac = 1; disSayac <= satir; disSayac++)  //-----> Dış döngü
   {
      
      for (int icSayac = disSayac; icSayac < satir; icSayac++)    // ----> iç döngü
      {
         cout << "-";
      }
      for (int icSayac = 0; icSayac < disSayac*2-1; icSayac++)    // ----> iç döngü
      {
         cout << "*";
      }
      for (int icSayac = disSayac; icSayac < satir; icSayac++)    // ----> iç döngü
      {
         cout << "-";
      }
      cout << endl;
   }
}