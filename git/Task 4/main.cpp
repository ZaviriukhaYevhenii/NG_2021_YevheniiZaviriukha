#include <iostream>

using namespace std;

int main()
{
    int salary;
    cout << "Your salary $: " ;
    cin >> salary ;
    if(salary > 1000000)
    {
        cout << "Da ti millioner" << endl;
        return 0;
    }
    if(salary < 1000)
    {
        cout << "Rabotai bolshe! no ti molodec!" << endl;
        return 0;
    }
    if(salary < 999999)
    {
        cout << "Kruto" <<endl;
        return 0;
    }
    if(salary > 1000)
    {
        cout << "Kruto" <<endl;
        return 0;
    }
    system("payse");
    return 0;
}

