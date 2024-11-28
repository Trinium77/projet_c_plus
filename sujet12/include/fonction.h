#ifndef FONCTION_H
#define FONCTION_H

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <iomanip>
#include <algorithm>


using namespace std;

class Menu {
public:
    void afficherMenu();
    void executerOption(int choix);
private:
    void enregistrer();
    void rechercher();
    void genererRapport();
    void prendreRendezVous();
    void importerDonnees();
};

#endif
