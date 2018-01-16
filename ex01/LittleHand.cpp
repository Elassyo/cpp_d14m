/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** LittleHand class implementation
*/

#include "LittleHand.hpp"

void LittleHand::sortFruitBox(FruitBox &unsorted,
	FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
	int count = unsorted.nbFruits();
	for (int i = 0; i < count; i++) {
		bool res = false;
		Fruit *f = unsorted.pickFruit();
		if (f->getName() == "lemon")
			res = lemons.putFruit(f);
		else if (f->getName() == "banana")
			res = bananas.putFruit(f);
		else if (f->getName() == "lime")
			res = limes.putFruit(f);
		if (!res)
			unsorted.putFruit(f);
	}
}
