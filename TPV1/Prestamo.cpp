#include "Prestamo.h"
#include <chrono>

Prestamo::Prestamo() {

 }

Prestamo::~Prestamo() {

}

void Prestamo::leerPrestamo(const Catalogo& catalogo, std::istream& stream) {
	char unBar;
	int dayAux, mon, yea;

	stream >> dayAux;
	_ejemplar = catalogo.buscarEjemplar(dayAux);
	stream >> dayAux >> unBar >> mon >> unBar >> yea;
	_fecha = Date(dayAux, mon, yea);
	stream >> _usuario;
}

Date Prestamo::getDevolucion() const {
	switch (_ejemplar->getTipo())
	{
	case Tipo::AUDIOVISUAL:
		return _fecha + 7;
		break;
	case Tipo::JUEGO:
		return _fecha + 14;
		break;
	case Tipo::LIBRO:
		return _fecha + 30;
		break;
	}
}

bool Prestamo::operator<(const Prestamo& prestamo) const {
	return (_fecha < prestamo.getFecha());
};

ostream& operator<<(ostream& out, const Prestamo& d) {
	int fechaDiff = d.getDevolucion().diff(Date());

	out << d.getFecha() << " (en " << fechaDiff << " dias) " << d.getEjemplar()->getTitulo();
	if (fechaDiff < 0) {
		out << " (" << fechaDiff * 2 << " días de penalización)";
	}

	return out;
}
