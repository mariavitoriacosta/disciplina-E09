#include <iostream>
using namespace std;

void analisarNumeros() {
    int num;
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num;

        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        }
    }

    // Exibe resultados
    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;
    cout << "Quantidade de numeros positivos: " << positivos << endl;
    cout << "Quantidade de numeros negativos: " << negativos << endl;
}

int main() {
    int n;
    cin >> n; // quantidade de testes

    for (int i = 0; i < n; i++) {
        analisarNumeros();
        cout << endl; // Linha em branco entre cada teste
    }

    return 0;
}

