#include <iostream>
#include <map>
#include "ElementFacturable.h"
#include "FacturableUnite.h"
#include "FacturableFixe.h"

void afficherMenu();
void ajouterNuitee(std::map<int, ElementFacturable*>& facture, int ordre);
void ajouterRepas(std::map<int, ElementFacturable*>& facture, int ordre);
void ajouterAccesSpa(std::map<int, ElementFacturable*>& facture, int ordre);
void ajouterAccesGym(std::map<int, ElementFacturable*>& facture, int ordre);

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::map<int, ElementFacturable*> facture;

    bool fin = false;
    int option = 0;

    do {
        afficherMenu();
        std::cin >> option;

        switch (option) {
            case 1:
                //Nuitee
                ajouterNuitee(facture, 1);
                break;
            case 2:
                //Repas
                ajouterRepas(facture, 2);
                break;
            case 3:
                //Spa
                ajouterAccesSpa(facture, 3);
                break;
            case 4:
                //Gym
                ajouterAccesGym(facture, 4);
                break;
            case 5:
                //Afficher
                break;
            case 0:
                //Quitter
                fin = true;
                break;
            default:
                std::cout << "Option invalide" << std::endl;
        }
    } while (!fin);



    return 0;
}

void afficherMenu() {
    std::cout << "MENU PRINCIPAL" << std::endl;
    std::cout << " 1. Ajouter des nuitées" << std::endl;
    std::cout << " 2. Ajouter des repas" << std::endl;
    std::cout << " 3. Ajouter un accès au spa" << std::endl;
    std::cout << " 4. Ajouter un accès au gym" << std::endl;
    std::cout << " 5. Afficher la facture et quitter" << std::endl;
    std::cout << " 0. Quitter" << std::endl;
    std::cout << "Saisir l'option desiree (0-5): " << std::endl;
}

void ajouterNuitee(std::map<int, ElementFacturable*>& facture, int ordre) {
    int quantite;
    std::cout << "AJOUT DES NUITEES" << std::endl;
    std::cout << "Entrer le nombre de nuit: " << std::endl;
    std::cin >> quantite;

    std::map<int, ElementFacturable*>::iterator nuiteeTrouvee = facture.find(ordre);

    FacturableUnite* nuitee = new FacturableUnite("Nuitee", 100.00, quantite);
    std::pair<int, FacturableUnite*> pairNuitee(ordre, nuitee);

    try {
        if (nuiteeTrouvee != facture.end()) throw 1;
        if (quantite <= 0) throw 2;

        facture.insert(pairNuitee);
        std::cout << std::to_string(quantite) + " nuitee(s) ajoutee(s)." << std::endl;

    } catch (const int &code) {

        if (code == 1) {
            delete facture.find( ordre)->second;
            facture[ordre] = nuitee;
            std::cout << "Nombre de nuitee modifie. Nouvelle quantite: " + std::to_string(quantite) << std::endl;
        } else if (code == 2) {
            std::cout << "Nombre de nuitee invalide. Nuitee necessite une quantite entiere positive.";
        }
    }
}

void ajouterRepas(std::map<int, ElementFacturable*>& facture, int ordre) {
    int quantite;
    std::cout << "AJOUT DES REPAS" << std::endl;
    std::cout << "Entrer le nombre de repas: " << std::endl;
    std::cin >> quantite;

    std::map<int, ElementFacturable*>::iterator repasTrouvee = facture.find(ordre);

    FacturableUnite* repas = new FacturableUnite("Repas", 20.00, quantite);
    std::pair<int, FacturableUnite*> pairRepas(ordre, repas);

    try {
        if (repasTrouvee != facture.end()) throw 1;
        if (quantite <= 0) throw 2;

        facture.insert(pairRepas);
        std::cout << std::to_string(quantite) + " repas ajoute(s)." << std::endl;

    } catch (const int &code) {

        if (code == 1) {
            delete facture.find(ordre)->second;
            facture[ordre] = repas;
            std::cout << "Nombre de repas modifie. Nouvelle quantite: " + std::to_string(quantite) << std::endl;
        } else if (code == 2) {
            std::cout << "Nombre de repas invalide. Repas necessite une quantite entiere positive.";
        }
    }
}

void ajouterAccesSpa(std::map<int, ElementFacturable*>& facture, int ordre) {
    std::map<int, ElementFacturable*>::iterator accesSpaTrouve = facture.find(ordre);

    FacturableFixe* accesSpa = new FacturableFixe("Spa", 75.00);
    std::pair<int, FacturableFixe*> pairSpa(ordre, accesSpa);

    try {
        if (accesSpaTrouve != facture.end()) throw 1;

        facture.insert(pairSpa);
        std::cout << "Acces au Spa ajoute." << std::endl;

    } catch (const int &code) {

        if (code == 1) {
            std::cout << "L'acces au Spa a deja ete ajoute sur cette facture." << std::endl;
        }
    }

}

void ajouterAccesGym(std::map<int, ElementFacturable*>& facture, int ordre) {
    std::map<int, ElementFacturable*>::iterator accesGymTrouve = facture.find(ordre);

    FacturableFixe* accesGym = new FacturableFixe("Gym", 50.00);
    std::pair<int, FacturableFixe*> pairGym(ordre, accesGym);

    try {
        if (accesGymTrouve != facture.end()) throw 1;

        facture.insert(pairGym);
        std::cout << "Acces au Gym ajoute." << std::endl;

    } catch (const int &code) {

        if (code == 1) {
            std::cout << "L'acces au Gym a deja ete ajoute sur cette facture." << std::endl;
        }
    }

}