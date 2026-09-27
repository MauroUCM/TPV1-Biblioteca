#include "Catalogo.h"
#include <algorithm>

Catalogo::Catalogo(istream& stream) {
	stream >> _size;

	_elems = new Ejemplar[_size];

	for (int i = 0; i < _size; i++) {
		stream >> _elems[i];
	}
}

Catalogo::~Catalogo() {
	delete [] _elems;
}

Ejemplar* Catalogo::buscarEjemplar(int id) const {
	Ejemplar* candidato = std::lower_bound(_elems, _elems + _size, id, comparaCodigo);

	if (candidato->getCodigo() == id) {
		return candidato;
	}

	return nullptr;
}

bool Catalogo::comparaCodigo(const Ejemplar& ejemplar, int codigo) {
	return ejemplar.getCodigo() < codigo;
}