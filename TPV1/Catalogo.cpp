#include "Catalogo.h"

Catalogo::Catalogo(istream& stream) {

}

Catalogo::~Catalogo() {
	delete [] _elems;
}

Ejemplar* Catalogo::buscarEjemplar(int id) {
	return nullptr;
}