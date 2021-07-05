#include <iostream>

using namespace std;

int main()
{
    int N,M,K,S;
    cout <<"Skolko nozhno oreshkov: ";
    cin >> N;
    cout << "Skolko oreshkov v shiske: ";
    cin >> M;
    cout << "Skolko ona sobrala: ";
    cin >> K;
    S = K + M;
    if(N > S)
    {
        cout << "NO!" << endl;
    }
    if(N < S)
    {
        cout << "OK" << endl;
    }
    system("pause");
}
