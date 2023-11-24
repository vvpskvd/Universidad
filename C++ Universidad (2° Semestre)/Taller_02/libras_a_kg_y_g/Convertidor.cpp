#include <iostream>

using namespace std;

int main()
{
   int lb;
   int kg;
   int g;

   cout << "Cuantas libras desea convertir? \n";
   cin >> lb;
    kg=lb/2.205;
    g=lb*453.6;
    cout << "El total en kilogramos seria : " << kg << "\n";
    cout << "El total en gramos seria : " << g << endl;
    return 0;
}
