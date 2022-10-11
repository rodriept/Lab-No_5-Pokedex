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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(29, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"leer archivo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pokedex::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// Pokedex
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(547, 489);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Pokedex";
			this->Text = L"Pokedex";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ NombreDelArchivo = "Lista_Pokemons.txt";
		StreamReader^ AbrirArchivo = File::OpenText(NombreDelArchivo);
		String^ LineaLeida = AbrirArchivo->ReadLine();
		
		
	}
	};
}
