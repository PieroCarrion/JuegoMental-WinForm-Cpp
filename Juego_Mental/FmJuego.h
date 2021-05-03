#pragma once
#include <Windows.h>

enum Colores { Blue, Yellow, Red, Green };

namespace Juego_Mental {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FmJuego
	/// </summary>
	public ref class FmJuego : public System::Windows::Forms::Form
	{
	private:
		int aciertos=0,fallos=0;
		Graphics^ g;
		Colores aux;
		int contador = 0;
	private: System::Windows::Forms::Label^  lblColor;
			 int n = 1;
	public:
		FmJuego(void)
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
		~FmJuego()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnRojo;
	private: System::Windows::Forms::Button^  btnVerde;
	private: System::Windows::Forms::Button^  btnAzul;
	private: System::Windows::Forms::Button^  btnAmarillo;
	private: System::Windows::Forms::Label^  lblColorFigura;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Label^  lblAciertos;
	private: System::Windows::Forms::Label^  lblFallos;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRojo = (gcnew System::Windows::Forms::Button());
			this->btnVerde = (gcnew System::Windows::Forms::Button());
			this->btnAzul = (gcnew System::Windows::Forms::Button());
			this->btnAmarillo = (gcnew System::Windows::Forms::Button());
			this->lblColorFigura = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->lblAciertos = (gcnew System::Windows::Forms::Label());
			this->lblFallos = (gcnew System::Windows::Forms::Label());
			this->lblColor = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(28, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Opciones";
			// 
			// btnRojo
			// 
			this->btnRojo->BackColor = System::Drawing::Color::Red;
			this->btnRojo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRojo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRojo->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnRojo->Location = System::Drawing::Point(211, 65);
			this->btnRojo->Name = L"btnRojo";
			this->btnRojo->Size = System::Drawing::Size(82, 42);
			this->btnRojo->TabIndex = 1;
			this->btnRojo->Text = L"Red";
			this->btnRojo->UseVisualStyleBackColor = false;
			this->btnRojo->Click += gcnew System::EventHandler(this, &FmJuego::btnRojo_Click);
			// 
			// btnVerde
			// 
			this->btnVerde->BackColor = System::Drawing::Color::Green;
			this->btnVerde->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnVerde->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerde->ForeColor = System::Drawing::Color::White;
			this->btnVerde->Location = System::Drawing::Point(299, 65);
			this->btnVerde->Name = L"btnVerde";
			this->btnVerde->Size = System::Drawing::Size(82, 42);
			this->btnVerde->TabIndex = 2;
			this->btnVerde->Text = L"Green";
			this->btnVerde->UseVisualStyleBackColor = false;
			this->btnVerde->Click += gcnew System::EventHandler(this, &FmJuego::btnVerde_Click);
			// 
			// btnAzul
			// 
			this->btnAzul->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnAzul->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAzul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAzul->ForeColor = System::Drawing::Color::White;
			this->btnAzul->Location = System::Drawing::Point(387, 65);
			this->btnAzul->Name = L"btnAzul";
			this->btnAzul->Size = System::Drawing::Size(82, 42);
			this->btnAzul->TabIndex = 3;
			this->btnAzul->Text = L"Blue";
			this->btnAzul->UseVisualStyleBackColor = false;
			this->btnAzul->Click += gcnew System::EventHandler(this, &FmJuego::btnAzul_Click);
			// 
			// btnAmarillo
			// 
			this->btnAmarillo->BackColor = System::Drawing::Color::Yellow;
			this->btnAmarillo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAmarillo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAmarillo->ForeColor = System::Drawing::Color::White;
			this->btnAmarillo->Location = System::Drawing::Point(475, 65);
			this->btnAmarillo->Name = L"btnAmarillo";
			this->btnAmarillo->Size = System::Drawing::Size(82, 42);
			this->btnAmarillo->TabIndex = 5;
			this->btnAmarillo->Text = L"Yellow";
			this->btnAmarillo->UseVisualStyleBackColor = false;
			this->btnAmarillo->Click += gcnew System::EventHandler(this, &FmJuego::btnAmarillo_Click);
			// 
			// lblColorFigura
			// 
			this->lblColorFigura->AutoSize = true;
			this->lblColorFigura->BackColor = System::Drawing::SystemColors::ControlLight;
			this->lblColorFigura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblColorFigura->Location = System::Drawing::Point(121, 283);
			this->lblColorFigura->Name = L"lblColorFigura";
			this->lblColorFigura->Size = System::Drawing::Size(190, 26);
			this->lblColorFigura->TabIndex = 6;
			this->lblColorFigura->Text = L"Color de la Figura:";
			// 
			// lblAciertos
			// 
			this->lblAciertos->AutoSize = true;
			this->lblAciertos->BackColor = System::Drawing::Color::SteelBlue;
			this->lblAciertos->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblAciertos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAciertos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblAciertos->Location = System::Drawing::Point(95, 358);
			this->lblAciertos->Name = L"lblAciertos";
			this->lblAciertos->Size = System::Drawing::Size(121, 31);
			this->lblAciertos->TabIndex = 7;
			this->lblAciertos->Text = L"Aciertos:";
			// 
			// lblFallos
			// 
			this->lblFallos->AutoSize = true;
			this->lblFallos->BackColor = System::Drawing::Color::SteelBlue;
			this->lblFallos->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblFallos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFallos->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lblFallos->Location = System::Drawing::Point(349, 358);
			this->lblFallos->Name = L"lblFallos";
			this->lblFallos->Size = System::Drawing::Size(95, 31);
			this->lblFallos->TabIndex = 9;
			this->lblFallos->Text = L"Fallos:";
			// 
			// lblColor
			// 
			this->lblColor->AutoSize = true;
			this->lblColor->BackColor = System::Drawing::Color::Transparent;
			this->lblColor->ForeColor = System::Drawing::SystemColors::MenuText;
			this->lblColor->Location = System::Drawing::Point(267, 193);
			this->lblColor->Name = L"lblColor";
			this->lblColor->Size = System::Drawing::Size(41, 13);
			this->lblColor->TabIndex = 10;
			this->lblColor->Text = L"lblColor";
			this->lblColor->Visible = false;
			// 
			// FmJuego
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 429);
			this->Controls->Add(this->lblColor);
			this->Controls->Add(this->lblAciertos);
			this->Controls->Add(this->lblColorFigura);
			this->Controls->Add(this->btnAmarillo);
			this->Controls->Add(this->btnAzul);
			this->Controls->Add(this->btnVerde);
			this->Controls->Add(this->btnRojo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblFallos);
			this->Name = L"FmJuego";
			this->Text = L"Juego Mental";
			this->Load += gcnew System::EventHandler(this, &FmJuego::FmJuego_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Colores Color() {
			Colores color;
			/*int x=0+rand()%(4-1);
			for ( int i= 0; i < x; i++)
			{
				if (i==0) {
					color = Red;
				}
				else if (i==1) {
					color = Blue;
				}
				else if(i==2){
					color = Yellow;
				}
				else if (i==3) {
					color = Green;
				}
			}*/
			Random x;
			color= Colores(x.Next(0, 4));
			return color;
		}
		char Dibujar(Colores color) {
			char texto;
			if (color==Blue) {
				g->FillEllipse(Brushes::Blue, 230, 150, 100, 100);
				texto = 'B';
			}
			else if (color==Green) {
				g->FillEllipse(Brushes::Green, 230, 150, 100,100);
				texto = 'G';
			}
			else if (color== Red) {
				g->FillEllipse(Brushes::Red, 230, 150, 100,100);
				texto = 'R';
			}
			else if (color== Yellow) {
				g->FillEllipse(Brushes::Yellow, 230, 150, 100,100);
				texto = 'Y';
			}
			int labelNombre;
			Random x;
			labelNombre = x.Next(0, 4);
			if (labelNombre == 0) lblColor->Text = "Blue";
			else if (labelNombre == 1) lblColor->Text = "Green";
			else if (labelNombre == 2) lblColor->Text = "Red";
			else if (labelNombre == 3) lblColor->Text = "Yellow";
			aux = color;
			return texto;
		}
		void Comprobar(Colores op) {

			lblColor->Visible = true;
			if (aux==op) {
				aciertos++;
			}
			else {
				fallos++;
			}
			
			lblAciertos->Text = "Aciertos: " + aciertos;
			lblFallos->Text = "Fallos: " + fallos;
			Dibujar(Color());
			lblColorFigura->Text = "El color de la figura es: " + Convert::ToChar(Dibujar(aux));
			contador++;
			if (contador==20*n) {
				float rate = (100*aciertos)/(aciertos+fallos);
				MessageBox::Show("Win Rate: " + rate+"%");
				n++;
			}
		}
	private: System::Void FmJuego_Load(System::Object^  sender, System::EventArgs^  e) {
		g = this->CreateGraphics();
		Colores x = Color();
		Dibujar(x);
	}
	private: System::Void btnRojo_Click(System::Object^  sender, System::EventArgs^  e) {	
		Comprobar(Red);	
	}
	private: System::Void btnVerde_Click(System::Object^  sender, System::EventArgs^  e) {		
		Comprobar(Green);	
	}
	private: System::Void btnAzul_Click(System::Object^  sender, System::EventArgs^  e) {
		Comprobar(Blue);		
	}
	private: System::Void btnAmarillo_Click(System::Object^  sender, System::EventArgs^  e) {
		Comprobar(Yellow);		
	}

};
}