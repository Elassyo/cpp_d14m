/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** FruitNode structure definition
*/

#if !defined (FRUIT_NODE_HPP_)
	#define FRUIT_NODE_HPP_

	#include "Fruit.hpp"

	#define Fruitnode FruitNode

typedef struct FruitNode {
	const Fruit *fruit;
	struct FruitNode *next;
} FruitNode;

#endif /* !defined (FRUIT_NODE_HPP_) */
