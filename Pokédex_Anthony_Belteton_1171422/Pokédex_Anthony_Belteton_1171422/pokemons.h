#pragma once
#include <string>
ref class pokemons
{
public:
	int generacion;
	System::String^ nombres;
	int NT;

	pokemons(int _generacion,System::String^ _nombres, int _NT) {
		generacion = _generacion;
		nombres = _nombres;
		NT = _NT;
	}
};




