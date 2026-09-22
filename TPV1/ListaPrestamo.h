#pragma once
#include<fstream>
#include <iostream>
#include "Catalogo.h"
#include "Prestamo.h"

using namespace std;

class ListaPrestamo
{
public:
	ListaPrestamo(istream& stream, const Catalogo& catalogo);
	~ListaPrestamo();

	friend ostream& operator<<(ostream& stream, const ListaPrestamo& lista);

private:
	const Catalogo& _catalogo;

	void ordena();

};

