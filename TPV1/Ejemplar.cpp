#include "Ejemplar.h"

Ejemplar::Ejemplar() {

}

Ejemplar::~Ejemplar() {

}

istream& operator>>(istream& stream, Ejemplar& ejemplar) {
	char aux;

	stream >> ejemplar._codigo;
	stream >> aux;
	//stream.getline(); 
	
	switch (aux) {
	case 'A':
		ejemplar._tipo = AUDIOVISUAL;
		break;
	case 'L':
		ejemplar._tipo = LIBRO;
		break;
	case 'J':
		ejemplar._tipo = JUEGO;
		break;
	}

	return stream;
}