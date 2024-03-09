#include <iostream>
#include <string>
using namespace std;
class Pelicula {
   private:
    string titulo;
    string director;
    int anio;

   public:
    Pelicula(string tit,string direc,int an) {
        titulo = tit;
        director = direc;
        anio = an;
    }

    void mostrarInformacion() {
        cout << "Titulo: " << titulo << std::endl;
        cout << "Director: " << director << std::endl;
        cout << "Anio de lanzamiento: " << anio << std::endl;
    }
};
int main() {
    string titulo, director;
    int anio;
    cout << "Ingrese el titulo de la pelicula: ";
    cin >> titulo;

    cout << "Ingrese el director de la pelicula: ";
    cin >> director;

    cout << "Ingrese el anio de lanzamiento: ";
    cin >> anio;

    Pelicula peli(titulo,director,anio);
    
    cout << "\nInformacion de la pelicula:\n";
    peli.mostrarInformacion();

    return 0;
}