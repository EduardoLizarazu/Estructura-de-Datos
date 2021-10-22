#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "OPERACIONES.h"
using namespace std;
using namespace msclr::interop;
namespace EJERCICIO_PILA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	OPERACIONES pilita;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btamano;
	protected: 
	private: System::Windows::Forms::DataGridView^  grilla_pila1;
	private: System::Windows::Forms::DataGridView^  grilla_pila2;
	private: System::Windows::Forms::TextBox^  ttamano;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  binsertar;
	private: System::Windows::Forms::Button^  bmostrar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::Button^  beliminar;
	private: System::Windows::Forms::Button^  bEliminar_uno;
	private: System::Windows::Forms::TextBox^  tvalor;
	private: System::Windows::Forms::Button^  bORDENAR;
	private: System::Windows::Forms::Button^  bREPETIDOS;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  bcontador_datos;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btamano = (gcnew System::Windows::Forms::Button());
			this->grilla_pila1 = (gcnew System::Windows::Forms::DataGridView());
			this->grilla_pila2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ttamano = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->binsertar = (gcnew System::Windows::Forms::Button());
			this->bmostrar = (gcnew System::Windows::Forms::Button());
			this->beliminar = (gcnew System::Windows::Forms::Button());
			this->bEliminar_uno = (gcnew System::Windows::Forms::Button());
			this->tvalor = (gcnew System::Windows::Forms::TextBox());
			this->bORDENAR = (gcnew System::Windows::Forms::Button());
			this->bREPETIDOS = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bcontador_datos = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_pila1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_pila2))->BeginInit();
			this->SuspendLayout();
			// 
			// btamano
			// 
			this->btamano->Location = System::Drawing::Point(147, 35);
			this->btamano->Name = L"btamano";
			this->btamano->Size = System::Drawing::Size(75, 23);
			this->btamano->TabIndex = 0;
			this->btamano->Text = L"tamano";
			this->btamano->UseVisualStyleBackColor = true;
			this->btamano->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// grilla_pila1
			// 
			this->grilla_pila1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_pila1->Location = System::Drawing::Point(43, 54);
			this->grilla_pila1->Name = L"grilla_pila1";
			this->grilla_pila1->Size = System::Drawing::Size(98, 283);
			this->grilla_pila1->TabIndex = 1;
			// 
			// grilla_pila2
			// 
			this->grilla_pila2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_pila2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->Column1});
			this->grilla_pila2->Location = System::Drawing::Point(255, 54);
			this->grilla_pila2->Name = L"grilla_pila2";
			this->grilla_pila2->Size = System::Drawing::Size(277, 282);
			this->grilla_pila2->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"elemento";
			this->Column1->Name = L"Column1";
			// 
			// ttamano
			// 
			this->ttamano->Location = System::Drawing::Point(147, 9);
			this->ttamano->Name = L"ttamano";
			this->ttamano->Size = System::Drawing::Size(59, 20);
			this->ttamano->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"pila 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(294, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"pila 2";
			// 
			// binsertar
			// 
			this->binsertar->Location = System::Drawing::Point(43, 368);
			this->binsertar->Name = L"binsertar";
			this->binsertar->Size = System::Drawing::Size(75, 23);
			this->binsertar->TabIndex = 6;
			this->binsertar->Text = L"Insertar";
			this->binsertar->UseVisualStyleBackColor = true;
			this->binsertar->Click += gcnew System::EventHandler(this, &Form1::binsertar_Click);
			// 
			// bmostrar
			// 
			this->bmostrar->Location = System::Drawing::Point(174, 368);
			this->bmostrar->Name = L"bmostrar";
			this->bmostrar->Size = System::Drawing::Size(75, 23);
			this->bmostrar->TabIndex = 7;
			this->bmostrar->Text = L"Mostrar";
			this->bmostrar->UseVisualStyleBackColor = true;
			this->bmostrar->Click += gcnew System::EventHandler(this, &Form1::bmostrar_Click);
			// 
			// beliminar
			// 
			this->beliminar->Location = System::Drawing::Point(297, 368);
			this->beliminar->Name = L"beliminar";
			this->beliminar->Size = System::Drawing::Size(75, 23);
			this->beliminar->TabIndex = 8;
			this->beliminar->Text = L"Eliminar";
			this->beliminar->UseVisualStyleBackColor = true;
			this->beliminar->Click += gcnew System::EventHandler(this, &Form1::beliminar_Click);
			// 
			// bEliminar_uno
			// 
			this->bEliminar_uno->Location = System::Drawing::Point(174, 172);
			this->bEliminar_uno->Name = L"bEliminar_uno";
			this->bEliminar_uno->Size = System::Drawing::Size(75, 23);
			this->bEliminar_uno->TabIndex = 9;
			this->bEliminar_uno->Text = L"Eliminar Uno";
			this->bEliminar_uno->UseVisualStyleBackColor = true;
			this->bEliminar_uno->Click += gcnew System::EventHandler(this, &Form1::bEliminar_uno_Click);
			// 
			// tvalor
			// 
			this->tvalor->Location = System::Drawing::Point(174, 129);
			this->tvalor->Name = L"tvalor";
			this->tvalor->Size = System::Drawing::Size(75, 20);
			this->tvalor->TabIndex = 10;
			// 
			// bORDENAR
			// 
			this->bORDENAR->Location = System::Drawing::Point(538, 154);
			this->bORDENAR->Name = L"bORDENAR";
			this->bORDENAR->Size = System::Drawing::Size(75, 23);
			this->bORDENAR->TabIndex = 11;
			this->bORDENAR->Text = L"Ordenar";
			this->bORDENAR->UseVisualStyleBackColor = true;
			this->bORDENAR->Click += gcnew System::EventHandler(this, &Form1::bORDENAR_Click);
			// 
			// bREPETIDOS
			// 
			this->bREPETIDOS->Location = System::Drawing::Point(538, 199);
			this->bREPETIDOS->Name = L"bREPETIDOS";
			this->bREPETIDOS->Size = System::Drawing::Size(75, 23);
			this->bREPETIDOS->TabIndex = 12;
			this->bREPETIDOS->Text = L"Repetidos";
			this->bREPETIDOS->UseVisualStyleBackColor = true;
			this->bREPETIDOS->Click += gcnew System::EventHandler(this, &Form1::bREPETIDOS_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(538, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Eliminar_triplicados";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// bcontador_datos
			// 
			this->bcontador_datos->Location = System::Drawing::Point(538, 298);
			this->bcontador_datos->Name = L"bcontador_datos";
			this->bcontador_datos->Size = System::Drawing::Size(140, 23);
			this->bcontador_datos->TabIndex = 14;
			this->bcontador_datos->Text = L"contador de datos";
			this->bcontador_datos->UseVisualStyleBackColor = true;
			this->bcontador_datos->Click += gcnew System::EventHandler(this, &Form1::bcontador_datos_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(723, 444);
			this->Controls->Add(this->bcontador_datos);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bREPETIDOS);
			this->Controls->Add(this->bORDENAR);
			this->Controls->Add(this->tvalor);
			this->Controls->Add(this->bEliminar_uno);
			this->Controls->Add(this->beliminar);
			this->Controls->Add(this->bmostrar);
			this->Controls->Add(this->binsertar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ttamano);
			this->Controls->Add(this->grilla_pila2);
			this->Controls->Add(this->grilla_pila1);
			this->Controls->Add(this->btamano);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_pila1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_pila2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 
			 {
                grilla_pila1->RowCount=System::Convert::ToInt32(ttamano->Text);
				grilla_pila1->ColumnCount=1;

			 }
	private: System::Void binsertar_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			    pilita.Guardar_grilla_pila(grilla_pila1);
			 
			 }
private: System::Void bmostrar_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			pilita.Guardar_pila_grilla(grilla_pila2);

		 }
private: System::Void beliminar_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		    
			 pilita.Eliminar_pila(grilla_pila1);
		 
		 }
private: System::Void bEliminar_uno_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 
		    pilita.Eliminar_uno_a_uno1(tvalor,grilla_pila1);
		 }
private: System::Void bORDENAR_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		    pilita.Ordenar_pila();
			pilita.Guardar_pila_grilla(grilla_pila2);
		 }
private: System::Void bREPETIDOS_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		    pilita.Eliminar_repetidos();
			pilita.Guardar_pila_grilla(grilla_pila2);
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
		    pilita.Eliminar_triplicados();
			pilita.Guardar_pila_grilla(grilla_pila2);
		 }
private: System::Void bcontador_datos_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 PILA1 nueva_pila;
			 nueva_pila=pilita.Contar_repetidos();
			 pilita.Guardar_pila1_grilla(grilla_pila2,nueva_pila);
		 }
};
}

