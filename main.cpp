#include <QCoreApplication>

#include <QList>
#include <QString>
#include <iostream>

#include "singleton.h"
#include "n1company.h"
#include "n2company.h"
#include "n3company.h"

using namespace std;

void printDataByCertainType(BaseCompany::CompanyType cType)
{
    Singleton& CList = Singleton::GetInstance();
    int size = CList.getSize();
    BaseCompany* pointer = nullptr;

    std::cout << "TYPE" << cType << "companies data: \n";
    for(int ix = 0; ix < size; ix++){
        pointer = CList.getCompany(ix);
        if(pointer->getCompanyType() == cType){
            cout << "Name of company: " << pointer->getCompanyName().toStdString() << endl;
            QList<QString> owners = pointer->getOwner();
            cout << "Company owners: ";
            while(!owners.isEmpty()){
                cout << owners.front().toStdString() << " ";
                owners.pop_front();
            }
            cout << endl;
            cout << "Income: " << pointer->getIncome() << endl;
            std::cout << "Acreage: " << pointer->getAcreage() << endl;
            std::cout << "Employees: " << pointer->getEmployeesNumber() << endl;
            std::cout << "Tax: " << pointer->getTaxes() << endl;
            std::cout << "*****************************************************************************\n";
        }
    }

}



int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  try {
      Singleton& companyList = Singleton::GetInstance();
      
      QList<QString> N1CompanyOwns;
      QList<QString> N2CompanyOwns;
      QList<QString> N3CompanyOwns;
      QList<QString> N4CompanyOwns;
      QList<QString> N5CompanyOwns;
      QList<QString> N6CompanyOwns;
      QList<QString> N7CompanyOwns;

      N1CompanyOwns.push_back(QString("N1Comp_owner1"));
      N1CompanyOwns.push_back(QString("N1Comp_owner2"));
      N1CompanyOwns.push_back(QString("N1Comp_owner3"));

      companyList.addCompany(new N1Company(QString("CompanyNameN1"), N1CompanyOwns, 100, 250.55, 10));

      N2CompanyOwns.push_back(QString("N2Comp_owner1"));
      N2CompanyOwns.push_back(QString("N2Comp_owner2"));

      companyList.addCompany(new N1Company(QString("CompanyNameN2"), N2CompanyOwns, 150.75, 150.70, 5));

      N3CompanyOwns.push_back(QString("N3Comp_owner1"));
      N3CompanyOwns.push_back(QString("N3Comp_owner2"));
      N3CompanyOwns.push_back(QString("N3Comp_owner3"));
      N3CompanyOwns.push_back(QString("N3Comp_owner4"));

      companyList.addCompany(new N2Company(QString("CompanyNameN3"), N3CompanyOwns, 120.35, 50.65, 7));

      N4CompanyOwns.push_back(QString("N4Comp_owner1"));
      N4CompanyOwns.push_back(QString("N4Comp_owner2"));
      N4CompanyOwns.push_back(QString("N4Comp_owner3"));

      companyList.addCompany(new N2Company(QString("CompanyNameN3"), N4CompanyOwns, 100.35, 30.65, 5));

      N5CompanyOwns.push_back(QString("N5Comp_owner1"));
      N5CompanyOwns.push_back(QString("N5Comp_owner2"));
      N5CompanyOwns.push_back(QString("N5Comp_owner3"));
      N5CompanyOwns.push_back(QString("N5Comp_owner4"));
      N5CompanyOwns.push_back(QString("N5Comp_owner5"));

      companyList.addCompany(new N3Company(QString("CompanyNameN3"), N5CompanyOwns, 80.55, 780.65, 30));

      N6CompanyOwns.push_back(QString("N6Comp_owner1"));

      companyList.addCompany(new N3Company(QString("CompanyNameN3"), N6CompanyOwns, 75.40, 100.65, 12));

      N7CompanyOwns.push_back(QString("N7Comp_owner1"));
      N7CompanyOwns.push_back(QString("N7Comp_owner2"));
      N7CompanyOwns.push_back(QString("N7Comp_owner3"));
      N7CompanyOwns.push_back(QString("N7Comp_owner4"));

      companyList.addCompany(new N3Company(QString("CompanyNameN3"), N7CompanyOwns, 250.95, 210.60, 20));

      
      printDataByCertainType(BaseCompany::Type1);

      printDataByCertainType(BaseCompany::Type2);

      printDataByCertainType(BaseCompany::Type3);





  }  catch (QString error) {
      cout<<error.toStdString()<<endl;
  }
    
    
    return a.exec();
}
