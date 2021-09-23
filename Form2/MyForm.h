#pragma once
#include <iostream>
#include <string>
#include "Vector.h"
#include <msclr\marshal_cppstd.h>

namespace Form2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	// Variable Global
	Vector arreglo_reg_notas;
	int pos = 0;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtTamano;
	protected:

	private: System::Windows::Forms::TextBox^ txtNota;

	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Nota;

	private: System::Windows::Forms::DataGridView^ grilla_nota;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::Button^ btnTamano;
	private: System::Windows::Forms::Button^ btnEliminar;





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
			this->txtTamano = (gcnew System::Windows::Forms::TextBox());
			this->txtNota = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Nota = (gcnew System::Windows::Forms::Label());
			this->grilla_nota = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->btnTamano = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grilla_nota))->BeginInit();
			this->SuspendLayout();
			// 
			// txtTamano
			// 
			this->txtTamano->Location = System::Drawing::Point(123, 43);
			this->txtTamano->Name = L"txtTamano";
			this->txtTamano->Size = System::Drawing::Size(101, 22);
			this->txtTamano->TabIndex = 0;
			this->txtTamano->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// txtNota
			// 
			this->txtNota->Location = System::Drawing::Point(123, 81);
			this->txtNota->Name = L"txtNota";
			this->txtNota->Size = System::Drawing::Size(104, 22);
			this->txtNota->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tamano";
			// 
			// Nota
			// 
			this->Nota->AutoSize = true;
			this->Nota->Location = System::Drawing::Point(45, 84);
			this->Nota->Name = L"Nota";
			this->Nota->Size = System::Drawing::Size(46, 17);
			this->Nota->TabIndex = 3;
			this->Nota->Text = L"label2";
			// 
			// grilla_nota
			// 
			this->grilla_nota->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_nota->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->grilla_nota->Location = System::Drawing::Point(100, 157);
			this->grilla_nota->Name = L"grilla_nota";
			this->grilla_nota->RowHeadersWidth = 51;
			this->grilla_nota->RowTemplate->Height = 24;
			this->grilla_nota->Size = System::Drawing::Size(470, 311);
			this->grilla_nota->TabIndex = 4;
			this->grilla_nota->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nota";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(286, 81);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(121, 32);
			this->btnIngresar->TabIndex = 5;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &MyForm::btnIngresar_Click);
			// 
			// btnTamano
			// 
			this->btnTamano->Location = System::Drawing::Point(286, 43);
			this->btnTamano->Name = L"btnTamano";
			this->btnTamano->Size = System::Drawing::Size(121, 28);
			this->btnTamano->TabIndex = 6;
			this->btnTamano->Text = L"Tamano";
			this->btnTamano->UseVisualStyleBackColor = true;
			this->btnTamano->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(436, 81);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(134, 32);
			this->btnEliminar->TabIndex = 7;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 514);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnTamano);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->grilla_nota);
			this->Controls->Add(this->Nota);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNota);
			this->Controls->Add(this->txtTamano);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grilla_nota))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		int elemento;
		elemento = System::Convert::ToInt32(txtNota->Text);
		if (arreglo_reg_notas.Insertar(elemento, pos)) {
			pos++;
			// Despliegue del Vector
			grilla_nota->ColumnCount = 1;
			grilla_nota->RowCount = arreglo_reg_notas.Get_tamano();
			int i = 0, nota;
			for (i = 0; i < arreglo_reg_notas.Get_tamano(); i++)
			{
				nota = arreglo_reg_notas.Get_vector(i);
				grilla_nota->Rows[i]->Cells[0]->Value = System::Convert::ToInt32(nota);
			}
		}

	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int tam;
	tam = System::Convert::ToInt32(txtTamano->Text);
	arreglo_reg_notas.Set_tamano(tam);
	grilla_nota->RowCount = arreglo_reg_notas.Get_tamano();
	pos = 0;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int elemento;
	elemento = System::Convert::ToInt32(txtNota->Text);
	if (arreglo_reg_notas.Eliminar(elemento)) {
		// Despliegue del Vector
		grilla_nota->ColumnCount = 1;
		pos--;
		if (grilla_nota->RowCount == 1)
			grilla_nota->Rows[0]->Cells[0]->Value = "";
		else
		{
			grilla_nota->RowCount = arreglo_reg_notas.Get_tamano();
			int i = 0, nota;
			for (i = 0; i < arreglo_reg_notas.Get_tamano(); i++)
			{
				nota = arreglo_reg_notas.Get_vector(i);
				grilla_nota->Rows[i]->Cells[0]->Value = System::Convert::ToInt32(nota);
			}
		}
	}
	else
		MessageBox::Show("No existe el dato");

}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
