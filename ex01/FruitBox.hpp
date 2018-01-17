/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** FruitBox class definition
*/

#if !defined (FRUIT_BOX_HPP_)
	#define FRUIT_BOX_HPP_

	#include "FruitNode.hpp"

class FruitBox {
public:
	FruitBox(unsigned int capacity);
	FruitBox(const FruitBox &other) = delete;
	~FruitBox();

	FruitBox &operator=(const FruitBox &other) = delete;

	int nbFruits() const;
	bool putFruit(const Fruit *f);
	Fruit *pickFruit();
	FruitNode *head() const;

private:
	unsigned int _count;
	const unsigned int _capacity;
	FruitNode *_head;
};

#endif /* !defined (FRUIT_BOX_HPP_) */
