#pragma once
#include<fstream>
#include <iostream>
#include "Prestamo.h"

using namespace std;

class ListaPrestamo
{
public:
	ListaPrestamo(istream& stream, const Catalogo& catalogo);
	~ListaPrestamo();

	void mostrar(ostream&);

private:
	const Catalogo& _catalogo;
	Prestamo* _elems;
	size_t _numElems;

	void ordenar();
};

