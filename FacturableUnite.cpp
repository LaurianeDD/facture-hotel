#include <iostream>
#include "FacturableUnite.h"
#include "OverWriteQuantity.h"
#include "InvalidValue.h"

FacturableUnite::FacturableUnite( std::string description, double prix) : ElementFacturable(
        description, prix) {
    this->quantite = 0;
}

void FacturableUnite::setQuantite(int quantite) {
    try {
        if (this->quantite != 0)
            throw OverWriteQuantity(this->description, this->quantite, quantite);

        if (quantite <= 0)
            throw InvalidValue(this->description, quantite);

        this->quantite = quantite;

    } catch (const OverWriteQuantity& ex) {
        this->quantite = quantite;
        std::cout << ex.getMessage() << std::endl;

    } catch (const InvalidValue& ex) {
        std::cout << ex.getMessage() << std::endl;
    }
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