#pragma once
#include "VNumeros.h"
#include <string>
namespace PjCalculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculadora
	/// </summary>
	public ref class Calculadora : public System::Windows::Forms::Form
	{
	private:
		vNumeros* objNum;
		double num1;
		int op;
	public:
		Calculadora(void)
		{
			InitializeComponent();
			objNum = new vNumeros();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculadora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnC;
	private: System::Windows::Forms::Button^  btnDEL;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	protected:

	protected:





	private: System::Windows::Forms::Button^  btnCE;
	private: System::Windows::Forms::Button^  btn2;


	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn3;


	private: System::Windows::Forms::Button^  btnDividir;
	private: System::Windows::Forms::Button^  btnMultiplicar;
	private: System::Windows::Forms::Button^  btnRestar;
	private: System::Windows::Forms::Button^  btnSuma;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnPunto;



	private: System::Windows::Forms::Button^  btnResultado;
	private: System::Windows::Forms::TextBox^  Operaciones;







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
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnDEL = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnDividir = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicar = (gcnew System::Windows::Forms::Button());
			this->btnRestar = (gcnew System::Windows::Forms::Button());
			this->btnSuma = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnPunto = (gcnew System::Windows::Forms::Button());
			this->btnResultado = (gcnew System::Windows::Forms::Button());
			this->Operaciones = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnC
			// 
			this->btnC->Location = System::Drawing::Point(49, 82);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(37, 42);
			this->btnC->TabIndex = 0;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &Calculadora::btnC_Click);
			// 
			// btnDEL
			// 
			this->btnDEL->Location = System::Drawing::Point(89, 82);
			this->btnDEL->Name = L"btnDEL";
			this->btnDEL->Size = System::Drawing::Size(38, 42);
			this->btnDEL->TabIndex = 1;
			this->btnDEL->Text = L"<-";
			this->btnDEL->UseVisualStyleBackColor = true;
			this->btnDEL->Click += gcnew System::EventHandler(this, &Calculadora::btnDEL_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(9, 130);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(37, 42);
			this->btn7->TabIndex = 2;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Calculadora::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(49, 130);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(37, 42);
			this->btn8->TabIndex = 3;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Calculadora::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(89, 130);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(38, 42);
			this->btn9->TabIndex = 4;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Calculadora::btn9_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(9, 178);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(37, 42);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Calculadora::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(49, 178);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(36, 42);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Calculadora::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(89, 178);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(38, 42);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Calculadora::btn6_Click);
			// 
			// btnCE
			// 
			this->btnCE->Location = System::Drawing::Point(9, 82);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(37, 42);
			this->btnCE->TabIndex = 8;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &Calculadora::btnCE_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(49, 226);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(36, 42);
			this->btn2->TabIndex = 9;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Calculadora::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(9, 226);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(37, 42);
			this->btn1->TabIndex = 10;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Calculadora::btn1_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(88, 226);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(38, 42);
			this->btn3->TabIndex = 11;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Calculadora::btn3_Click);
			// 
			// btnDividir
			// 
			this->btnDividir->Location = System::Drawing::Point(130, 82);
			this->btnDividir->Name = L"btnDividir";
			this->btnDividir->Size = System::Drawing::Size(38, 42);
			this->btnDividir->TabIndex = 12;
			this->btnDividir->Text = L"/";
			this->btnDividir->UseVisualStyleBackColor = true;
			this->btnDividir->Click += gcnew System::EventHandler(this, &Calculadora::btnDividir_Click);
			// 
			// btnMultiplicar
			// 
			this->btnMultiplicar->Location = System::Drawing::Point(130, 130);
			this->btnMultiplicar->Name = L"btnMultiplicar";
			this->btnMultiplicar->Size = System::Drawing::Size(38, 42);
			this->btnMultiplicar->TabIndex = 18;
			this->btnMultiplicar->Text = L"x";
			this->btnMultiplicar->UseVisualStyleBackColor = true;
			this->btnMultiplicar->Click += gcnew System::EventHandler(this, &Calculadora::btnMultiplicar_Click);
			// 
			// btnRestar
			// 
			this->btnRestar->Location = System::Drawing::Point(130, 178);
			this->btnRestar->Name = L"btnRestar";
			this->btnRestar->Size = System::Drawing::Size(38, 42);
			this->btnRestar->TabIndex = 19;
			this->btnRestar->Text = L"-";
			this->btnRestar->UseVisualStyleBackColor = true;
			this->btnRestar->Click += gcnew System::EventHandler(this, &Calculadora::btnRestar_Click);
			// 
			// btnSuma
			// 
			this->btnSuma->Location = System::Drawing::Point(130, 226);
			this->btnSuma->Name = L"btnSuma";
			this->btnSuma->Size = System::Drawing::Size(38, 43);
			this->btnSuma->TabIndex = 20;
			this->btnSuma->Text = L"+";
			this->btnSuma->UseVisualStyleBackColor = true;
			this->btnSuma->Click += gcnew System::EventHandler(this, &Calculadora::btnSuma_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(49, 274);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(38, 42);
			this->btn0->TabIndex = 21;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Calculadora::btn0_Click);
			// 
			// btnPunto
			// 
			this->btnPunto->Location = System::Drawing::Point(89, 274);
			this->btnPunto->Name = L"btnPunto";
			this->btnPunto->Size = System::Drawing::Size(38, 42);
			this->btnPunto->TabIndex = 22;
			this->btnPunto->Text = L".";
			this->btnPunto->UseVisualStyleBackColor = true;
			this->btnPunto->Click += gcnew System::EventHandler(this, &Calculadora::btnPunto_Click);
			// 
			// btnResultado
			// 
			this->btnResultado->Location = System::Drawing::Point(130, 274);
			this->btnResultado->Name = L"btnResultado";
			this->btnResultado->Size = System::Drawing::Size(39, 42);
			this->btnResultado->TabIndex = 23;
			this->btnResultado->Text = L"=";
			this->btnResultado->UseVisualStyleBackColor = true;
			this->btnResultado->Click += gcnew System::EventHandler(this, &Calculadora::btnResultado_Click);
			// 
			// Operaciones
			// 
			this->Operaciones->Location = System::Drawing::Point(37, 25);
			this->Operaciones->Multiline = true;
			this->Operaciones->Name = L"Operaciones";
			this->Operaciones->Size = System::Drawing::Size(131, 38);
			this->Operaciones->TabIndex = 24;
			// 
			// Calculadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(182, 342);
			this->Controls->Add(this->Operaciones);
			this->Controls->Add(this->btnResultado);
			this->Controls->Add(this->btnPunto);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnSuma);
			this->Controls->Add(this->btnRestar);
			this->Controls->Add(this->btnMultiplicar);
			this->Controls->Add(this->btnDividir);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnDEL);
			this->Controls->Add(this->btnC);
			this->Name = L"Calculadora";
			this->Text = L"Calculadora";
			this->Load += gcnew System::EventHandler(this, &Calculadora::Calculadora_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void Calculadora_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + "7";
}

