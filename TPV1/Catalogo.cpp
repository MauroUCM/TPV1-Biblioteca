#include "Catalogo.h"
#include <algorithm>

Catalogo::Catalogo(istream& stream) {
	stream >> _numElems;

	_elems = new Ejemplar[_numElems];

	for (int i = 0; i < _numElems; i++) {
		stream >> _elems[i];
	}
}

Catalogo::~Catalogo() {
	delete [] _elems;
}

Ejemplar* Catalogo::buscarEjemplar(int id) const {
	Ejemplar* candidato = std::lower_bound(_elems, _elems + _numElems, id, comparaCodigo);

	if (candidato->getCodigo() == id) {
		return candidato;
	}

	return nullptr;
}

bool Catalogo::comparaCodigo(const Ejemplar& ejemplar, int codigo) {
	return ejemplar.getCodigo() < codigo;
}