#pragma once
ref class PokemonGuardado
{
public:
	System::String^ NombrePokemon;
	int NationalNumber;
	int GeneracionPokemon; 

	PokemonGuardado(System::String^ _NombrePokemon, int _NationalNumber, int _GeneracionPokemon)
	{
		NombrePokemon = _NombrePokemon; 
		NationalNumber = _NationalNumber; 
		GeneracionPokemon = _GeneracionPokemon;
	}

};

