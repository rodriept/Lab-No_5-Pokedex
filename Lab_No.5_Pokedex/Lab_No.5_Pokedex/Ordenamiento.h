#pragma once
#include "PokemonGuardado.h"
using namespace System;

ref class Ordenamiento
{
public:
	static void SelectionSortNationalNumber(array<PokemonGuardado^>^ Pokemons, int size)
	{
		for (int i = 0; i < size - 1 ; i++)
		{
			for (int j = i + 1 ; j < size; j++)
			{
				if (CompararNationalNumber(Pokemons[i], Pokemons[j]) > 0)
				{
					PokemonGuardado^ Temporal = Pokemons[i];
					Pokemons[i] = Pokemons[j];
					Pokemons[j] = Temporal;

				}
			}
		}
	}

	static int CompararNationalNumber(PokemonGuardado^ Pokemon1, PokemonGuardado^ Pokemon2)
	{
		if (Pokemon1->NationalNumber > Pokemon2->NationalNumber)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}

};

