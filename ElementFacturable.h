
#ifndef __ELEMENTFACTURABLE_H__
#define __ELEMENTFACTURABLE_H__


#include <string>

class ElementFacturable {
private:
    std::string description;
    double prix;
    double taxeBase;
    double taxeAjout;
public:
    ElementFacturable(const std::string &description, double prix);

    double calculerMontant();

    const std::string &getDescription() const;

    double getPrix() const;

    double getTaxeBase() const;

    double getTaxeAjout() const;
};


#endif //__ELEMENTFACTURABLE_H__
