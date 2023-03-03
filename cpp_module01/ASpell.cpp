#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects)
{
    this->effects = effects;
    this->name = name;
}

ASpell::ASpell()
{
    this->effects = "effects";
    this->name = "name";
}

ASpell::~ASpell(){}

const  std::string &ASpell::getEffects() const
{
   return (this->effects);
}

const  std::string &ASpell::getName() const
{
   return (this->name);
}

ASpell::ASpell(const ASpell &obj)
{
    *this = obj;
}

ASpell &ASpell::operator=(const ASpell &obj)
{
    this->effects = obj.effects;
    this->name = obj.name;
    return(*this);
}

ASpell *ASpell::clone() const
{
    return new ASpell(*this);
}
