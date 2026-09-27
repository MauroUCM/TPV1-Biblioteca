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

    Catalogo catalogo = Catalogo(catalogoDoc);

    return 0;
}