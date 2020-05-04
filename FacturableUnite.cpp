#include <iostream>
#include "FacturableUnite.h"

FacturableUnite::FacturableUnite( std::string description, double prix, int quantite) : ElementFacturable(
        description, prix) {
    this->quantite = quantite;
}

int FacturableUnite::getQuantite() {
    return this->quantite;
}

double FacturableUnite::calculerSousTotal() {
    return this->quantite * this->prix;
}

double FacturableUnite::calculerMontantTaxeBase() {
    return calculerSousTotal() * (TAXE_BASE / 100.00);
}

double FacturableUnite::calculerMontantTaxeAjoutee() {
    return calculerSousTotal() * (TAXE_AJOUTEE / 100.00);
}

double FacturableUnite::calculerTotal() {
    return calculerSousTotal() + calculerMontantTaxeBase() + calculerMontantTaxeAjoutee();
}

std::string FacturableUnite::toString() {
    return this->description + "\t Quantite: " + std::to_string(this->quantite);
}