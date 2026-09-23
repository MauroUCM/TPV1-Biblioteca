#include <fstream>
#include <iostream>
#include <windows.h>
#include "checkML.h"
#include "ListaPrestamo.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    ifstream catalogoDoc("catalogo.txt");

    int num;

    catalogoDoc >> num;
    
    cout << num;
}