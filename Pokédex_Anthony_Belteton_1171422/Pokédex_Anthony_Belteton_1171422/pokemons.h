#pragma once
#include <string>
using namespace std;
class pokemons
{
public:
	int generacion;
	string nombres;
	int NT;

	pokemons(int _generacion,string _nombres, int _NT) {
		generacion = _generacion;
		nombres = _nombres;
		NT = _NT;
	}
};




