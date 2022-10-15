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

	private: System::Windows::Forms::Button^ BOrdenarGeneracion;

	private: System::Windows::Forms::Button^ BOrdenarNationalNumber;
	private: System::Windows::Forms::ComboBox^ CBSeleccionarOrden;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ DGVMostrarPokemons;
	private: System::Windows::Forms::PictureBox^ PBPikachu;
	private: System::Windows::Forms::PictureBox^ pictureBox1;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pokedex::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BOrdenarGeneracion = (gcnew System::Windows::Forms::Button());
			this->BOrdenarNationalNumber = (gcnew System::Windows::Forms::Button());
			this->CBSeleccionarOrden = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DGVMostrarPokemons = (gcnew System::Windows::Forms::DataGridView());
			this->PBPikachu = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMostrarPokemons))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPikachu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(11, 143);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 22);
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
			this->label1->Location = System::Drawing::Point(120, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 34);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CENTRO POKEDEX";
			// 
			// BOrdenarGeneracion
			// 
			this->BOrdenarGeneracion->Enabled = false;
			this->BOrdenarGeneracion->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BOrdenarGeneracion->Location = System::Drawing::Point(14, 216);
			this->BOrdenarGeneracion->Margin = System::Windows::Forms::Padding(2);
			this->BOrdenarGeneracion->Name = L"BOrdenarGeneracion";
			this->BOrdenarGeneracion->Size = System::Drawing::Size(133, 26);
			this->BOrdenarGeneracion->TabIndex = 3;
			this->BOrdenarGeneracion->Text = L"Ordenar Por generaci�n ";
			this->BOrdenarGeneracion->UseVisualStyleBackColor = true;
			this->BOrdenarGeneracion->Click += gcnew System::EventHandler(this, &Pokedex::button2_Click);
			// 
			// BOrdenarNationalNumber
			// 
			this->BOrdenarNationalNumber->Enabled = false;
			this->BOrdenarNationalNumber->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BOrdenarNationalNumber->Location = System::Drawing::Point(11, 247);
			this->BOrdenarNationalNumber->Margin = System::Windows::Forms::Padding(2);
			this->BOrdenarNationalNumber->Name = L"BOrdenarNationalNumber";
			this->BOrdenarNationalNumber->Size = System::Drawing::Size(163, 27);
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
			this->CBSeleccionarOrden->Location = System::Drawing::Point(14, 191);
			this->CBSeleccionarOrden->Margin = System::Windows::Forms::Padding(2);
			this->CBSeleccionarOrden->Name = L"CBSeleccionarOrden";
			this->CBSeleccionarOrden->Size = System::Drawing::Size(92, 21);
			this->CBSeleccionarOrden->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 176);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"M�todos de ordenamiento: ";
			// 
			// DGVMostrarPokemons
			// 
			this->DGVMostrarPokemons->AllowUserToAddRows = false;
			this->DGVMostrarPokemons->AllowUserToDeleteRows = false;
			this->DGVMostrarPokemons->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DGVMostrarPokemons->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGVMostrarPokemons->Location = System::Drawing::Point(178, 143);
			this->DGVMostrarPokemons->Margin = System::Windows::Forms::Padding(2);
			this->DGVMostrarPokemons->Name = L"DGVMostrarPokemons";
			this->DGVMostrarPokemons->ReadOnly = true;
			this->DGVMostrarPokemons->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->DGVMostrarPokemons->RowHeadersVisible = false;
			this->DGVMostrarPokemons->RowTemplate->Height = 24;
			this->DGVMostrarPokemons->Size = System::Drawing::Size(226, 226);
			this->DGVMostrarPokemons->TabIndex = 7;
			// 
			// PBPikachu
			// 
			this->PBPikachu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PBPikachu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBPikachu.Image")));
			this->PBPikachu->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PBPikachu.InitialImage")));
			this->PBPikachu->Location = System::Drawing::Point(246, 59);
			this->PBPikachu->Name = L"PBPikachu";
			this->PBPikachu->Size = System::Drawing::Size(92, 79);
			this->PBPikachu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PBPikachu->TabIndex = 8;
			this->PBPikachu->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(75, 59);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(99, 79);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// Pokedex
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(427, 397);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->PBPikachu);
			this->Controls->Add(this->DGVMostrarPokemons);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CBSeleccionarOrden);
			this->Controls->Add(this->BOrdenarNationalNumber);
			this->Controls->Add(this->BOrdenarGeneracion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Pokedex";
			this->Text = L"Pokedex";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGVMostrarPokemons))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PBPikachu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		DGVMostrarPokemons->ColumnCount = 3;
		DGVMostrarPokemons->Columns[0]->HeaderText = "National Number";
		DGVMostrarPokemons->Columns[1]->HeaderText = "Nombre Pokemon";
		DGVMostrarPokemons->Columns[2]->HeaderText = "Generaci�n Pokemon";
		if (ValidarArchivo->ReadToEnd() == nullptr)
		{
			MessageBox::Show("Ingrese los pokemones al archivo de texto", "Error: Pokemones no encontrados", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			while ((LineaLeida = AbrirArchivo->ReadLine()) != nullptr)
			{
				int nationalNumber, Generaci�nPokemon;
				String^ NombrePokemon;
				DatosTemporal = LineaLeida->Split(',');
				nationalNumber = Convert::ToInt32(DatosTemporal[0]);
				NombrePokemon = DatosTemporal[1];
				Generaci�nPokemon = Convert::ToInt32(DatosTemporal[2]);
				DGVMostrarPokemons->Rows->Add(nationalNumber, NombrePokemon, Generaci�nPokemon);
				MisPokemons[contador] = gcnew PokemonGuardado(NombrePokemon, nationalNumber, Generaci�nPokemon);
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
				DGVMostrarPokemons->Rows->Clear();
				for (int i = 0; i < contador; i++)
				{
					PokemonGuardado^ Temporal = MisPokemons[i];
					DGVMostrarPokemons->Rows->Add(Temporal->NationalNumber, Temporal->NombrePokemon, Temporal->GeneracionPokemon);
				}
				MessageBox::Show("Datos actualizados en la tabla", "Datos actualizados", MessageBoxButtons::OK);
				break;
			case 1:
				MetodoDeOrdenamiento->QuicksortPorGeneracion(MisPokemons, 0, contador - 1);
				MessageBox::Show("Los pokemons fueron ordenados correctamente por su Generacion", "Ordenados correctamente", MessageBoxButtons::OK);
				DGVMostrarPokemons->Rows->Clear();
				for (int i = 0; i < contador; i++)
				{
					PokemonGuardado^ Temporal = MisPokemons[i];
					DGVMostrarPokemons->Rows->Add(Temporal->NationalNumber, Temporal->NombrePokemon, Temporal->GeneracionPokemon);
				}
				MessageBox::Show("Datos actualizados en la tabla", "Datos actualizados", MessageBoxButtons::OK);
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
				DGVMostrarPokemons->Rows->Clear();
				for (int i = 0; i < contador; i++)
				{
					PokemonGuardado^ Temporal = MisPokemons[i];
					DGVMostrarPokemons->Rows->Add(Temporal->NationalNumber, Temporal->NombrePokemon, Temporal->GeneracionPokemon);
				}
				MessageBox::Show("Datos actualizados en la tabla", "Datos actualizados", MessageBoxButtons::OK);
				break;
			case 1: 
				MetodoDeOrdenamiento->QuicksortPorNationalNumber(MisPokemons, 0, contador - 1);
				MessageBox::Show("Los pokemons fueron ordenados correctamente por su National Number", "Ordenados correctamente", MessageBoxButtons::OK);
				DGVMostrarPokemons->Rows->Clear();
				for (int i = 0; i < contador; i++)
				{
					PokemonGuardado^ Temporal = MisPokemons[i];
					DGVMostrarPokemons->Rows->Add(Temporal->NationalNumber, Temporal->NombrePokemon, Temporal->GeneracionPokemon);
				}
				MessageBox::Show("Datos actualizados en la tabla", "Datos actualizados", MessageBoxButtons::OK);
				break;
			case 2: 
				break; 
			default:
				MessageBox::Show("Ingrese un m�todo de ordenamiento", "ERROR: opcion no ingresada", MessageBoxButtons::OK, MessageBoxIcon::Error);
				DGVMostrarPokemons->Rows->Clear();
				for (int i = 0; i < contador; i++)
				{
					PokemonGuardado^ Temporal = MisPokemons[i];
					DGVMostrarPokemons->Rows->Add(Temporal->NationalNumber, Temporal->NombrePokemon, Temporal->GeneracionPokemon);
				}
				MessageBox::Show("Datos actualizados en la tabla", "Datos actualizados", MessageBoxButtons::OK);
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
