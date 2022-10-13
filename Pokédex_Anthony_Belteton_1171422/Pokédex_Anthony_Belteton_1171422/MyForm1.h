#pragma once
#include <string>
#include "pokemons.h"
using namespace std;

namespace PokédexAnthonyBelteton1171422 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListBox^ DESORDENADO;
	private: System::Windows::Forms::ListBox^ ORDENADO;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->DESORDENADO = (gcnew System::Windows::Forms::ListBox());
			this->ORDENADO = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(805, 599);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// DESORDENADO
			// 
			this->DESORDENADO->FormattingEnabled = true;
			this->DESORDENADO->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"1,Bulbasaur,001", L"1,charmander,004", L"1,squirtle,007",
					L"1,caterpie,010", L"1,pidgey,016", L"1,rattata,019", L"1,pikachu,025", L"1,nidoran,029", L"1,vulpix,037", L"1,zubat,041", L"3"
			});
			this->DESORDENADO->Location = System::Drawing::Point(34, 156);
			this->DESORDENADO->Name = L"DESORDENADO";
			this->DESORDENADO->Size = System::Drawing::Size(157, 329);
			this->DESORDENADO->TabIndex = 1;
			this->DESORDENADO->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::listBox1_SelectedIndexChanged);
			// 
			// ORDENADO
			// 
			this->ORDENADO->FormattingEnabled = true;
			this->ORDENADO->Location = System::Drawing::Point(197, 156);
			this->ORDENADO->Name = L"ORDENADO";
			this->ORDENADO->Size = System::Drawing::Size(168, 329);
			this->ORDENADO->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(477, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Selection Sort ";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(574, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 40);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Quick Sort ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(671, 300);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 40);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Shell Sort ";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(480, 357);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 38);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Mostrar pokemons";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(230, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 601);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ORDENADO);
			this->Controls->Add(this->DESORDENADO);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		array< pokemons^ >^ MyClass1 = gcnew array< pokemons^ >(10);
		
	}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	


}
};
}
