#ifndef __FACTURABLEFIXE_H__
#define __FACTURABLEFIXE_H__


#include <string>
#include "ElementFacturable.h"

class FacturableFixe : ElementFacturable {
private:
    bool selectionne;

    const static int TAXE_AJOUTEE = 7;

public:
    FacturableFixe(std::string description, double prix);

    void selectionnerService();

    bool isSelectionne();

    double calculerSousTotal();

    double calculerMontantTaxeBase();

    double calculerMontantTaxeAjoutee();

    double calculerTotal();
};


#endif //__FACTURABLEFIXE_H__
