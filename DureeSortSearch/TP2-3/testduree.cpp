#include <iostream>
#include <iomanip>
#include "duree.h"
#include <vector>
using namespace std;
using namespace nsUtil;



typedef vector <Duree> CVDuree;
CVDuree::const_iterator Iter;
const unsigned long long KDureeMax(1000000);
void testDureeDeBase ()
{

    CVDuree VDuree_Ale;
    unsigned long long Nb_Duree_aleatoire;
    cout << "saisissez au clavier le nombre de durées aléatoires à générer "<< endl;
    cin >> Nb_Duree_aleatoire;
    cout << endl;
    for (unsigned long long  i(0); i < Nb_Duree_aleatoire; i++)
    {
        unsigned long long v1 = rand() % KDureeMax;
        VDuree_Ale.push_back(v1);
    }
    sort(VDuree_Ale.begin(),VDuree_Ale.end());

    for(const Duree d : VDuree_Ale)
    {
        d.display_Alea();
        cout << endl;
    }

    CVDuree VDuree;

while (true)
{
    unsigned duree;
    cout << "Entrez votre durée :" << endl;
    cin >> duree;
    if (duree == 0)break;
    VDuree.push_back(duree);

}
    for(const Duree d1 : VDuree)
    {
        d1.display();
        cout << endl;
    }
}

int main()
{
    testDureeDeBase();
    return 0;
}
