/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** FruitNode structure definition
*/

#if !defined (FRUIT_NODE_HPP_)
	#define FRUIT_NODE_HPP_

	#include "Fruit.hpp"

typedef struct FruitNode {
	Fruit *fruit;
	struct FruitNode *next;
} FruitNode;

#endif /* !defined (FRUIT_NODE_HPP_) */
