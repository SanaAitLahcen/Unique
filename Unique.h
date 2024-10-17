#pragma once
#include<string>
using namespace std;



class Unique
{
private:
	static int compt;
	int id;
	string libelle;
	int* histo_km = new int[2];


public:
	Unique();
	Unique(int id);
	Unique(Unique&) = delete;
	void print();
	const  Unique& createur(string libelle);//Ce type de m�thode (c-a-d qui poss�de un type de retour r�f�rence) est utile pour cha�ner des appels de m�thode si on fait U.createur("hello").createur("ok") il va enchainer au contraire de void
	Unique& operator=(const Unique& U);
	static Unique& createur1();
	~Unique();

};

