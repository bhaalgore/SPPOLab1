#ifndef N3COMPANY_H
#define N3COMPANY_H

#include "basecompany.h"

class N3Company: public BaseCompany
{
public:
    N3Company() = default;
    N3Company(QString companyName, QList<QString> &owner, double income, double acreage, int nEmployees);

    CompanyType getCompanyType();

    double getTaxes();
};
#endif // N3COMPANY_H
