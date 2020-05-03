//
// Created by lauriane on 2020-05-03.
//

#include "ElementFacturable.h"

ElementFacturable::ElementFacturable(std::string description, double prix) {
    this->description = description;
    this->prix = prix;
}

const std::string ElementFacturable::getDescription() const {
    return description;
}

double ElementFacturable::getPrix() const {
    return prix;
}