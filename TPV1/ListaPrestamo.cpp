#include "ListaPrestamo.h"
#include <algorithm>

using namespace std;

ListaPrestamo::ListaPrestamo(istream& stream, const Catalogo& catalogo) : _catalogo(catalogo) {
	stream >> _numElems;

	_elems = new Prestamo[_numElems];

	for (int i = 0; i < _numElems; i++) {
		_elems[i].leerPrestamo(catalogo, stream);
	}

	ordenar();
}

ListaPrestamo::~ListaPrestamo() {
	delete[] _elems;
}

void ListaPrestamo::ordenar() {
	sort(_elems, _elems + _numElems);
}

void ListaPrestamo::mostrar(ostream& out) {
	for (int i = 0; i < _numElems; i++) {
		out << _elems[i] << "\n";
	}
}
