#include "duree.h"
#include <iostream>
#include <iomanip>

using namespace nsUtil;
using namespace std;

Duree::Duree(unsigned duree)
{
    myDuree = duree;
    normaliser();
}

void Duree::normaliser()
{
    myDays = myDuree/(24*60*60);

    myHours = myDuree/(60*60)%24;

    myMinutes = myDuree/60 %60;

    mySeconds = myDuree %60;
}

unsigned long nsUtil::Duree::getDuree() const
{
    return myDuree;
}

void nsUtil::Duree::incr(unsigned delta)
{
    myDuree = myDuree +delta;
    normaliser();
}

void Duree::decr(unsigned delta)
{
    if (delta > myDuree)
        myDuree = 0;
    else
        myDuree = myDuree - delta;
    normaliser();
}


void nsUtil::Duree::display()const
{
    cout << setw(2) << myDays << "jour(s)"
         << setw(2) << myHours << "heure(s)"
         << setw(2) << myMinutes << "minute(s)"
         << setw(2) << mySeconds << "seconde(s)" << endl;
}

void nsUtil::Duree::display_Alea()const
{
    cout <<'['<< myDays << ":"
         << myHours << ":"
         << myMinutes << ":"
         << mySeconds << ']'<< " = "
         << myDuree << endl;

}
Duree Duree::operator + (const Duree & d1) const
{
    return Duree ( myDuree + d1.myDuree);
}// operator +


Duree Duree::operator - (const Duree & d1) const
{
    if ((myDuree - d1.myDuree) < 0) return Duree (0);
    return Duree ( myDuree - d1.myDuree);
}// operator -


bool Duree::operator > (const Duree & d)
{
    if(myDuree > d.myDuree) return true;
    return false;
}// operator >

bool Duree::operator < (const Duree & d)
{
    if(myDuree < d.myDuree) return true;
    return false;
}// operator <
