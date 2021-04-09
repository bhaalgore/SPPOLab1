#ifndef N2COMPANY_H
#define N2COMPANY_H

#include "basecompany.h"

class N2Company: public BaseCompany
{
public:
    N2Company() = default;
    N2Company(QString companyName, QList<QString> &owner, double income, double acreage, int nEmployees);

    CompanyType getCompanyType();

    double getTaxes();
};

#endif // N2COMPANY_H
