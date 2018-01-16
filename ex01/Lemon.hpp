/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** Lemon class definition
*/

#if !defined (LEMON_HPP_)
	#define LEMON_HPP_

	#include "Fruit.hpp"

class Lemon : public Fruit
{
public:
	Lemon();

protected:
	Lemon(std::string name, int vitamins);
};

#endif /* !defined (LEMON_HPP_) */
