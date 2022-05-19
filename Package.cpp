#include "Package.h"
#include<cstring>
#define SIZE4 2


Package::Package()
{
    
}

Package :: Package(int book1, int book2, Customer* cus, Admin* adm)
{
    custmr = cus;
    admin = adm;

    book[0]= new Booking(book1);
    book[1]= new Booking(book2);
}
            
void Package :: storePackagedetails(int pID, const char pDes[], const char pFaci[], const char pAcc[], double price, Customer* cus, Admin* adm)
{
    
}

void Package :: addPackages()
{
    
}

void Package :: updatePackages()
{
    
}

void Package :: deletePackages()
{
    
}

Package :: ~Package()
{
    for(int i=0 ; i<SIZE4 ; i++)
      {
        delete book[i];
      }
}
