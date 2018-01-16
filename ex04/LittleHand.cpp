/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** LittleHand class implementation
*/

#include <cstring>
#include <typeinfo>
#include "LittleHand.hpp"

void LittleHand::sortFruitBox(FruitBox &unsorted,
	FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
	int count = unsorted.nbFruits();
	for (int i = 0; i < count; i++) {
		bool res = false;
		const Fruit *f = unsorted.pickFruit();
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

FruitBox * const *LittleHand::organizeCoconut(Coconut const * const *coconuts)
{
	size_t boxes = 0;
	FruitBox **res = nullptr;
	FruitBox **tmp;
	while (*coconuts) {
		tmp = new FruitBox*[boxes + 1];
		memcpy(tmp, res, boxes * sizeof(*tmp));
		delete[] res;
		res = tmp;
		res[boxes] = new FruitBox(6);
		for (int i = 0; i < 6 && *coconuts; i++)
			res[boxes]->putFruit(*coconuts++);
		boxes++;
	}
	tmp = new FruitBox*[boxes + 1];
	memcpy(tmp, res, boxes * sizeof(*tmp));
	delete[] res;
	tmp[boxes] = nullptr;
	return (tmp);
}

void LittleHand::plugMixer(MixerBase &mixer)
{
	((Mixer&)mixer).plug();
}

void LittleHand::injectVitamin(Fruit &f, int quantity)
{
	f.setVitamins(quantity);
}
