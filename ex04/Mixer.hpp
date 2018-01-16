/*
** EPITECH PROJECT, 2018
** CPP Pool Day 14
** File description:
** Mixer class definition
*/

#if !defined (MIXER_HPP_)
	#define MIXER_HPP_

	#include "MixerBase.hpp"

class Mixer : public MixerBase {
public:
	Mixer();

	void plug();
};

#endif /* !defined (MIXER_HPP_) */
