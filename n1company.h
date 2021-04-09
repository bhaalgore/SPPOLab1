#ifndef N1COMPANY_H
#define N1COMPANY_H

#include "basecompany.h"

class N1Company: public BaseCompany
{
public:
    N1Company() = default;
    N1Company(QString companyName, QList<QString> &owner, double income, double acreage, int nEmployees);

    CompanyType getCompanyType();

    double getTaxes();
};

#endif // N1COMPANY_H
