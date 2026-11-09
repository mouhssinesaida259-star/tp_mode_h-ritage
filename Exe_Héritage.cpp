// Exe_Héritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;
#include"Tableau.h"
#include"TableauBorne.h"

int main()
{
    Tableau T(3);

    T[0] = 10.5;
    T[1] = 15.5;
    T[2] = 20.5;

    cout << "---- Tableau ----" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << T[i] << endl;
    }

    TableauBorne B(0, 20, 30);

    cout << "\n---- TableauBorne ----" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << B[i] << endl;
    }

    return 0;
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
