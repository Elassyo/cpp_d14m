/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** FruitBox class implementation
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(unsigned int capacity) :
	_count(0), _capacity(capacity), _head(nullptr)
{
}

FruitBox::~FruitBox()
{
	FruitNode *node = this->_head;
	while (node) {
		FruitNode *next = node->next;
		delete node;
		node = next;
	}
}

int FruitBox::nbFruits() const
{
	return (this->_count);
}

bool FruitBox::putFruit(const Fruit *f)
{
	if (this->_count == this->_capacity)
		return (false);
	FruitNode **node_ptr = &this->_head;
	while (*node_ptr) {
		if (*node_ptr && (*node_ptr)->fruit == f)
			return (false);
		node_ptr = &(*node_ptr)->next;
	}
	FruitNode *node = new FruitNode;
	node->fruit = f;
	node->next = nullptr;
	*node_ptr = node;
	this->_count++;
	return (true);
}

const Fruit *FruitBox::pickFruit()
{
	FruitNode *node = this->_head;
	if (!node)
		return (nullptr);
	this->_head = node->next;
	const Fruit *res = node->fruit;
	delete node;
	this->_count--;
	return res;
}

FruitNode *FruitBox::head() const
{
	return (this->_head);
}
