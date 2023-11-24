#include <iostream>

using namespace std;

int main()
{
    int num;
    int i=1;
    cout << "Digite un numero cual sea de limite para la lista: \n";
    cin >> num;
    cout << "\n";
    while(i<=num) {
            cout << i << "\n";
        i++;
    }
    return 0;
}
