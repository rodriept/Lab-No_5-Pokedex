#pragma once
#include "PokemonGuardado.h"
using namespace System;

ref class Ordenamiento
{
public:
	// Metodo burbuja por National Number
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
	// Metodo burbuja por generacion
	static void SelectionSortPorGeneracion(array<PokemonGuardado^>^ Pokemons, int size)
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (CompararPorGeneracion(Pokemons[i], Pokemons[j]) > 0)
				{
					PokemonGuardado^ Temporal = Pokemons[i];
					Pokemons[i] = Pokemons[j];
					Pokemons[j] = Temporal;
				}
			}
		}
	}
	//Método de ordenamiento Quick Sort Por medio del national Number
	void QuicksortPorNationalNumber(array<PokemonGuardado^>^ Pokemons, int inf, int sup)
	{
		int i = inf - 1;
		int j = sup;
		bool bandera = true;
		PokemonGuardado^ temp;

		if (inf >= sup)
			return;

		int elem_div = Pokemons[sup]->NationalNumber;
		

		while (bandera)
		{
			while (Pokemons[++i]->NationalNumber < elem_div);
			while ((Pokemons[--j]->NationalNumber > elem_div) && (j > inf));

			if (i < j)
			{
				temp = Pokemons[i];
				Pokemons[i] = Pokemons[j];
				Pokemons[j] = temp;
			}
			else
			{
				bandera = false;
			}
		}

		temp = Pokemons[i];
		Pokemons[i] = Pokemons[sup];
		Pokemons[sup] = temp;
		QuicksortPorNationalNumber(Pokemons, inf, i - 1);
		QuicksortPorNationalNumber(Pokemons, i + 1, sup);

	}
	//Método de ordenamiento Quick Sort por medio de su generación
	void QuicksortPorGeneracion(array<PokemonGuardado^>^ Pokemons, int inf, int sup)
	{
		int i = inf - 1;
		int j = sup;
		bool bandera = true;
		PokemonGuardado^ temp;

		if (inf >= sup)
			return;

		int elem_div = Pokemons[sup]->GeneracionPokemon;


		while (bandera)
		{
			while (Pokemons[++i]->GeneracionPokemon < elem_div);
			while ((Pokemons[--j]->GeneracionPokemon > elem_div) && (j > inf));

			if (i < j)
			{
				temp = Pokemons[i];
				Pokemons[i] = Pokemons[j];
				Pokemons[j] = temp;
			}
			else
			{
				bandera = false;
			}
		}

		temp = Pokemons[i];
		Pokemons[i] = Pokemons[sup];
		Pokemons[sup] = temp;
		QuicksortPorNationalNumber(Pokemons, inf, i - 1);
		QuicksortPorNationalNumber(Pokemons, i + 1, sup);

	}

	
	//Método para comparar por National Number
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
	//Método para comparar por generación 
	static int CompararPorGeneracion(PokemonGuardado^ Pokemon1, PokemonGuardado^ Pokemon2)
	{
		if (Pokemon1->GeneracionPokemon > Pokemon2->GeneracionPokemon)
		{
			return 1;
		}
		else if (Pokemon1->GeneracionPokemon < Pokemon2->GeneracionPokemon)
		{
			return -1;
		}
		else
		{
			if (Pokemon1->NombrePokemon->CompareTo(Pokemon2->NombrePokemon) > 0)
			{
				return 1; 
			}
			else if(Pokemon1->NombrePokemon->CompareTo(Pokemon2->NombrePokemon) < 0)
			{
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}

};

