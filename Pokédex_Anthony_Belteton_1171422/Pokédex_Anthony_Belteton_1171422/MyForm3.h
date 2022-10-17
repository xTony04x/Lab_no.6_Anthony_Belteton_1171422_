#pragma once
#include "pokemons.h"
#include<stdlib.h>



namespace PokédexAnthonyBelteton1171422 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace IO;

	/// <summary>
	/// Resumen de MyForm3
	/// </summary>

	int generac[80];
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		array<pokemons^>^ mispokemons = gcnew array<pokemons^>(80);
		array<gen_2^>^ gen = gcnew array<gen_2^>(80);
		
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
		
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::ListBox^ listBox2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
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
			this->pictureBox1->Location = System::Drawing::Point(-3, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(805, 605);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm3::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(473, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"AGREGAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(28, 157);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(141, 329);
			this->listBox2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(595, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 38);
			this->button2->TabIndex = 6;
			this->button2->Text = L"quick sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(473, 341);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 38);
			this->button3->TabIndex = 7;
			this->button3->Text = L"AGREGAR";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(595, 341);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 38);
			this->button4->TabIndex = 8;
			this->button4->Text = L"AGREGAR";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(191, 157);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 290);
			this->textBox1->TabIndex = 9;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 605);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// este laboratorio se modifico tantas veces que no quiero ni pensar en los intentos fallidos jeje
		//notas sin importancia :)
		System::String^ Text_n;
		String^ generacion = "32";
		openFileDialog1->Title = "Open Text files";
		openFileDialog1->ShowDialog();
		Text_n = openFileDialog1->FileName;
		String^ fileName = Text_n;
		String^ Line_text;
		
			MessageBox::Show("trying to open file {0}...", fileName);
			StreamReader^ din = File::OpenText(fileName);

			String^ str;
			int count = 0;
			while ((str = din->ReadLine()) != nullptr)
			{
					count++;
					listBox2->Items->Add(str);
					char space = ',';
					array<String^>^ palabras = Line_text->Split(space);


					pokemons^ mispoke = gcnew pokemons();
					 generacion = palabras[0];
					generac[count] = atoi(generacion);
					mispoke->nombres = palabras[1];
					mispoke->NT = palabras[2];

					mispokemons[count] = mispoke;
			}
			
		
		
		
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
    }
	       
    };
}
