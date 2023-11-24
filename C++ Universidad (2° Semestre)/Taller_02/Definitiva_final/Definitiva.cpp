#include <iostream>

using namespace std;

int main()
{
    float ini;
    float firstexam;
    float secondexam;
    float thirdexam;
    float lastexam;

    cout << "Digite la definitiva del primer previo \n";
    cin >> firstexam;
    cout << "Digite la definitiva del segundo previo \n";
    cin >> secondexam;
    cout << "Digite la definitiva de la tercera nota \n";
    cin >> thirdexam;
    cout << "Digite la definitiva del previo final \n";
    cin >> lastexam;
    ini=(firstexam*0.25)+(secondexam*0.25)+(thirdexam*0.2)+(lastexam*0.3);
	cout << "Su definitiva final fue : " << ini << endl;

    return 0;
}
