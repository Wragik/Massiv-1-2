

#include <iostream>
#include<ctime>;
using namespace std;
int main()
{
    setlocale(LC_ALL,"rus");
    int  maxm = -10, minp = 10, k = 0, o = 0;
    int* z = new int[20];
    srand(time(NULL));
    cout << "Основной массив ";
    for (int i = 0; i < 20; i++)
    {
        
        z[i] = rand()%20-10;
        cout << z[i] << " ";
        if (z[i] < 0 && maxm < z[i])
        {
            maxm = z[i];
            k = i;
        }
        if (z[i] > 0 && minp > z[i])
        {
            minp = z[i];
            o = i;
        }
        
    }

    cout << "\n" << "Изменённый массив ";
    for (int i = 0; i < 20; i++)
    {
        z[k] = minp;
        z[o] = maxm;
        cout << z[i] << " ";
    }
    delete[]z;
}

