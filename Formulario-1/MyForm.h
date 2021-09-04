#pragma once // Para que no se carge varias veces

namespace Formulario1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Tenemos una clase llamada formulario, que va a heredar con un nivel de 
	// accesibilidad publica la clase formulario
	// System::Windows::Forms:: NO ES NECESARIO ya que esta declarado arriba

	// PUBLIC = significa que es una clase publica y que se va a poder acceder
	// desde cualquier parte del programa
	// REF = referenciador de clase
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
		{
			// va a inicializar todos los componentes internos del formulario
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
	private: System::Windows::Forms::Button^ btnAceptar;
	private: System::Windows::Forms::Button^ btnCancelar;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Label^ lblTexto;
	protected:
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ cbxA;
	private: System::Windows::Forms::CheckBox^ cbxB;
	private: System::Windows::Forms::CheckBox^ cbxC;
	private: System::Windows::Forms::Timer^ tTiempo;
	private: System::Windows::Forms::RadioButton^ rbnOpcion1;
	private: System::Windows::Forms::RadioButton^ rbnOpcion2;
	private: System::Windows::Forms::RadioButton^ rbnOpcion3;
	private: System::Windows::Forms::TextBox^ txtTexto;
	private: System::Windows::Forms::ComboBox^ cbxSelector;
	private: System::Windows::Forms::GroupBox^ gbGroup;
	private: System::Windows::Forms::Panel^ pLienzo;
	private: System::Windows::Forms::ColorDialog^ cldColor;
	private: System::Windows::Forms::Button^ btnCirculo;
	private: System::Windows::Forms::Button^ btnCuadrado;
	private: System::Windows::Forms::Button^ btnLimpiar;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->lblTexto = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbxA = (gcnew System::Windows::Forms::CheckBox());
			this->cbxB = (gcnew System::Windows::Forms::CheckBox());
			this->cbxC = (gcnew System::Windows::Forms::CheckBox());
			this->tTiempo = (gcnew System::Windows::Forms::Timer(this->components));
			this->rbnOpcion1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbnOpcion2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbnOpcion3 = (gcnew System::Windows::Forms::RadioButton());
			this->txtTexto = (gcnew System::Windows::Forms::TextBox());
			this->cbxSelector = (gcnew System::Windows::Forms::ComboBox());
			this->gbGroup = (gcnew System::Windows::Forms::GroupBox());
			this->pLienzo = (gcnew System::Windows::Forms::Panel());
			this->cldColor = (gcnew System::Windows::Forms::ColorDialog());
			this->btnCirculo = (gcnew System::Windows::Forms::Button());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAceptar
			// 
			this->btnAceptar->Location = System::Drawing::Point(12, 13);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(96, 28);
			this->btnAceptar->TabIndex = 0;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &MyForm::btnAceptar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(114, 14);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(93, 27);
			this->btnCancelar->TabIndex = 1;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &MyForm::btnCancelar_Click);
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(213, 14);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(89, 26);
			this->btnOk->TabIndex = 2;
			this->btnOk->Text = L"Ok";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &MyForm::btnOk_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(308, 14);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(87, 27);
			this->btnSalir->TabIndex = 3;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MyForm::btnSalir_Click);
			// 
			// lblTexto
			// 
			this->lblTexto->AutoSize = true;
			this->lblTexto->Location = System::Drawing::Point(23, 205);
			this->lblTexto->Name = L"lblTexto";
			this->lblTexto->Size = System::Drawing::Size(43, 17);
			this->lblTexto->TabIndex = 4;
			this->lblTexto->Text = L"Texto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(123, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Texto";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(123, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Texto";
			// 
			// cbxA
			// 
			this->cbxA->AutoSize = true;
			this->cbxA->Location = System::Drawing::Point(12, 88);
			this->cbxA->Name = L"cbxA";
			this->cbxA->Size = System::Drawing::Size(88, 21);
			this->cbxA->TabIndex = 7;
			this->cbxA->Text = L"Opcion A";
			this->cbxA->UseVisualStyleBackColor = true;
			// 
			// cbxB
			// 
			this->cbxB->AutoSize = true;
			this->cbxB->Location = System::Drawing::Point(12, 128);
			this->cbxB->Name = L"cbxB";
			this->cbxB->Size = System::Drawing::Size(88, 21);
			this->cbxB->TabIndex = 8;
			this->cbxB->Text = L"Opcion B";
			this->cbxB->UseVisualStyleBackColor = true;
			// 
			// cbxC
			// 
			this->cbxC->AutoSize = true;
			this->cbxC->Location = System::Drawing::Point(10, 162);
			this->cbxC->Name = L"cbxC";
			this->cbxC->Size = System::Drawing::Size(88, 21);
			this->cbxC->TabIndex = 9;
			this->cbxC->Text = L"Opcion C";
			this->cbxC->UseVisualStyleBackColor = true;
			// 
			// tTiempo
			// 
			this->tTiempo->Tick += gcnew System::EventHandler(this, &MyForm::tTiempo_Tick);
			// 
			// rbnOpcion1
			// 
			this->rbnOpcion1->AutoSize = true;
			this->rbnOpcion1->Location = System::Drawing::Point(240, 88);
			this->rbnOpcion1->Name = L"rbnOpcion1";
			this->rbnOpcion1->Size = System::Drawing::Size(86, 21);
			this->rbnOpcion1->TabIndex = 10;
			this->rbnOpcion1->TabStop = true;
			this->rbnOpcion1->Text = L"Opcion 1";
			this->rbnOpcion1->UseVisualStyleBackColor = true;
			// 
			// rbnOpcion2
			// 
			this->rbnOpcion2->AutoSize = true;
			this->rbnOpcion2->Location = System::Drawing::Point(240, 124);
			this->rbnOpcion2->Name = L"rbnOpcion2";
			this->rbnOpcion2->Size = System::Drawing::Size(86, 21);
			this->rbnOpcion2->TabIndex = 11;
			this->rbnOpcion2->TabStop = true;
			this->rbnOpcion2->Text = L"Opcion 2";
			this->rbnOpcion2->UseVisualStyleBackColor = true;
			// 
			// rbnOpcion3
			// 
			this->rbnOpcion3->AutoSize = true;
			this->rbnOpcion3->Location = System::Drawing::Point(240, 158);
			this->rbnOpcion3->Name = L"rbnOpcion3";
			this->rbnOpcion3->Size = System::Drawing::Size(86, 21);
			this->rbnOpcion3->TabIndex = 12;
			this->rbnOpcion3->TabStop = true;
			this->rbnOpcion3->Text = L"Opcion 3";
			this->rbnOpcion3->UseVisualStyleBackColor = true;
			// 
			// txtTexto
			// 
			this->txtTexto->Location = System::Drawing::Point(26, 235);
			this->txtTexto->Name = L"txtTexto";
			this->txtTexto->Size = System::Drawing::Size(369, 22);
			this->txtTexto->TabIndex = 13;
			this->txtTexto->Text = L"Placeholder";
			this->txtTexto->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// cbxSelector
			// 
			this->cbxSelector->FormattingEnabled = true;
			this->cbxSelector->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Opcion 1", L"Opcion 2", L"Opcion 3", L"Opcion 4" });
			this->cbxSelector->Location = System::Drawing::Point(213, 205);
			this->cbxSelector->Name = L"cbxSelector";
			this->cbxSelector->Size = System::Drawing::Size(182, 24);
			this->cbxSelector->TabIndex = 14;
			this->cbxSelector->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cbxSelector_SelectedIndexChanged);
			// 
			// gbGroup
			// 
			this->gbGroup->Location = System::Drawing::Point(17, 274);
			this->gbGroup->Name = L"gbGroup";
			this->gbGroup->Size = System::Drawing::Size(149, 30);
			this->gbGroup->TabIndex = 15;
			this->gbGroup->TabStop = false;
			this->gbGroup->Text = L"Titulos";
			// 
			// pLienzo
			// 
			this->pLienzo->Location = System::Drawing::Point(193, 272);
			this->pLienzo->Name = L"pLienzo";
			this->pLienzo->Size = System::Drawing::Size(201, 101);
			this->pLienzo->TabIndex = 16;
			// 
			// btnCirculo
			// 
			this->btnCirculo->Location = System::Drawing::Point(95, 310);
			this->btnCirculo->Name = L"btnCirculo";
			this->btnCirculo->Size = System::Drawing::Size(71, 28);
			this->btnCirculo->TabIndex = 17;
			this->btnCirculo->Text = L"Circulo";
			this->btnCirculo->UseVisualStyleBackColor = true;
			this->btnCirculo->Click += gcnew System::EventHandler(this, &MyForm::btnCirculo_Click);
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->Location = System::Drawing::Point(10, 311);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(79, 28);
			this->btnCuadrado->TabIndex = 18;
			this->btnCuadrado->Text = L"Cuadrado";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			this->btnCuadrado->Click += gcnew System::EventHandler(this, &MyForm::btnCuadrado_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(12, 345);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(154, 28);
			this->btnLimpiar->TabIndex = 19;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(413, 406);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnCuadrado);
			this->Controls->Add(this->btnCirculo);
			this->Controls->Add(this->pLienzo);
			this->Controls->Add(this->gbGroup);
			this->Controls->Add(this->cbxSelector);
			this->Controls->Add(this->txtTexto);
			this->Controls->Add(this->rbnOpcion3);
			this->Controls->Add(this->rbnOpcion2);
			this->Controls->Add(this->rbnOpcion1);
			this->Controls->Add(this->cbxC);
			this->Controls->Add(this->cbxB);
			this->Controls->Add(this->cbxA);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lblTexto);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnAceptar);
			this->Name = L"MyForm";
			this->Text = L"Titulo del Formulario";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// Me da dos parametros
	// Guarda una ref del control que desencadeno el evento
	// Indica argumento de evento si tuviera
	Void btnAceptar_Click(Object^ sender, EventArgs^ e) 
	{
		// El messageBox me va a permitir mostrar un mensaje en una ventana emergente
		MessageBox::Show("Aceptar");
		tTiempo->Enabled = true;
	}
	Void btnCancelar_Click(Object^ sender, EventArgs^ e) 
	{
		MessageBox::Show("Cancelar");
		tTiempo->Enabled = false;
	}
	Void btnOk_Click(Object^ sender, EventArgs^ e) 
	{
		MessageBox::Show("Ok");
	}
	Void btnSalir_Click(Object^ sender, EventArgs^ e) 
	{
		MessageBox::Show("Salir");
	}


	Void textBox1_TextChanged(Object^ sender, EventArgs^ e) 
	{
		// this hacemos referencia a la clase actual
		// Text es el atributo del formulario
		// va a ser igual al atributo Text de txtTexto
		this->Text = txtTexto->Text;
	}
	Void cbxSelector_SelectedIndexChanged(Object^ sender, EventArgs^ e) 
	{
		cldColor->ShowDialog();
	}
	Void tTiempo_Tick(Object^ sender, EventArgs^ e) 
	{
		lblTexto->Text = DateTime::Now.ToString();
	}
	Void btnCirculo_Click(Object^ sender, EventArgs^ e) 
	{
		// Me va a representar la parte visible del panel
		Graphics^ g = pLienzo->CreateGraphics();

		// Parm = Con que se va a dibujar y color
		// Parm = Coordenadas de donde inicie
		g->DrawEllipse(Pens::Red, 10, 10, 50, 30);
	}
	Void btnCuadrado_Click(Object^ sender, EventArgs^ e) 
	{
		Graphics^ g = pLienzo->CreateGraphics();
		g->DrawRectangle(Pens::Blue, 10, 10, 50, 30);
	}
	Void btnLimpiar_Click(Object^ sender, EventArgs^ e) 
	{
		Graphics^ g = pLienzo->CreateGraphics();
		g->Clear(Color::White);
	}
};
}
