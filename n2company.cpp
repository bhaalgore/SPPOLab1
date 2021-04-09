#include "n2company.h"

N2Company::N2Company(QString companyName, QList<QString> &owner, double income, double acreage, int nEmployees):BaseCompany(companyName, owner, income, acreage, nEmployees)
{

}

N2Company::CompanyType N2Company::getCompanyType()
{
    return CompanyType::Type1;
}

double N2Company::getTaxes()
{
    return((2 * income_ + acreage_)/(nEmployees_ + 1/2 * acreage_));
}
