#include "FacturableFixe.h"
#include "FacturableUnite.h"

FacturableFixe::FacturableFixe( std::string description, double prix) : ElementFacturable(
        description, prix) {
    this->selectionne = false;
}

void FacturableFixe::selectionnerService() {
    //TODO Add check
    this->selectionne = true;
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

double FacturableUnite::calculerTotal() {
    return calculerSousTotal() + calculerMontantTaxeBase() + calculerMontantTaxeAjoutee();
}