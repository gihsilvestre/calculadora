#include <iostream>

using namespace std;

// Função para realizar a adição
double adicao(double a, double b) {
    return a + b;
}

// Função para realizar a subtração
double subtracao(double a, double b) {
    return a - b;
}

// Função para realizar a multiplicação
double multiplicacao(double a, double b) {
    return a * b;
}

// Função para realizar a divisão
double divisao(double a, double b) {
    if (b == 0) {
        cout << "Erro: Nao e possivel dividir por zero." << endl;
        return 0.0;
    }
    return a / b;
}

int main() {
    char operador;
    double numero1, numero2, resultado;

    cout << "Bem-vindo a calculadora!" << endl;
    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o operador (+, -, *, /): ";
    cin >> operador;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    switch (operador) {
        case '+':
            resultado = adicao(numero1, numero2);
            break;
        case '-':
            resultado = subtracao(numero1, numero2);
            break;
        case '*':
            resultado = multiplicacao(numero1, numero2);
            break;
        case '/':
            resultado = divisao(numero1, numero2);
            break;
        default:
            cout << "Operador inválido!" << endl;
            return 1;
    }

    cout << "O resultado é: " << resultado << endl;

    return 0;
}
