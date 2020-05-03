
#ifndef __ELEMENTFACTURABLE_H__
#define __ELEMENTFACTURABLE_H__


#include <string>

class ElementFacturable {

protected:
    std::string description;
    double prix;

    static const int TAXE_BASE = 8;

public:
    ElementFacturable(std::string description, double prix);

    const std::string getDescription() const;

    double getPrix() const;

    virtual double calculerSousTotal();

    virtual double calculerMontantTaxeBase();

    virtual double calculerMontantTaxeAjoutee();

    virtual double calculerTotal();
};


#endif //__ELEMENTFACTURABLE_H__
