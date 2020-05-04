#ifndef __ALREADYADDED_H_
#define __ALREADYADDED_H_

#include <string>

class AlreadyAdded {
private:
    std::string message;
public:
    AlreadyAdded(const std::string &produit) {
        this->message = "Acces au " + produit + " deja selectionne.";
    }

    std::string getMessage() const{
        return this->message;
    }
};

#endif //__ALREADYADDED_H_
