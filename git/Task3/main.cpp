#include <iostream>

using namespace std;

int main()
{
    int necessary;
    int cones;
    int gathering;
    cout << "Skolko nozhno oreshkov: ";
    cin >> necessary;
    cout << "Skolko oreshkov v shiske: ";
    cin >> cones;
    cout << "Skolko ona sobrala: ";
    cin >> gathering;
    if (necessary > (cones * gathering)){
        cout << "NO!" << endl;
    } else {
        cout << "OK" << endl;
    }
    system("pause");
}
