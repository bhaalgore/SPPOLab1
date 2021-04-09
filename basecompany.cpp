#include "basecompany.h"

//constructors block
BaseCompany::BaseCompany(QString companyName, QList<QString> &owner, double income, double acreage, int nEmployees)
{
if(companyName.isEmpty())
throw QString("No company name");
else
companyName_ = companyName;

if(owner.isEmpty())
throw QString("No owner name");
else
owner_ = owner;

if(acreage < 0)
throw QString("Not possible acreage");
else
acreage_ = acreage;

if(nEmployees < 0)
throw QString("Not possible number of employees");
else
nEmployees_ = nEmployees;

income_ = income;
}




//setters block
void BaseCompany::setCompanyName(QString companyName)
{
if(companyName.isEmpty())
throw QString("No company name");
else
companyName_ = companyName;
}

void BaseCompany::setOwner(QList<QString> &owner)
{
if(owner.isEmpty())
throw QString("No owner name");
else
owner_ = owner;
}

void BaseCompany::setIncome(double income)
{
income_ = income;
}

void BaseCompany::setAcreage(double acreage)
{
if(acreage < 0)
throw QString("Not possible acreage");
else
acreage_ = acreage;
}

void BaseCompany::setEmployeesNumber(int nEmployees)
{
if(nEmployees < 0)
throw QString("Not possible number of employees");
else
nEmployees_ = nEmployees;
}




//getters block
QString BaseCompany::getCompanyName()
{
return companyName_;
}

QList<QString> BaseCompany::getOwner()
{
return owner_;
}

double BaseCompany::getIncome()
{
return income_;
}

double BaseCompany::getAcreage()
{
return acreage_;
}

int BaseCompany::getEmployeesNumber()
{
return nEmployees_;
}
