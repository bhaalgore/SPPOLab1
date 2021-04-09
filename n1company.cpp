#include "n1company.h"

N1Company::N1Company(QString companyName, QList<QString> &owner, double income, double acreage, int nEmployees):BaseCompany(companyName, owner, income, acreage, nEmployees)
{

}

N1Company::CompanyType N1Company::getCompanyType()
{
    return CompanyType::Type1;
}

double N1Company::getTaxes()
{
    return((2 * income_ - nEmployees_)/(1/2 * acreage_));
}

