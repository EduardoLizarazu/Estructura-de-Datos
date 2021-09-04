#pragma once
#include "Area.h"

namespace FormulariosAreasCuadrado {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTexto;
	private: System::Windows::Forms::TextBox^ txtLado;

	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::TextBox^ txtRespuesta;
	private: System::Windows::Forms::Label^ label1;
	protected:

	protected:



	private:System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblTexto = (gcnew System::Windows::Forms::Label());
			this->txtLado = (gcnew System::Windows::Forms::TextBox());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->txtRespuesta = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblTexto
			// 
			this->lblTexto->AutoSize = true;
			this->lblTexto->Location = System::Drawing::Point(97, 102);
			this->lblTexto->Name = L"lblTexto";
			this->lblTexto->Size = System::Drawing::Size(90, 17);
			this->lblTexto->TabIndex = 0;
			this->lblTexto->Text = L"Ingrese lado:";
			// 
			// txtLado
			// 
			this->txtLado->Location = System::Drawing::Point(221, 102);
			this->txtLado->Name = L"txtLado";
			this->txtLado->Size = System::Drawing::Size(107, 22);
			this->txtLado->TabIndex = 1;
			this->txtLado->TextChanged += gcnew System::EventHandler(this, &MyForm::txtArea_TextChanged);
			// 
			// btnCalcular
			// 
			this->btnCalcular->Location = System::Drawing::Point(221, 207);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(107, 38);
			this->btnCalcular->TabIndex = 2;
			this->btnCalcular->Text = L"Calcular";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &MyForm::btnCalcular_Click);
			// 
			// txtRespuesta
			// 
			this->txtRespuesta->Location = System::Drawing::Point(222, 141);
			this->txtRespuesta->Name = L"txtRespuesta";
			this->txtRespuesta->Size = System::Drawing::Size(105, 22);
			this->txtRespuesta->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(103, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Respuesta";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(546, 425);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtRespuesta);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->txtLado);
			this->Controls->Add(this->lblTexto);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void txtArea_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCalcular_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		float respuesta;
		Area cuadrado;
		cuadrado.set_lado(System::Convert::ToDouble(txtLado->Text));
		respuesta = cuadrado.calcularArea();
		txtRespuesta->Text = (System::Convert::ToString(respuesta));
	}
	};
}
