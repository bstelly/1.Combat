#pragma once
#include "Entity.h"

class Soldier : public Entity
{
public:
	Soldier();
	~Soldier();
	virtual void Attack(Entity & other) override;
	virtual void Defend(int Damage);
};

Soldier::Soldier()
{
	mName = "Commander Sheperd";
	mHealth = 2154;
	mArmor = 1196;
	mSpeed = 96;
	mDamage = 98765;
}

Soldier::~Soldier()
{

}

void Soldier::Attack(Entity & other)
{
	Entity::Attack(other);
}

void Soldier::Defend(int damage)
{
	Entity::Defend(damage);
}