#pragma once
#include <fstream>
#include "Ejemplar.h"

class Catalogo
{
public:
	Catalogo(istream& stream);
	~Catalogo();

	Ejemplar* buscarEjemplar(int id);

private:
	Ejemplar* _elems;
	size_t _numElems;
	size_t _size;

};

