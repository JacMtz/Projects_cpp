#pragma once

class Pet
{
public:
    Pet(int hunger = 15, int boredom = 15, int health = 15);
    void Talk();
    void Eat(int hunger = 4);
    void Play(int boredom = 4);
    void Heal(int heal = 2);
    int GetFood(int hunger = 15) const;
    int GetFun(int boredom = 15) const;
    int GetHealth(int health = 15) const;
    bool Death(bool muerte = false);

private:
    int m_Food;
    int m_Fun;
    int m_Health;
    void PassTime(int time = 1);
    void DamagePassTime(int damage = 2);

};