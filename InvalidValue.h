#ifndef __INVALIDVALUE_H_
#define __INVALIDVALUE_H_

#include <string>

class InvalidValue {
private:
    std::string message;
public:
    InvalidValue(const std::string &produit, int quantite) {
        this->message = "Nombre de " + produit + " invalide: " + std::to_string(quantite);
    }

    std::string getMessage() const{
        return this->message;
    }
};
#endif //__INVALIDVALUE_H_
