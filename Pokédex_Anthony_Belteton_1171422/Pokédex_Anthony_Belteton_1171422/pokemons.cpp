#include "pokemons.h"
#include<string>
using namespace std;
// para agregar pokemons 
class pokemon
{
 public:
	~pokemon(){}
	pokemon(int generacion,string nombres,int nationumb) {
		this->nationumb = nationumb;
		this->nombres = nombres;
		this->generacion = generacion;
	}
	int getnationumb() {
		return nationumb;
	}
	int getgeneracion() {
		return generacion;
	}
	string getnombres() {
		return nombres;
	}

 private:
	string nombres;
	int nationumb;
	int generacion;
};


//info 
string pokemons::infopokemon() {
	
	pokemon p1(1,"Bullbasaur", 1);
	pokemon p2(1,"Charmander", 4);
	pokemon p3(2,"pichu",21);
	pokemon p4(3, "Torchic", 4);
	//vector con cadenas
	pokemon info[4] = {p1,p2,p3,p4};
	
}