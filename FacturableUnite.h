#ifndef __FACTURABLEUNITE_H__
#define __FACTURABLEUNITE_H__


#include "ElementFacturable.h"

class FacturableUnite : ElementFacturable {
private:
    int quantite;

    const static int tAXE_AJOUTEE = 5;

public:
    FacturableUnite(std::string description, double prix);

    void setQuantite(int quantite);

    double calculerSousTotal();

    double calculerMontantTaxeBase();

    double calculerMontantTaxeAjoutee();

    double calculerTotal();
};


#endif //__FACTURABLEUNITE_H__
