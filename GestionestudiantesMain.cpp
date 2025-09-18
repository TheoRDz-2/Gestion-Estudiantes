#include <iostream>
using namespace std;
struct Estudiante {
string nombre;
int calificacion;
};
int main() {
Estudiante estudiantes[3] = {{"Juan", 85}, {"Maria", 90}, {"Luis", 78}};
cout << "Lista de Estudiantes:\n";
for (int i = 0; i < 3; i++) {
cout << "Nombre: " << estudiantes[i].nombre << ", Calificación: " << estudiantes[i].calificacion << endl;
}
return 0;
}