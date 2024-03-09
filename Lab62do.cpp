#include <iostream>
#include <string>
using namespace std;
class Estudiante {
   private:
    string nombre;
    string apellido;
    int edad;
    int curso;

   public:
    Estudiante(string nom,string ape,int ed, int curs) {
        nombre = nom;
        apellido = ape;
        edad = ed;
        curso = curs;
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << std::endl;
        cout << "Apellido: " << apellido << std::endl;
        cout << "Edad: " << edad << std::endl;
        cout << "Curso: " << curso << std::endl;
    }
};
int main() {
    string nombre, apellido;
    int edad, curso;
    cout << "Ingrese el nombre del estudiante: ";
    cin >> nombre;

    cout << "Ingrese el apellido del estudiante: ";
    cin >> apellido;

    cout << "Ingrese la edad del estudiante: ";
    cin >> edad;

    cout << "Ingrese el curso del estudiante: ";
    cin >> curso;
    Estudiante estudiante(nombre,apellido,edad,curso);
    
    cout << "\nInformacion del estudiante:\n";
    estudiante.mostrarInformacion();

    return 0;
}