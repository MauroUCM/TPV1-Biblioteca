#pragma once
#include "Catalogo.h"
#include "date.hpp"

class Prestamo
{
public:
	Prestamo();
	~Prestamo();

	void leerPrestamo(const Catalogo&, std::istream&);
	Date getDevolucion() const;

	bool operator<(const Prestamo&) const;
	friend ostream& operator<<(ostream& out, const Prestamo& d);

	// getters
	Ejemplar* getEjemplar() const { return _ejemplar; }
	Date getFecha() const { return _fecha; }
	int getUsuario() const { return _usuario; }

private:
	Ejemplar* _ejemplar;
	Date _fecha;
	int _usuario;

};

