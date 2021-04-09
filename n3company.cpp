#include "n3company.h"


N3Company::N3Company(QString companyName, QList<QString> &owner, double income, double acreage, int nEmployees):BaseCompany(companyName, owner, income, acreage, nEmployees)
{

}

N3Company::CompanyType N3Company::getCompanyType()
{
    return CompanyType::Type1;
}

double N3Company::getTaxes()
{
    return((2 * income_ + acreage_)/(nEmployees_ + 1/2 * acreage_));
}
