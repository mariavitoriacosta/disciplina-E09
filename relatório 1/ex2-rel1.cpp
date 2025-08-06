#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Digite um numero entre 0 e 50: ";
        cin >> n;
    } while (n < 0 || n > 50);

    for (int i = n - 1; i > 0; i--) {
        cout << "Resto da divisao de " << n << " por " << i << ": " << (n % i) << endl;
    }

    return 0;
}
