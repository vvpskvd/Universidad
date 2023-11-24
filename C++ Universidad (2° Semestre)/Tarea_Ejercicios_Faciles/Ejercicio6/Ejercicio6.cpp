#include<iostream>
using namespace std;

int main()
{
    int ini;
    int num_sheep [24] = {1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1};

    cout << "[";
       for (ini=0; ini<=23; ini++)
        {
            num_sheep[ini];
                if (num_sheep[ini] ==1 )
            {
                cout << "-True-";
            }
            else
            {
                cout << "-False-";
            }
        }
        cout << "]" << endl;

    return 0;
}
