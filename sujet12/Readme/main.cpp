/*Système de Suivi de Santé Personnelle
 Ajouter des enregistrements quotidiens de poids, pression sanguine, et pouls pour chaque
 patient.
 Rechercher des enregistrements par date
 Générer un rapport de santé des informations du patient.
 Gérer les rendez des patients
 Enregistrer les données dans un fichier pour suivi continu.
 Importer des données précédentes à partir d'un fichier.*/



 // DevOps  ::   DABIRE Nawminigué Ella
 // DeBugs  ::   DAH Poutieromala Victor


#include "fonction.h"

int main() {
    Menu menu;
    int choix;

    do {
        system("cls");
        menu.afficherMenu();
        cin >> choix;

        menu.executerOption(choix);

        if (choix != 6) {
            cout << "\n   Appuyez sur Entrée pour revenir au menu...";
            cin.ignore();
            cin.get();
        }
    } while (choix != 6);

    return 0;
}


