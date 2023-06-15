// EvalFinal.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Boxeur.h"
#include <iostream>
using namespace std;
using namespace Boxeurs;

int main()
{
    Boxeur boxer_1("Box_1", 75);
    cout << endl << "Creation Boxeur " << &boxer_1 << " de nom " << boxer_1.GetNom() << " et de poids " << boxer_1.GetPoids() << "kg." << endl;

    Boxeur* boxer_2;
    boxer_2 = new Boxeur("Box_2", 78);
    cout << endl << "Creation Boxeur " << boxer_2 << " de nom " << boxer_2->GetNom() << " et de poids " << boxer_2->GetPoids() << "kg." << endl;
    
    cout << endl << "Les delete : " << endl;
    delete boxer_2;

    cout << endl << endl << "------------ FIN du programme ------------" << endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
