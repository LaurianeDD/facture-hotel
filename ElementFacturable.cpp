//
// Created by lauriane on 2020-05-03.
//

#include "ElementFacturable.h"

ElementFacturable::ElementFacturable(const std::string &description, double prix) {
    this->description = description;
    this->prix = prix;
}

double ElementFacturable::calculerMontant() {}

const std::string &ElementFacturable::getDescription() const {
    return description;
}

double ElementFacturable::getPrix() const {
    return prix;
}

double ElementFacturable::getTaxeBase() const {
    return taxeBase;
}

double ElementFacturable::getTaxeAjout() const {
    return taxeAjout;
}