private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + "8";
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + "9";
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + "4";
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + "5";
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + "6";
}
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Operaciones->Text = Operaciones->Text + "1";
}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + "2";
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + "3";
}
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + "0";
}
private: System::Void btnPunto_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = Operaciones->Text + ".";
	
}


private: System::Void btnDividir_Click(System::Object^  sender, System::EventArgs^  e) {
	num1 = Convert::ToDouble(Operaciones->Text);
	Operaciones->Text = "";
	op = '/';
}
private: System::Void btnMultiplicar_Click(System::Object^  sender, System::EventArgs^  e) {
	num1 = Convert::ToDouble(Operaciones->Text);
	Operaciones->Text = "";
	op = '*';
}
private: System::Void btnRestar_Click(System::Object^  sender, System::EventArgs^  e) {
	num1 = Convert::ToDouble(Operaciones->Text);
	Operaciones->Text = "";
	op = '-';
}
private: System::Void btnSuma_Click(System::Object^  sender, System::EventArgs^  e) {
	num1 = Convert::ToDouble(Operaciones->Text);
	Operaciones->Text = "";
	op = '+';
}
private: System::Void btnResultado_Click(System::Object^  sender, System::EventArgs^  e) {
	double num2 = Convert::ToDouble(Operaciones->Text);
	double total;
	if (op == '+') total=(num1 + num2);
	else if (op == '-') total=(num1 - num2);
	else if (op == '*') total = (num1*num2);
	else if (op == '/')total = (num1 / num2);
	Operaciones->Text = Convert::ToString(total);
}
private: System::Void btnC_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Text = "";
}
private: System::Void btnCE_Click(System::Object^  sender, System::EventArgs^  e) {
	Operaciones->Clear();
}

private: System::Void btnDEL_Click(System::Object^  sender, System::EventArgs^  e) {
	num1 = Convert::ToDouble(Operaciones->Text);
	num1 /= 10;
	int newn = num1;
	if (newn == 0) Operaciones->Text="";
	else Operaciones->Text = Convert::ToString(newn);
	
	
}
};
}
