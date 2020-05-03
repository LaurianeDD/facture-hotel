#include "FacturableFixe.h"

FacturableFixe::FacturableFixe( std::string description, double prix) : ElementFacturable(
        description, prix) {
    this->selectionne = false;
}

void FacturableFixe::selectionnerService() {
    this->selectionne = true;
}

bool FacturableFixe::isSelectionne() {

}

double FacturableFixe::calculerSousTotal()

}

double FacturableUnite::calculerMontantTaxeBase() {

}

double FacturableUnite::calculerMontantTaxeAjoutee() {

}

double FacturableUnite::calculerTotal() {

}