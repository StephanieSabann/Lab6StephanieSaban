#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class CuentaBancaria{
private:
    string nombre;
    float saldo;
    int numerocuenta;

public:
    CuentaBancaria(string nom,float saldoinicial,int num) {
        nombre = nom;
        saldo = saldoinicial;
        numerocuenta = num;
    }
    void depositar(float cantidad) {
        saldo = saldo + cantidad;
        cout << "Se depositaron $" << cantidad << ". Saldo actual: $" << saldo <<endl;
    }
    void retirar(float cantidad2) {
        if (saldo >= cantidad2) {
            saldo = saldo - cantidad2;
            cout << "Se retiraron $" << cantidad2 << ". Saldo actual: $" << saldo <<endl;
        } else {
            cout << "Saldo insuficiente para realizar el retiro." <<endl;
        }
    }
    void consultarSaldo() {
    	cout <<"Nombre del titular: "<<nombre<<endl;
    	cout <<"Numero de cuenta: "<<numerocuenta<<endl;
    	cout <<"Saldo Inicial: "<<saldo<<endl;
        cout << "Saldo actual de la cuenta: $" << saldo <<endl;
    }
};
int main() {
	
    float cantidad, cantidad2;
    cout<<"Ingresar la cantidad para depositar: ";
	cin>>cantidad;
	cout<<"Ingresar la cantidad para retirar: ";
	cin>>cantidad2;
    CuentaBancaria cuenta("Juan Perez",8000, 233445);

    cuenta.consultarSaldo();
    cuenta.depositar(cantidad);
    cuenta.retirar(cantidad2);

    return 0;
}
