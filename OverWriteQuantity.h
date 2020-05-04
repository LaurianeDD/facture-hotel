#ifndef __OVERWRITEQUANTITY_H_
#define __OVERWRITEQUANTITY_H_

#include <string>

class OverWriteQuantity {
private:
    std::string message;
public:
    OverWriteQuantity(const std::string &produit, int ancienneQuantite, int nouvelleQuantite) {
        this->message = "Nombre de " + produit + " modifie.\n" +
                "Quantite mise a jour a: " + std::to_string(nouvelleQuantite) + ".\n" +
                "Ancienne quantite: " + std::to_string(ancienneQuantite);
    }
    std::string getMessage() const {
        return this->message;
    }
};

#endif //__OVERWRITEQUANTITY_H_
