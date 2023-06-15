// EvalFinal.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Boxeur.h"
#include <iostream>
#include "Combat.h"
using namespace std;
using namespace Boxeurs;


#pragma region Fonctions
void AfficheResultats(Combat tabCompe[])
{
    cout << endl << endl << "Recapitulatif de la competition :";
    for (int i = 0; i < 3; i++)
    {
        cout << endl << "\t" << "Combat : " << tabCompe[i].GetNiveau();
        cout << endl << "\t" << "\t" << "Boxer : " << tabCompe[i].GetCoinBleu() << " dans le coin Bleu.";
        cout << endl << "\t" << "\t" << "\t" << "Contre";
        cout << endl << "\t" << "\t" << "Boxer : " << tabCompe[i].GetCoinRouge() << " dans le coin Rouge.";
        cout << endl << "\t" << "\t" << "\t" << "Vainqueur : " << tabCompe[i].GetVainqueur();
    }
}
#pragma endregion

int main()
{
    double monPoids;

    cout << endl << "Indiquer votre Poids : ";
    cin >> monPoids;
    Boxeur boxer_1("Box_1", monPoids);
    cout << endl << "Creation Boxeur " << &boxer_1 << " de nom " << boxer_1.GetNom() << " et de poids " << boxer_1.GetPoids() << "kg." << endl;

    cout << endl << "Indiquer votre Poids : ";
    cin >> monPoids;
    Boxeur* boxer_2;
    boxer_2 = new Boxeur("Box_2", monPoids);
    cout << endl << "Creation Boxeur " << boxer_2 << " de nom " << boxer_2->GetNom() << " et de poids " << boxer_2->GetPoids() << "kg." << endl;
    
    cout << endl << "Indiquer votre Poids : ";
    monPoids = 80;
    Boxeur boxer_3("Box_3", monPoids);
    cout << endl << "Creation Boxeur " << &boxer_3 << " de nom " << boxer_3.GetNom() << " et de poids " << boxer_3.GetPoids() << "kg." << endl;

    cout << endl << "Indiquer votre Poids : ";
    monPoids = 70;
    Boxeur* boxer_4;
    boxer_4 = new Boxeur("Box_4", monPoids);
    cout << endl << "Creation Boxeur " << boxer_4 << " de nom " << boxer_4->GetNom() << " et de poids " << boxer_4->GetPoids() << "kg." << endl;

    Combat combat_1("Comb_1_1/2");
    cout << endl << "Creation Combat " << &combat_1 << " niveau " << combat_1.GetNiveau() << endl;

    Combat combat_2("Comb_2_1/2");
    cout << endl << "Creation Combat " << &combat_2 << " niveau " << combat_2.GetNiveau() << endl;

    Combat combat_3("Comb_1_Final");
    cout << endl << "Creation Combat " << &combat_3 << " niveau " << combat_3.GetNiveau() << endl;

    Combat tabCompet[3] = {combat_1, combat_2, combat_3};

    cout << endl << "Affectation des Coins du premier combat au Boxers." << endl;
    tabCompet[0].SetCoinBleu(&boxer_1);
    tabCompet[0].SetCoinRouge(&boxer_3);

    tabCompet[0].DesignerVainqueur("bleu");

    cout << endl << endl << "Affectation des Coins du deuxieme combat au Boxers." << endl;
    tabCompet[1].SetCoinBleu(boxer_2);
    tabCompet[1].SetCoinRouge(boxer_4);

    tabCompet[1].DesignerVainqueur("rouge");

    cout << endl << endl << "Affectation des Coins de la final au Boxers." << endl;
    tabCompet[2].SetCoinBleu(&boxer_1);
    tabCompet[2].SetCoinRouge(boxer_4);

    tabCompet[2].DesignerVainqueur("bleu");

    AfficheResultats(tabCompet);

    cout << endl << "Les delete : " << endl;
    delete boxer_2;
    delete boxer_4;

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
