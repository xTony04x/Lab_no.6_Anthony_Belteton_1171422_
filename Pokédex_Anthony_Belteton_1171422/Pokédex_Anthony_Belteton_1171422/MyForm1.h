#pragma once

namespace Pok�dexAnthonyBelteton1171422 {

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->DESORDENADO = (gcnew System::Windows::Forms::ListBox());
			this->ORDENADO = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->ORDENADO->Size = System::Drawing::Size(169, 329);
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
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 601);
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

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
