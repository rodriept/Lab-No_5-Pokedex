#pragma once
#include "PokemonGuardado.h"
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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->button1->Location = System::Drawing::Point(12, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"leer archivo .txt";
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
			this->BOrdenarGeneracion->Location = System::Drawing::Point(140, 151);
			this->BOrdenarGeneracion->Name = L"BOrdenarGeneracion";
			this->BOrdenarGeneracion->Size = System::Drawing::Size(177, 32);
			this->BOrdenarGeneracion->TabIndex = 3;
			this->BOrdenarGeneracion->Text = L"Ordenar Por generaci�n ";
			this->BOrdenarGeneracion->UseVisualStyleBackColor = true;
			this->BOrdenarGeneracion->Click += gcnew System::EventHandler(this, &Pokedex::button2_Click);
			// 
			// BOrdenarNationalNumber
			// 
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
			this->label2->Text = L"M�todos de ordenamiento: ";
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
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		String^ NombreDelArchivo = "Lista_Pokemons.txt";
		StreamReader^ AbrirArchivo = File::OpenText(NombreDelArchivo);
		String^ LineaLeida;
		array<String^>^ DatosTemporal = gcnew array<String^>(3);
		
		while ((LineaLeida = AbrirArchivo->ReadLine()) != nullptr)
		{
			int nationalNumber, Generaci�nPokemon;
			String^ NombrePokemon;
			DatosTemporal = LineaLeida->Split(',');
			nationalNumber = Convert::ToInt32(DatosTemporal[0]);
			NombrePokemon = DatosTemporal[1];
			Generaci�nPokemon = Convert::ToInt32(DatosTemporal[2]);
			
			MisPokemons[contador] = gcnew PokemonGuardado(NombrePokemon,nationalNumber, Generaci�nPokemon);
			contador++;
		}
		
		
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{

		}
		catch (...)
		{
				
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
				break;
			case 1: 
				break;
			case 2: 
				break; 
			default:
				MessageBox::Show("Ingrese un m�todo de ordenamiento", "ERROR: opcion no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}
		}
		catch (...)
		{
			MessageBox::Show("Ingrese un m�todo de ordenamiento", "ERROR: opcion no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
    }
};
}
