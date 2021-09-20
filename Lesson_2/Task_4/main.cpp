#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Square size: ";
    cin >> size;

    for (int row = 0; row <= size; row++){
        for(int column = 0; column < row; column++){
        cout << "*";
        }
    cout << endl;
}
cout << endl;

    for (int line = size; line > 0; line--){
        for (int asterisk = 0; line > asterisk; asterisk++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int line = size; line > 0; line--){
        for (int space = 0; space < size - line; space++){
            cout << " ";
        }
        for (int asterisk = 0; line > asterisk; asterisk++){
            cout << "*";
        }
        cout << endl;
    }

    for (int line = 0; line <= size; line++){
        for (int space = 0; space < size - line; space++){
            cout << " ";
        }
        for (int asterisk = 0; line > asterisk; asterisk++)
            cout << "*";
        cout << endl;
    }
    system("pause");
    return 0;
}
