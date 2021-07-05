#include <iostream>

using namespace std;

int main()
{
    int numeric_one, numeric_two, value;
    cout << "Vvedite pervoe chislo: ";
    cin >> numeric_one;
    cout << "Vvedite vtoroe chislo: ";
    cin  >> numeric_two;
    cout << "Vvedite deistvie: ";
    cin >> value;
    switch(value)
    {
        case 1:
            value = numeric_one + numeric_two;
            break;
        case 2:
            value = numeric_one - numeric_two;
            break;
        case 3:
            value = numeric_one * numeric_two;
            break;
        case 4:
            value = numeric_one / numeric_two;
            break;
    }
    cout << "Result - " << value << endl;
    system("pause");
    return 0;
}
