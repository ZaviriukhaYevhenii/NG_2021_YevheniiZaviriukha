#include <iostream>

using namespace std;

int main()
{
    int numeric_one, numeric_two, type, Result;
    cout << "Vvedite pervoe chislo: ";
    cin >> numeric_one;
    cout << "Vvedite vtoroe chislo: ";
    cin  >> numeric_two;
    cout << "Vvedite deistvie: ";
    cin >> type;
    switch(type)
    {
        case 1:
            Result = numeric_one + numeric_two;
            cout << "Result - " << Result << endl;
            break;
        case 2:
            Result = numeric_one - numeric_two;
            cout << "Result - " << Result << endl;
            break;
        case 3:
            Result = numeric_one * numeric_two;
            cout << "Result - " << Result << endl;
            break;
        case 4:
            Result = numeric_one / numeric_two;
            cout << "Result - " << Result << endl;
            break;
    }
    system("pause");
    return 0;
}
