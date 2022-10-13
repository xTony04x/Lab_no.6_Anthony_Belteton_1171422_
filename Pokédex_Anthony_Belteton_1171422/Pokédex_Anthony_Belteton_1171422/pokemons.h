#pragma once
#include <string>
ref class pokemons
{
public:
	System::String^ nombres;
	int generacion;
	int NT;

	pokemons(System::String^_nombres, int _generacion, int _NT ) {
		NT = _NT;
		generacion = _generacion;
		nombres = _nombres;
};




