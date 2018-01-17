/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** Fruit class definition
*/

#if !defined (FRUIT_HPP_)
	#define FRUIT_HPP_

	#include <string>

class Fruit {
public:
	virtual ~Fruit() {}

	virtual std::string getName() const;
	int getVitamins() const;

protected:
	Fruit(std::string name, int vitamins);

	const std::string _name;
	int _vitamins;
};

#endif /* !defined (FRUIT_HPP_) */
