#ifndef SINGLETON_H
#define SINGLETON_H

#include <QList>
#include "basecompany.h"

class Singleton
{
public:
    static Singleton& GetInstance();
    ~Singleton();

    void addCompany(BaseCompany* company);
    void removeCompany(BaseCompany* company);
    double getSize();
    BaseCompany* getCompany(int ix);

private:
    Singleton()=default;
    Singleton(const Singleton&) = delete;

    Singleton& operator = (const Singleton&) = delete;


    QList<BaseCompany*> company_;
};

#endif // SINGLETON_H
