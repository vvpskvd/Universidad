#include <iostream>

using namespace std;

int main()
{
    int at1_min, at1_sec;
    int at2_min, at2_sec;
    int hours_total_temp, min_total_temp, sec_total_temp;

    cout << "Bienvenido/a al regitrador de tiempo. \n";

    cout << "Digite la cantidad de minutos registrados por el atleta 1. \n";
    cin >> at1_min;
    cout << "Digite la cantidad de segundos registrados por el atleta 1. \n";
    cin >> at1_sec;

    cout << endl;

    cout << "Digite la cantidad de minutos registrados por el atleta 2. \n";
    cin >> at2_min;
    cout << "Digite la cantidad de segundos registrados por el atleta 2. \n";
    cin >> at2_sec;

    sec_total_temp=at1_sec+at2_sec;
    min_total_temp=at1_min+at2_min;

        if (sec_total_temp>59)
            {
                min_total_temp++;
                sec_total_temp=sec_total_temp-60;
                                                    if (min_total_temp>59)
                                                    {
                                                        hours_total_temp++;
                                                        min_total_temp=min_total_temp-60;
                                                    }
            }

        if (min_total_temp>59)
            {
                hours_total_temp++;
                min_total_temp=min_total_temp-60;
                                                    if (sec_total_temp>59)
                                                    {
                                                        min_total_temp++;
                                                        sec_total_temp=sec_total_temp-60;
                                                    }
            }

    cout << "total de horas:" << hours_total_temp << endl;
    cout << "total de minutos:" << min_total_temp << endl;
    cout << "total de segundos:" << sec_total_temp << endl;

    return 0;
}
