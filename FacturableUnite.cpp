#include "FacturableUnite.h"

FacturableUnite::FacturableUnite( std::string description, double prix) : ElementFacturable(
        description, prix) {
    this->quantite = 0;
}

void FacturableUnite::setQuantite(int quantite) {
    //TODO Add check
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