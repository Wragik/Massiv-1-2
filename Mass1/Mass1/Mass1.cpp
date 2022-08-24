// Mass1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); // Починка русского языка
    setlocale(LC_ALL, "rus");
    int a, i, p, n, max=0;
    cout << "Введите кол-во ";
    cin >> a;
    string* z = new string[a];
    string f,maximus;
    for (i = 0; i < a; i++)
    {
        cout << "Введите слово ";
        cin >> z[i];
        f = z[i];
        p = f.length();
        if (p > max)
        {
            max = p;
            maximus = z[i];
        }


    }
    delete[]z;
    cout << "Самое длинное слово из введённых: " << maximus;
    
    
    
}


