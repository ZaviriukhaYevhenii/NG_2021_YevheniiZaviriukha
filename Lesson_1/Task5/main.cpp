#include <iostream>

using namespace std;

int main()
{
    int numeric_one;
    int numeric_two;
    int value;
    cout << "Vvedite pervoe chislo: ";
    cin >> numeric_one;
    cout << "Vvedite vtoroe chislo: ";
    cin  >> numeric_two;
    cout << "Vvedite deistvie: ";
    cin >> value;
    switch(value)
    {
        case 1:
            return numeric_one + numeric_two;
            break;
        case 2:
            return numeric_one - numeric_two;
            break;
        case 3:
            return numeric_one * numeric_two;
            break;
        case 4:
            return numeric_one / numeric_two;
            break;
    }
    system("pause");
    return 0;
}
