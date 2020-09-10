#pragma once

class Weapon {
   public:
    Weapon(int damage);
    virtual ~Weapon() = default;

    int getDamage() const;

   private:
    const int m_damage;
};
