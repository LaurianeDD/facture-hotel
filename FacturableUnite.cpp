//
// Created by lauriane on 2020-05-03.
//

#include "FacturableUnite.h"

FacturableUnite::FacturableUnite( std::string description, double prix) : ElementFacturable(
        description, prix) {
    this->quantite = 0;
}

void FacturableUnite::setQuantite(int quantite) {
    this->quantite = quantite;
}

double FacturableUnite::calculerSousTotal()

}

double FacturableUnite::calculerMontantTaxeBase() {

}

double FacturableUnite::calculerMontantTaxeAjoutee() {

}

double FacturableUnite::calculerTotal() {

}