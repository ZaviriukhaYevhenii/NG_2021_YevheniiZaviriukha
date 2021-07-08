#include <iostream>

using namespace std;

int main()
{
    int N;
    int M;
    int K;
    cout <<"Skolko nozhno oreshkov: ";
    cin >> N;
    cout << "Skolko oreshkov v shiske: ";
    cin >> M;
    cout << "Skolko ona sobrala: ";
    cin >> K;
    if(N > (M + K))
    {
        cout << "NO!" << endl;
    }
    if(N < (M + K))
    {
        cout << "OK" << endl;
    }
    system("pause");
}
