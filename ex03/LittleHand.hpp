/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** LittleHand class definition
*/

#if !defined (LITTLE_HAND_HPP_)
	#define LITTLE_HAND_HPP_

	#include "Coconut.hpp"
	#include "FruitBox.hpp"
	#include "Mixer.hpp"

class LittleHand {
public:
	static void sortFruitBox(FruitBox &unsorted,
		FruitBox &lemons,
		FruitBox &bananas,
		FruitBox &limes);
	static FruitBox * const *organizeCoconut(
		Coconut const * const *coconuts);
	static void plugMixer(MixerBase &mixer);
};

#endif /* !defined (LITTLE_HAND_HPP_) */
