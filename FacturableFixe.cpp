#include <iostream>
#include "FacturableFixe.h"

FacturableFixe::FacturableFixe( std::string description, double prix) : ElementFacturable(
        description, prix) {
}

double FacturableFixe::calculerSousTotal() {
    return prix;
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