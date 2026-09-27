#pragma once
#include<fstream>
#include<string>

using namespace std;

enum Tipo {
	AUDIOVISUAL,
	LIBRO,
	JUEGO
};

class Ejemplar
{
public:
	Ejemplar();
	~Ejemplar();

	// getters
	Tipo getTipo() const { return _tipo; }
	int getCodigo() const { return _codigo; }
	string getTitulo() const { return _titulo; }

	friend istream& operator>>(istream&, Ejemplar&);

private:
	Tipo _tipo;
	int _codigo;
	string _titulo;
};

