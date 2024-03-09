#include <iostream>
#include <string>
using namespace std;
class Libro{
	private:
		string titulo;
		string autor;
		int anio;
	public:
		Libro(string n,string m, int a){
			titulo = n;
			autor = n;
			anio = a;
		}
		void mostrarInfo(){
			cout << "Titulo del libro: " << titulo <<", Autor: " << autor <<", Anio de publicacion: " << anio << endl;
		}
	};		
int main (){
	Libro libro1("El mar y las aguas","Ricardo Jair", 2023); //Instanciar en memoria
    Libro libro2("las olas","Juan Liberto", 2024);
    
	cout << "Informacion del primer libro: " << endl;
	libro1.mostrarInfo();
	cout << "Informacion del segundo libro: " << endl;
	libro2.mostrarInfo();

}