#include "pile_entier.h"
#include <iostream>

pile_entier::pile_entier(int taille = 20)
{
	int hauteur = 0;

}

pile_entier::pile_entier(int)
{

}

void pile_entier::empile(int)
{

}

int pile_entier::depile()
{
	int dernier = pile[hauteur];
	hauteur;
	std::cout << "La derniere valeur est " << pile[hauteur] << std::endl;
	return dernier;
}

int pile_entier::pleine()
{

}

int pile_entier::vide()
{

}