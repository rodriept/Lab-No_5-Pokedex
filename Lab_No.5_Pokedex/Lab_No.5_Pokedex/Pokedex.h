#pragma once
#include "PokemonGuardado.h"
#include "Ordenamiento.h"
namespace LabNo5Pokedex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Resumen de Pokedex
	/// </summary>
	public ref class Pokedex : public System::Windows::Forms::Form
	{
	public:
		Pokedex(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Pokedex()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ RTBMostrarPokemons;
	private: System::Windows::Forms::Button^ BOrdenarGeneracion;

	private: System::Windows::Forms::Button^ BOrdenarNationalNumber;
	private: System::Windows::Forms::ComboBox^ CBSeleccionarOrden;
	private: System::Windows::Forms::Label^ label2;







	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RTBMostrarPokemons = (gcnew System::Windows::Forms::RichTextBox());
			this->BOrdenarGeneracion = (gcnew System::Windows::Forms::Button());
			this->BOrdenarNationalNumber = (gcnew System::Windows::Forms::Button());
			this->CBSeleccionarOrden = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(10, 61);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"leer lista de pokemons  .txt";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pokedex::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gloucester MT Extra Condensed", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(183, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 34);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CENTRO POKEDEX";
			// 
			// RTBMostrarPokemons
			// 
			this->RTBMostrarPokemons->Location = System::Drawing::Point(10, 90);
			this->RTBMostrarPokemons->Name = L"RTBMostrarPokemons";
			this->RTBMostrarPokemons->ReadOnly = true;
			this->RTBMostrarPokemons->Size = System::Drawing::Size(124, 202);
			this->RTBMostrarPokemons->TabIndex = 2;
			this->RTBMostrarPokemons->Text = L"";
			// 
			// BOrdenarGeneracion
			// 
			this->BOrdenarGeneracion->Enabled = false;
			this->BOrdenarGeneracion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BOrdenarGeneracion->Location = System::Drawing::Point(140, 151);
			this->BOrdenarGeneracion->Name = L"BOrdenarGeneracion";
			this->BOrdenarGeneracion->Size = System::Drawing::Size(177, 32);
			this->BOrdenarGeneracion->TabIndex = 3;
			this->BOrdenarGeneracion->Text = L"Ordenar Por generación ";
			this->BOrdenarGeneracion->UseVisualStyleBackColor = true;
			this->BOrdenarGeneracion->Click += gcnew System::EventHandler(this, &Pokedex::button2_Click);
			// 
			// BOrdenarNationalNumber
			// 
			this->BOrdenarNationalNumber->Enabled = false;
			this->BOrdenarNationalNumber->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BOrdenarNationalNumber->Location = System::Drawing::Point(140, 189);
			this->BOrdenarNationalNumber->Name = L"BOrdenarNationalNumber";
			this->BOrdenarNationalNumber->Size = System::Drawing::Size(217, 33);
			this->BOrdenarNationalNumber->TabIndex = 4;
			this->BOrdenarNationalNumber->Text = L"Ordenar Por National Number";
			this->BOrdenarNationalNumber->UseVisualStyleBackColor = true;
			this->BOrdenarNationalNumber->Click += gcnew System::EventHandler(this, &Pokedex::button3_Click);
			// 
			// CBSeleccionarOrden
			// 
			this->CBSeleccionarOrden->Enabled = false;
			this->CBSeleccionarOrden->FormattingEnabled = true;
			this->CBSeleccionarOrden->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Selection Sort", L"Quick Sort", L"Shell Sort" });
			this->CBSeleccionarOrden->Location = System::Drawing::Point(140, 121);
			this->CBSeleccionarOrden->Name = L"CBSeleccionarOrden";
			this->CBSeleccionarOrden->Size = System::Drawing::Size(121, 24);
			this->CBSeleccionarOrden->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(137, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Métodos de ordenamiento: ";
			// 
			// Pokedex
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 489);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CBSeleccionarOrden);
			this->Controls->Add(this->BOrdenarNationalNumber);
			this->Controls->Add(this->BOrdenarGeneracion);
			this->Controls->Add(this->RTBMostrarPokemons);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Pokedex";
			this->Text = L"Pokedex";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int contador = 0;
		array<PokemonGuardado^>^ MisPokemons = gcnew array<PokemonGuardado^>(100);
		Ordenamiento^ MetodoDeOrdenamiento = gcnew Ordenamiento;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ NombreDelArchivo = "Lista_Pokemons.txt";
		StreamReader^ AbrirArchivo = File::OpenText(NombreDelArchivo);
		StreamReader^ ValidarArchivo = File::OpenText(NombreDelArchivo);
		String^ LineaLeida;
		array<String^>^ DatosTemporal = gcnew array<String^>(3);

		if (ValidarArchivo->ReadToEnd() == nullptr)
		{
			MessageBox::Show("Ingrese los pokemones al archivo de texto", "Error: Pokemones no encontrados", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			while ((LineaLeida = AbrirArchivo->ReadLine()) != nullptr)
			{
				int nationalNumber, GeneraciónPokemon;
				String^ NombrePokemon;
				DatosTemporal = LineaLeida->Split(',');
				nationalNumber = Convert::ToInt32(DatosTemporal[0]);
				NombrePokemon = DatosTemporal[1];
				GeneraciónPokemon = Convert::ToInt32(DatosTemporal[2]);

				MisPokemons[contador] = gcnew PokemonGuardado(NombrePokemon, nationalNumber, GeneraciónPokemon);
				contador++;
			}
			this->BOrdenarGeneracion->Enabled = true;
			this->BOrdenarNationalNumber->Enabled = true;
			this->CBSeleccionarOrden->Enabled = true;
		}
		
	
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			int opcion = CBSeleccionarOrden->SelectedIndex;
			switch (opcion)
			{
			case 0:
				MetodoDeOrdenamiento->SelectionSortPorGeneracion(MisPokemons, contador);
				MessageBox::Show("Los pokemons fueron ordenados correctamente por su Generacion", "Ordenados correctamente", MessageBoxButtons::OK);
				break;
			case 1:
				break;
			case 2:
				break;
			default:
				MessageBox::Show("Ingrese un método de ordenamiento", "ERROR: opcion no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
		}
		catch (...)
		{
			MessageBox::Show("Ingrese un método de ordenamiento", "ERROR: opcion no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			int opcion = CBSeleccionarOrden->SelectedIndex;
			switch (opcion)
			{
			case 0:
				MetodoDeOrdenamiento->SelectionSortNationalNumber(MisPokemons,contador);
				MessageBox::Show("Los pokemons fueron ordenados correctamente por su National Number", "Ordenados correctamente", MessageBoxButtons::OK);
				break;
			case 1: 
				break;
			case 2: 
				break; 
			default:
				MessageBox::Show("Ingrese un método de ordenamiento", "ERROR: opcion no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
		}
		catch (...)
		{
			MessageBox::Show("Ingrese un método de ordenamiento", "ERROR: opcion no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
    }
};
}
