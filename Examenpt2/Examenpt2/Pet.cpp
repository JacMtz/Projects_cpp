#include <iostream>
#include "Pet.h"
using namespace std;

Pet::Pet(int hunger, int boredom, int health) :
    m_Food(hunger),
    m_Fun(boredom),
    m_Health(health)
{}

inline int Pet::GetFood(int hunger) const
{
    return m_Food;
}

inline int Pet::GetFun(int boredom) const
{
    return m_Fun;
}

inline int Pet::GetHealth(int health) const
{
    return m_Health;
}

void Pet::PassTime(int time)
{
    m_Fun -= time;
    m_Food -= time;

    if (m_Food < 0)
    {
        m_Food = 0;
    }
    if (m_Fun < 0)
    {
        m_Fun = 0;
    }

}

void Pet::Talk()
{

    cout << "\n\n Humano estoy: ";
    int food = GetFood();
    int fun = GetFun();
    int health = GetHealth();

    if (food <= 0 && fun <= 0)
    {
        cout << "muriendo. \n";
        DamagePassTime();
    }
    else if (food <= 5 || fun <= 5)
    {
        cout << "mal. \n";

        if (food <= 5)
        {
            cout << "Tengo MUCHA hambre \n";
        }
        if (fun <= 5)
        {
            cout << "Estoy MUY aburrido \n";
        }
    }
    else if ((food <= 10 && food > 5) || (fun <= 10 && fun > 5))
    {
        cout << "ok. \n";

        if (food <= 10 && food > 5)
        {
            cout << "Tengo hambre \n";
        }
        if (fun <= 10 && fun > 5)
        {
            cout << "Estoy aburrido \n";
        }

    }
    else {
        cout << "feliz. \n";
    }

    PassTime();
}

void Pet::Eat(int hunger)
{
    cout << "\Brrup. \n";
    m_Food += hunger;

    if (m_Food > 15)
    {
        m_Food = 15;
    }

    PassTime();
}

void Pet::Play(int boredom)
{
    cout << "\n Wheeee \n";
    m_Fun += boredom;

    if (m_Fun > 15)
    {
        m_Fun = 15;
    }

    PassTime();
}

inline void Pet::DamagePassTime(int damage)
{
    m_Health -= damage;
}

void Pet::Heal(int heal)
{
    cout << "\n Fiuuu \n";
    m_Health += heal;

    if (m_Health > 15)
    {
        m_Health = 15;
    }

    PassTime();
}

bool Pet::Death(bool muerte)
{
    if (m_Health <= 0)
    {
        muerte = true;
    }
    return muerte;
}