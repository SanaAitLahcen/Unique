#include "Unique.h"
#include<iostream>

int Unique::compt = 0;



Unique::Unique()
{
	this->id = compt++;

	this->libelle = "";

	for (int i = 0; i < 2; i++)
	{
		this->histo_km[i] = 100;
	}
}



Unique::Unique(int id)
{
	this->id = id;
}


/*
Unique::Unique(Unique& U)
{
	this->id = U.id;
	this->libelle = U.libelle;
}*/



void Unique::print()
{
	cout << "ID: " << this->id << ", libelle: " << this->libelle << ", histo: " << this->histo_km << endl;

}


const Unique& Unique::createur(string libelle)
{
	this->libelle = libelle;
	return *this;
}


Unique& Unique::operator=(const Unique& U)
{

	if (this != &U) {  // Vérification de l'auto-affectation
		this->id = U.id;
		this->libelle = U.libelle;
	}
	return *this;  // Retourner l'objet courant

}



Unique& Unique::createur1()
{
	if (compt == 0)
	{
		Unique P;
		return P;
	}
}



Unique::~Unique()
{
	delete this->histo_km;
}

