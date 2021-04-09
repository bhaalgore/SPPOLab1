#include "singleton.h"


Singleton& Singleton::GetInstance()
{
    static Singleton List;
    return List;
}

Singleton::~Singleton()
{
    qDeleteAll(company_);
    company_.clear();
}


void Singleton::addCompany(BaseCompany *company)
{
    if(!company_.contains(company)){
        company_.push_back(company);
       }
}

void Singleton::removeCompany(BaseCompany *company)
{
    company_.removeOne(company);
}

double Singleton::getSize()
{
 return company_.size();
}

BaseCompany* Singleton::getCompany(int ix)
{
    return company_[ix];
}
