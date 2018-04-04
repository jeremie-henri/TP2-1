//#ifndef DUREE_H
#define DUREE_H

namespace nsUtil {
class Duree {
    unsigned long myDuree;
    unsigned long mySeconds, myMinutes;
    unsigned myHours, myDays;
    void normaliser();
public:
    Duree(unsigned duree);
    Duree operator + (const Duree & d1) const;
    Duree operator - (const Duree & d1) const;
    bool operator > (const Duree & d);
    bool operator < (const Duree & d);
    unsigned long getDuree() const;
    void display() const;
    void display_Alea() const;
    void incr(unsigned delta);
    void decr(unsigned delta);
};
}
//#endif // DUREE_H
