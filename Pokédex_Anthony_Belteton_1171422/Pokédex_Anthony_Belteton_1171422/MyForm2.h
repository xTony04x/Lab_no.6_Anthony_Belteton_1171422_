#pragma once
#include "pokemons.h"
namespace PokédexAnthonyBelteton1171422 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(805, 599);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(581, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 44);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(478, 347);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 44);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(581, 347);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 44);
			this->button4->TabIndex = 5;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(798, 582);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		array<pokemons^>^ mispokemons = gcnew array<pokemons^>(79);
		//primera generacion
		mispokemons[0] = gcnew pokemons(1,"Bulbasaur",001);
		mispokemons[1] = gcnew pokemons(1, "Charmander", 004);
		mispokemons[2] = gcnew pokemons(1, "squirtle", 007);
		mispokemons[3] = gcnew pokemons(1, "Caterpie", 010);
		mispokemons[4] = gcnew pokemons(1, "weedle", 013);
		mispokemons[5] = gcnew pokemons(1, "Pidgey", 016);
		mispokemons[6] = gcnew pokemons(1, "rattata",19);
		mispokemons[7] = gcnew pokemons(1, "spearow", 21);
		mispokemons[8] = gcnew pokemons(1, "pikachu", 25);
		mispokemons[9] = gcnew pokemons(1, "nidoran", 30);
		//4ta generacion
		mispokemons[10] = gcnew pokemons(4, "Turtwig", 387);
		mispokemons[11] = gcnew pokemons(4, "Chimchar", 390);
		mispokemons[12] = gcnew pokemons(4, "Piplup", 393);
		mispokemons[13] = gcnew pokemons(4, "Starly", 396);
		mispokemons[14] = gcnew pokemons(4, "Bidoof", 399);
		mispokemons[15] = gcnew pokemons(4, "Shinx", 403);
		mispokemons[16] = gcnew pokemons(4, "Buizel", 418);
		mispokemons[17] = gcnew pokemons(4, "buneary", 427);
		mispokemons[18] = gcnew pokemons(4, "stunky", 434);
		mispokemons[19] = gcnew pokemons(4, "Riolu", 447);
		//2da generacion
		mispokemons[20] = gcnew pokemons(2, "chikorita", 152);
		mispokemons[21] = gcnew pokemons(2, "noctowl", 164);
		mispokemons[22] = gcnew pokemons(2, "Crobat", 169);
		mispokemons[23] = gcnew pokemons(2, "pichu", 172);
		mispokemons[24] = gcnew pokemons(2, "Cleffa", 173);
		mispokemons[25] = gcnew pokemons(2, "Natu", 177);
		mispokemons[26] = gcnew pokemons(2, "Marill", 183);
		mispokemons[27] = gcnew pokemons(2, "wooper", 194);
		mispokemons[28] = gcnew pokemons(2, "Wobbuffet", 202);
		mispokemons[29] = gcnew pokemons(2, "celebi", 251);
		//3ra generacion
		mispokemons[30] = gcnew pokemons(3, "Torchic", 255);
		mispokemons[31] = gcnew pokemons(3, "Lotad", 270);
		mispokemons[32] = gcnew pokemons(3, "Taillow", 276);
		mispokemons[33] = gcnew pokemons(3, "Ralts", 280);
		mispokemons[34] = gcnew pokemons(3, "Skitty", 300);
		mispokemons[35] = gcnew pokemons(3, "Plusle", 311);
		mispokemons[36] = gcnew pokemons(3, "Swablu", 333);
		mispokemons[37] = gcnew pokemons(3, "Spheal", 363);
		mispokemons[38] = gcnew pokemons(3, "Spoink", 325);
		mispokemons[39] = gcnew pokemons(3, "Wailmer", 251);
		//5ta generacion
		mispokemons[40] = gcnew pokemons(4, "Snivy",495);
		mispokemons[41] = gcnew pokemons(4, "Tepig",498);
		mispokemons[42] = gcnew pokemons(4, "Oshawott",501);
		mispokemons[43] = gcnew pokemons(4, "Watchog",505);
		mispokemons[44] = gcnew pokemons(4, "Pansage",511);
		mispokemons[45] = gcnew pokemons(4, "Munna",517);
		mispokemons[46] = gcnew pokemons(4, "Pidove",519);
		mispokemons[47] = gcnew pokemons(4, "woobat",527);
		mispokemons[48] = gcnew pokemons(4, "Gurduur",533);
		mispokemons[49] = gcnew pokemons(4, "Rufflet",627);
		//8va generacion 
		mispokemons[50] = gcnew pokemons(8, "Grookey", 810);
		mispokemons[51] = gcnew pokemons(8, "Sobble", 816);
		mispokemons[52] = gcnew pokemons(8, "Rookidee", 821);
		mispokemons[53] = gcnew pokemons(8, "Dottler", 825);
		mispokemons[54] = gcnew pokemons(8, "Wooloo", 831);
		mispokemons[55] = gcnew pokemons(8, "yamper", 835);
		mispokemons[56] = gcnew pokemons(8, "Toxel", 848);
		mispokemons[57] = gcnew pokemons(8, "Snom", 827);
		mispokemons[58] = gcnew pokemons(8, "Zacian", 888);
		mispokemons[59] = gcnew pokemons(8, "Applin", 840);
	}

};
}

