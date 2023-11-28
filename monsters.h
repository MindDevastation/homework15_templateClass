#ifndef MONSTERS_H
#define MONSTERS_H

#include <QString>

template<class T, class C, class K>
class monsters
{
    T _Name;
    C _HP;
    decltype(_HP) _MP;
    decltype(_HP) _Damage;
    K _Armour;
    decltype(_Armour) _Speed;
public:
    monsters() {
        _Name = "NaN";
        _HP = 0;
        _MP = 0 ;
        _Damage = 0;
        _Armour = 0;
        _Speed = 0;
    }

    monsters(T Name, C HP, decltype(HP) MP, decltype(HP) Damage, K Armour, decltype(Armour) Speed){
        _Name = Name;
        _HP = HP;
        _MP = MP ;
        _Damage = Damage;
        _Armour = Armour;
        _Speed = Speed;
    }

    auto getName() {return _Name;}
    auto getHP() {return _HP;}
    auto getMP() {return _MP;}
    auto getDamage() {return _Damage;}
    auto getArmour() {return _Armour;}
    decltype (auto) getSpeed() {return _Speed;}
};

#endif // MONSTERS_H
