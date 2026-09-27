#pragma once
#include <fstream>
#include "Ejemplar.h"

class Catalogo
{
public:
	Catalogo(istream& stream);
	~Catalogo();

	Ejemplar* buscarEjemplar(int id) const;

private:
	Ejemplar* _elems;
	size_t _size;

	static bool comparaCodigo(const Ejemplar& ejemplar, int codigo);
};

