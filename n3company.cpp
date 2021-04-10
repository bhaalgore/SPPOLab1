#include "n3company.h"


N3Company::N3Company(QString companyName, QList<QString> &owner, double income, double acreage, int nEmployees):BaseCompany(companyName, owner, income, acreage, nEmployees)
{

}

N3Company::CompanyType N3Company::getCompanyType()
{
    return CompanyType::Type3;
}

double N3Company::getTaxes()
{
    return((income_ - acreage_)/(nEmployees_));
}
