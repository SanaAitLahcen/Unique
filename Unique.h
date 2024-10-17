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
	const  Unique& createur(string libelle);//Ce type de méthode (c-a-d qui posséde un type de retour référence) est utile pour chaîner des appels de méthode si on fait U.createur("hello").createur("ok") il va enchainer au contraire de void
	Unique& operator=(const Unique& U);
	static Unique& createur1();
	~Unique();

};

