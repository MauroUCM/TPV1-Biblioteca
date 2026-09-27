// Mauro Martínez Montes

#include <fstream>
#include <iostream>
#include <windows.h>
#include "checkML.h"
#include "ListaPrestamo.h"
#include "Catalogo.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    ifstream catalogoDoc("catalogo.txt");
    ifstream prestamoDoc("prestamos.txt");

    Catalogo catalogo = Catalogo(catalogoDoc);
    ListaPrestamo listaPrestamos = ListaPrestamo(prestamoDoc, catalogo);

    listaPrestamos.mostrar(cout);

    catalogoDoc.close();
    prestamoDoc.close();
    return 0;
}