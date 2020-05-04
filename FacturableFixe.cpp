#include <iostream>
#include "FacturableFixe.h"

FacturableFixe::FacturableFixe( std::string description, double prix) : ElementFacturable(
        description, prix) {
    this->selectionne = false;
}

bool FacturableFixe::isSelectionne() {
    return selectionne;
}

double FacturableFixe::calculerSousTotal() {
    if (selectionne) return this->prix;

    return 0.00;
}

double FacturableFixe::calculerMontantTaxeBase() {
    return calculerSousTotal() * (TAXE_BASE / 100);
}

double FacturableFixe::calculerMontantTaxeAjoutee() {
    return calculerSousTotal() * (TAXE_AJOUTEE / 100);
}

double FacturableFixe::calculerTotal() {
    return calculerSousTotal() + calculerMontantTaxeBase() + calculerMontantTaxeAjoutee();
}