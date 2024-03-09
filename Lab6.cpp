#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Calculadora {
private:
    int num1;
    int num2;

public:
    Calculadora(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    int suma() {
        return num1 + num2;
    }
    int resta() {
        return num1 - num2;
    }
    int multiplicacion() {
        return num1 * num2;
    }
    float division() {
        if (num2 != 0) {
            return (num1) / num2;
        } else {
            cout << "Error: división por cero" <<endl;
            return 0;
        }
    }
};

int main() {
	int a, b;
	cout<<"Ingresar primer numero: ";
	cin>>a;
	cout<<"Ingresar segundo numero: ";
	cin>>b;
    Calculadora calc(a, b);

    cout << "Suma: " << calc.suma() <<endl;
    cout << "Resta: " << calc.resta() <<endl;
    cout << "Multiplicacion: " << calc.multiplicacion() <<endl;
    cout << "Division: " << calc.division() <<endl;

    return 0;
}