/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** LittleHand class implementation
*/

#include "LittleHand.hpp"
#include "Banana.hpp"
#include "Lemon.hpp"
#include "Lime.hpp"

void LittleHand::sortFruitBox(FruitBox &unsorted,
	FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
	int count = unsorted.nbFruits();
	for (int i = 0; i < count; i++) {
		bool res = false;
		Fruit *f = unsorted.pickFruit();
		if (dynamic_cast<Lime*>(f) != nullptr)
			res = limes.putFruit(f);
		else if (dynamic_cast<Lemon*>(f) != nullptr)
			res = lemons.putFruit(f);
		else if (dynamic_cast<Banana*>(f) != nullptr)
			res = bananas.putFruit(f);
		if (!res)
			unsorted.putFruit(f);
	}
}
