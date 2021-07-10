#include <iostream>

using namespace std;

int main()
{
    int salary;
    cout << "Your salary $: " ;
    cin >> salary ;
    if(salary < 1000)
    {
       cout << "Rabotai bolshe, no ti molodec" << endl;
    }
    if(salary > 1000 & salary < 1000000)
    {
       cout << "Kruto" << endl;
    }
    if(salary > 1000000)
    {
       cout << "Da ti millioner" << endl;
    }
    system("pause");
}

