#pragma once
#include<fstream>

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
	
	friend istream& operator>>(istream&, Ejemplar&);
private:
	Tipo _tipo;
	int _codigo;
	string _titulo;
};

