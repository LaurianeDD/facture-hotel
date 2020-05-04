
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
    virtual ~ElementFacturable() {};

    const std::string getDescription() const;

    double getPrix() const;

    virtual double calculerSousTotal() = 0;

    virtual double calculerMontantTaxeBase() = 0;

    virtual double calculerMontantTaxeAjoutee() = 0;

    virtual double calculerTotal() = 0;

    virtual std::string toString() = 0;
};


#endif //__ELEMENTFACTURABLE_H__
