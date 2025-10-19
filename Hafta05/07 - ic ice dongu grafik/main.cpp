#include <iostream>

using namespace std;

int main()
{
   int satir = 3;

   for (int disSayac = 1; disSayac <= satir; disSayac++)  //-----> Dış döngü
   {
      for (int icSayac = 0; icSayac < disSayac; icSayac++)    // ----> iç döngü
      {
         cout << "*";
      }
      cout << endl;
   }
}