#pragma once

#include <iostream>
#include <string>
class Entity
{
public:
	Entity();
	~Entity();
	virtual void Attack(Entity& other) = 0;
	virtual void Defend(int damage) = 0;
	void DisplayInfo();
	int mDamage;
	int mHealth;
	int mSpeed;
	int mArmor;
	std::string mName;
};
void Entity::DisplayInfo()
{
	std::cout << mName << "::" << "current health is " << mHealth << std::endl;
	std::cout << mName << "::" << "current armor is " << mArmor << std::endl;
	std::cout << mName << "::" << "current speed is " << mSpeed << std::endl;
	std::cout << std::endl;
}
void Entity::Attack(Entity& other)
{
	std::cout << mName << " is attacking " << other.mName << " with damage " << mDamage << std::endl;
	DisplayInfo();
	other.Defend(mDamage);
}

void Entity::Defend(int damage)
{
	std::cout << "Defending \n";
	int damageTotal = damage - mArmor;
	mHealth = mHealth - damageTotal;

}
Entity::Entity() {}

Entity::~Entity() {}