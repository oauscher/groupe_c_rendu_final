// Composant5.cpp : Defines the exported functions for the DLL application
#include <iostream>
#include "Composant5.h"

// This is the constructor of a class that has been exported.
// see Composant5.h for the class definition
CComposant5::CComposant5()
{
	std::cout << "constructeur" << std::endl;
}
//m�thode permettant de la v�rification d'un bloc.
//elle retourne true si le bloc r�pond aux caract�ristique d�finies de false dans le cas contraire.
bool CComposant5::verify_bloc(Bloc b, char hash[HASH_SIZE], int nonce) {
	return true;
}

//m�thode permettant de la v�rification d'une transaction.
//elle retourne true si la transactio r�pond aux caract�ristique d�finies de false dans le cas contraire.
bool CComposant5::verify_transaction(TXI tx) {
	return true;
}

