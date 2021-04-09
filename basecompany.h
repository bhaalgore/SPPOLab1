#ifndef BASECOMPANY_H
#define BASECOMPANY_H


#include <QList>
#include <QString>

class BaseCompany
{
public:
//enum
enum CompanyType
{
Type1=1,
Type2,
Type3
};

//constructors block
BaseCompany()=default;
BaseCompany(QString companyName, QList<QString> &owner, double income, double acreage, int nEmployees);

//setters block
void setCompanyName(QString companyName);
void setOwner(QList<QString> &owner);
void setIncome(double income);
void setAcreage(double acreage);
void setEmployeesNumber(int nEmployees);

//getters block
QString getCompanyName();
QList<QString> getOwner();
double getIncome();
double getAcreage();
int getEmployeesNumber();
virtual CompanyType getCompanyType()=0;
virtual double getTaxes()=0;
virtual ~BaseCompany()=default;

protected:
QString companyName_;
QList <QString> owner_;
double income_;
double acreage_;
int nEmployees_;

};

#endif // BASECOMPANY_H

