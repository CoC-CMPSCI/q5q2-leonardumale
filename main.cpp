#include <iostream>
using namespace std;

int main()
{
    int N, M;

    cout << "Enter your base number: ";
    cin >> N;
    cout << "Enter your exponent: ";
    cin >> M;
    int power = 1;

    cout << N << " to power number: ";
    for ( int i = 0; i <= M; i++;) {
        cout << power;
        if (i < M) cout << ", ";
        power *= N;
    }

    

    cout << endl;

    return 0;
}
