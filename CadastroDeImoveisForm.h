#pragma once
#include "Imoveis&Proprientario.h"
#include "ListaDeImoveisForm.h"
#include "ImobiliariaForm.h"
#include "Excluirform.h"
#include "EditarForm.h"
#include "ConfigBancoForm.h"
#include "VendasForm.h"
#include "RelatorioForm.h"



namespace eImobweb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Net;             // Para WebClient (requisições HTTP)
	using namespace System::IO;              // Para manipulação de fluxos de dados (se necessário)
	using namespace System::Text::RegularExpressions; // Para Regex
	using namespace System::Runtime::Serialization;
	using namespace System::Globalization;

	/// <summary>
	/// Sumário para CadastroDeImoveisForm
	/// </summary>
	public ref class CadastroDeImoveisForm : public System::Windows::Forms::Form
	{
	public:
		CadastroDeImoveisForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~CadastroDeImoveisForm()
		{
			if (components)
			{
				delete components;
			}
		}





































































	private: System::Windows::Forms::TextBox^ tBdescricao;

	private: System::Windows::Forms::Label^ label18;







	private: System::Windows::Forms::LinkLabel^ linkLabel4;












	private: System::Windows::Forms::Label^ label33;























private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::LinkLabel^ linkLabel7;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::LinkLabel^ linkLabel1;
private: System::Windows::Forms::LinkLabel^ linkLabel2;
private: System::Windows::Forms::LinkLabel^ linkLabel3;
private: System::Windows::Forms::LinkLabel^ linkLabel5;
private: System::Windows::Forms::LinkLabel^ linkLabel10;
private: System::Windows::Forms::LinkLabel^ linkLabel9;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::LinkLabel^ linkLabel11;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::LinkLabel^ linkLabel8;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ tBvalor;
private: System::Windows::Forms::TextBox^ tBAreaTerreno;
private: System::Windows::Forms::TextBox^ tBareaConstruida;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::LinkLabel^ linkLabelValidarCep;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ tBCep;
private: System::Windows::Forms::TextBox^ tBrua;
private: System::Windows::Forms::TextBox^ tBnumero;
private: System::Windows::Forms::TextBox^ tBbairro;
private: System::Windows::Forms::TextBox^ tBcidade;
private: System::Windows::Forms::TextBox^ tBcomplemento;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ tBNomeProprie;
private: System::Windows::Forms::TextBox^ tBtelefone;
private: System::Windows::Forms::TextBox^ tBemail;
private: System::Windows::Forms::Panel^ panel6;






































































	protected:






	protected:


	protected:


	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CadastroDeImoveisForm::typeid));
			this->tBdescricao = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel10 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel9 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel11 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel8 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tBvalor = (gcnew System::Windows::Forms::TextBox());
			this->tBAreaTerreno = (gcnew System::Windows::Forms::TextBox());
			this->tBareaConstruida = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->linkLabelValidarCep = (gcnew System::Windows::Forms::LinkLabel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tBCep = (gcnew System::Windows::Forms::TextBox());
			this->tBrua = (gcnew System::Windows::Forms::TextBox());
			this->tBnumero = (gcnew System::Windows::Forms::TextBox());
			this->tBbairro = (gcnew System::Windows::Forms::TextBox());
			this->tBcidade = (gcnew System::Windows::Forms::TextBox());
			this->tBcomplemento = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tBNomeProprie = (gcnew System::Windows::Forms::TextBox());
			this->tBtelefone = (gcnew System::Windows::Forms::TextBox());
			this->tBemail = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel19->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// tBdescricao
			// 
			this->tBdescricao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBdescricao->BackColor = System::Drawing::SystemColors::Window;
			this->tBdescricao->Location = System::Drawing::Point(99, 16);
			this->tBdescricao->Multiline = true;
			this->tBdescricao->Name = L"tBdescricao";
			this->tBdescricao->Size = System::Drawing::Size(1133, 114);
			this->tBdescricao->TabIndex = 0;
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label18->Location = System::Drawing::Point(0, 16);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(94, 24);
			this->label18->TabIndex = 44;
			this->label18->Text = L"Descrição";
			// 
			// linkLabel4
			// 
			this->linkLabel4->ActiveLinkColor = System::Drawing::Color::Lime;
			this->linkLabel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->LinkColor = System::Drawing::Color::Black;
			this->linkLabel4->Location = System::Drawing::Point(1657, 965);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(73, 25);
			this->linkLabel4->TabIndex = 49;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Salvar";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel4_LinkClicked);
			// 
			// label33
			// 
			this->label33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label33->AutoSize = true;
			this->label33->ForeColor = System::Drawing::Color::Red;
			this->label33->Location = System::Drawing::Point(947, 13);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(11, 13);
			this->label33->TabIndex = 62;
			this->label33->Text = L"*";
			// 
			// panel19
			// 
			this->panel19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel19->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel19->Controls->Add(this->tBdescricao);
			this->panel19->Controls->Add(this->label18);
			this->panel19->Controls->Add(this->label33);
			this->panel19->Location = System::Drawing::Point(346, 883);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(1280, 146);
			this->panel19->TabIndex = 66;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1904, 110);
			this->panel1->TabIndex = 1;
			// 
			// linkLabel7
			// 
			this->linkLabel7->ActiveLinkColor = System::Drawing::Color::Lime;
			this->linkLabel7->AutoSize = true;
			this->linkLabel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->linkLabel7->LinkColor = System::Drawing::Color::Black;
			this->linkLabel7->Location = System::Drawing::Point(35, 90);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(85, 25);
			this->linkLabel7->TabIndex = 64;
			this->linkLabel7->TabStop = true;
			this->linkLabel7->Text = L"Vendas";
			this->linkLabel7->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel7_LinkClicked);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(3, 83);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(26, 33);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 66;
			this->pictureBox5->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Lime;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(34, 50);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(109, 25);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Imobiliária";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->ActiveLinkColor = System::Drawing::Color::Lime;
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->linkLabel2->LinkColor = System::Drawing::Color::Black;
			this->linkLabel2->Location = System::Drawing::Point(34, 18);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(167, 25);
			this->linkLabel2->TabIndex = 3;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Lista de imóveis";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel2_LinkClicked);
			// 
			// linkLabel3
			// 
			this->linkLabel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->linkLabel3->Location = System::Drawing::Point(37, 1190);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(180, 25);
			this->linkLabel3->TabIndex = 63;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Portifólio GITHUB";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel3_LinkClicked);
			// 
			// linkLabel5
			// 
			this->linkLabel5->ActiveLinkColor = System::Drawing::Color::Lime;
			this->linkLabel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->linkLabel5->LinkColor = System::Drawing::Color::Black;
			this->linkLabel5->Location = System::Drawing::Point(41, 1148);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(0, 25);
			this->linkLabel5->TabIndex = 64;
			this->linkLabel5->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel5_LinkClicked);
			// 
			// linkLabel10
			// 
			this->linkLabel10->ActiveLinkColor = System::Drawing::Color::Lime;
			this->linkLabel10->AutoSize = true;
			this->linkLabel10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->linkLabel10->LinkColor = System::Drawing::Color::Black;
			this->linkLabel10->Location = System::Drawing::Point(34, 169);
			this->linkLabel10->Name = L"linkLabel10";
			this->linkLabel10->Size = System::Drawing::Size(181, 25);
			this->linkLabel10->TabIndex = 70;
			this->linkLabel10->TabStop = true;
			this->linkLabel10->Text = L"Excluir Cadastros";
			this->linkLabel10->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel10_LinkClicked);
			// 
			// linkLabel9
			// 
			this->linkLabel9->ActiveLinkColor = System::Drawing::Color::Lime;
			this->linkLabel9->AutoSize = true;
			this->linkLabel9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->linkLabel9->LinkColor = System::Drawing::Color::Black;
			this->linkLabel9->Location = System::Drawing::Point(35, 130);
			this->linkLabel9->Name = L"linkLabel9";
			this->linkLabel9->Size = System::Drawing::Size(174, 25);
			this->linkLabel9->TabIndex = 68;
			this->linkLabel9->TabStop = true;
			this->linkLabel9->Text = L"Relatórios gerais";
			this->linkLabel9->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel9_LinkClicked);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 11);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(26, 32);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(26, 27);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// linkLabel11
			// 
			this->linkLabel11->ActiveLinkColor = System::Drawing::Color::Lime;
			this->linkLabel11->AutoSize = true;
			this->linkLabel11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->linkLabel11->LinkColor = System::Drawing::Color::Black;
			this->linkLabel11->Location = System::Drawing::Point(35, 208);
			this->linkLabel11->Name = L"linkLabel11";
			this->linkLabel11->Size = System::Drawing::Size(172, 25);
			this->linkLabel11->TabIndex = 71;
			this->linkLabel11->TabStop = true;
			this->linkLabel11->Text = L"Editar Cadastros";
			this->linkLabel11->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel11_LinkClicked);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(3, 122);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(26, 33);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 69;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(3, 161);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(26, 33);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 70;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(10, 1181);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(26, 33);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 67;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(3, 200);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(26, 33);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 72;
			this->pictureBox9->TabStop = false;
			// 
			// linkLabel8
			// 
			this->linkLabel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel8->AutoSize = true;
			this->linkLabel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->linkLabel8->Location = System::Drawing::Point(35, 854);
			this->linkLabel8->Name = L"linkLabel8";
			this->linkLabel8->Size = System::Drawing::Size(68, 24);
			this->linkLabel8->TabIndex = 73;
			this->linkLabel8->TabStop = true;
			this->linkLabel8->Text = L"GitHub";
			this->linkLabel8->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabel8_LinkClicked);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 845);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(26, 33);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 74;
			this->pictureBox4->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->linkLabel8);
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->linkLabel11);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->linkLabel9);
			this->panel3->Controls->Add(this->linkLabel10);
			this->panel3->Controls->Add(this->linkLabel5);
			this->panel3->Controls->Add(this->linkLabel3);
			this->panel3->Controls->Add(this->linkLabel2);
			this->panel3->Controls->Add(this->linkLabel1);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->linkLabel7);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 110);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(318, 931);
			this->panel3->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(354, 372);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(151, 24);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Dados do Imóvel";
			// 
			// label25
			// 
			this->label25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->Location = System::Drawing::Point(561, 30);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(11, 13);
			this->label25->TabIndex = 54;
			this->label25->Text = L"*";
			// 
			// label24
			// 
			this->label24->AccessibleDescription = L"]";
			this->label24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::Red;
			this->label24->Location = System::Drawing::Point(251, 86);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(11, 13);
			this->label24->TabIndex = 53;
			this->label24->Text = L"*";
			// 
			// label26
			// 
			this->label26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::Color::Red;
			this->label26->Location = System::Drawing::Point(893, 25);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(11, 13);
			this->label26->TabIndex = 55;
			this->label26->Text = L"*";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Casa", L"Apartamento", L"Terreno", L"Kitnet",
					L"Flat", L"Sobrado", L"Sítio", L"Rancho", L"Chácara"
			});
			this->comboBox1->Location = System::Drawing::Point(1105, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 46;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::comboBox1_SelectedIndexChanged);
			// 
			// label20
			// 
			this->label20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label20->Location = System::Drawing::Point(964, 41);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(135, 24);
			this->label20->TabIndex = 48;
			this->label20->Text = L"Tipo de Imóvel";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label6->Location = System::Drawing::Point(7, 102);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 24);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Área do Terreno";
			this->label6->Click += gcnew System::EventHandler(this, &CadastroDeImoveisForm::label6_Click);
			// 
			// label23
			// 
			this->label23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(250, 30);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(11, 13);
			this->label23->TabIndex = 52;
			this->label23->Text = L"*";
			this->label23->Click += gcnew System::EventHandler(this, &CadastroDeImoveisForm::label23_Click);
			// 
			// label27
			// 
			this->label27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label27->Location = System::Drawing::Point(1215, 25);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(11, 13);
			this->label27->TabIndex = 56;
			this->label27->Text = L"*";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label7->Location = System::Drawing::Point(321, 41);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 24);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Área Construída";
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label19->Location = System::Drawing::Point(659, 38);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(95, 24);
			this->label19->TabIndex = 47;
			this->label19->Text = L"Pretensão";
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Venda", L"Aluguel", L"Venda e Aluguel" });
			this->comboBox2->Location = System::Drawing::Point(756, 41);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(148, 21);
			this->comboBox2->TabIndex = 45;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::comboBox2_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label5->Location = System::Drawing::Point(7, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Valor do Imóvel";
			// 
			// tBvalor
			// 
			this->tBvalor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBvalor->Location = System::Drawing::Point(162, 43);
			this->tBvalor->Name = L"tBvalor";
			this->tBvalor->Size = System::Drawing::Size(100, 20);
			this->tBvalor->TabIndex = 11;
			this->tBvalor->TextChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::tBvalor_TextChanged);
			// 
			// tBAreaTerreno
			// 
			this->tBAreaTerreno->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBAreaTerreno->Location = System::Drawing::Point(165, 106);
			this->tBAreaTerreno->Name = L"tBAreaTerreno";
			this->tBAreaTerreno->Size = System::Drawing::Size(100, 20);
			this->tBAreaTerreno->TabIndex = 13;
			this->tBAreaTerreno->TextChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::tBAreaTerreno_TextChanged);
			// 
			// tBareaConstruida
			// 
			this->tBareaConstruida->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBareaConstruida->Location = System::Drawing::Point(472, 45);
			this->tBareaConstruida->Name = L"tBareaConstruida";
			this->tBareaConstruida->Size = System::Drawing::Size(100, 20);
			this->tBareaConstruida->TabIndex = 15;
			this->tBareaConstruida->TextChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::tBareaConstruida_TextChanged);
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel7->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->tBareaConstruida);
			this->panel7->Controls->Add(this->tBAreaTerreno);
			this->panel7->Controls->Add(this->tBvalor);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->comboBox2);
			this->panel7->Controls->Add(this->label19);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->label27);
			this->panel7->Controls->Add(this->label23);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->label20);
			this->panel7->Controls->Add(this->comboBox1);
			this->panel7->Controls->Add(this->label26);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Controls->Add(this->label25);
			this->panel7->Location = System::Drawing::Point(352, 399);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1280, 179);
			this->panel7->TabIndex = 64;
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(345, 856);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(181, 24);
			this->label17->TabIndex = 42;
			this->label17->Text = L"Descrição do Imóvel";
			// 
			// label28
			// 
			this->label28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::Color::Red;
			this->label28->Location = System::Drawing::Point(177, 5);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(11, 13);
			this->label28->TabIndex = 57;
			this->label28->Text = L"*";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::Color::Red;
			this->label29->Location = System::Drawing::Point(685, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(11, 13);
			this->label29->TabIndex = 58;
			this->label29->Text = L"*";
			// 
			// linkLabelValidarCep
			// 
			this->linkLabelValidarCep->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkLabelValidarCep->AutoSize = true;
			this->linkLabelValidarCep->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabelValidarCep->Location = System::Drawing::Point(220, 23);
			this->linkLabelValidarCep->Name = L"linkLabelValidarCep";
			this->linkLabelValidarCep->Size = System::Drawing::Size(72, 13);
			this->linkLabelValidarCep->TabIndex = 27;
			this->linkLabelValidarCep->TabStop = true;
			this->linkLabelValidarCep->Text = L"Validar o CEP";
			this->linkLabelValidarCep->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CadastroDeImoveisForm::linkLabelValidarCep_LinkClicked);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label12->Location = System::Drawing::Point(371, 11);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(108, 24);
			this->label12->TabIndex = 31;
			this->label12->Text = L"Logradouro";
			// 
			// label30
			// 
			this->label30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::Color::Red;
			this->label30->Location = System::Drawing::Point(920, 3);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(11, 13);
			this->label30->TabIndex = 59;
			this->label30->Text = L"*";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label13->Location = System::Drawing::Point(752, 14);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(79, 24);
			this->label13->TabIndex = 34;
			this->label13->Text = L"Número";
			// 
			// label31
			// 
			this->label31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label31->AutoSize = true;
			this->label31->ForeColor = System::Drawing::Color::Red;
			this->label31->Location = System::Drawing::Point(270, 82);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(11, 13);
			this->label31->TabIndex = 60;
			this->label31->Text = L"*";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label14->Location = System::Drawing::Point(7, 95);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(59, 24);
			this->label14->TabIndex = 36;
			this->label14->Text = L"Bairro";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label16->Location = System::Drawing::Point(724, 93);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(129, 24);
			this->label16->TabIndex = 40;
			this->label16->Text = L"Complemento";
			// 
			// label32
			// 
			this->label32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label32->AutoSize = true;
			this->label32->ForeColor = System::Drawing::Color::Red;
			this->label32->Location = System::Drawing::Point(653, 82);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(11, 13);
			this->label32->TabIndex = 61;
			this->label32->Text = L"*";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label15->Location = System::Drawing::Point(371, 93);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(70, 24);
			this->label15->TabIndex = 38;
			this->label15->Text = L"Cidade";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label8->Location = System::Drawing::Point(3, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 24);
			this->label8->TabIndex = 24;
			this->label8->Text = L"CEP";
			// 
			// tBCep
			// 
			this->tBCep->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBCep->Location = System::Drawing::Point(55, 19);
			this->tBCep->Name = L"tBCep";
			this->tBCep->Size = System::Drawing::Size(133, 20);
			this->tBCep->TabIndex = 25;
			// 
			// tBrua
			// 
			this->tBrua->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBrua->Location = System::Drawing::Point(488, 14);
			this->tBrua->Name = L"tBrua";
			this->tBrua->Size = System::Drawing::Size(207, 20);
			this->tBrua->TabIndex = 32;
			// 
			// tBnumero
			// 
			this->tBnumero->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBnumero->Location = System::Drawing::Point(850, 16);
			this->tBnumero->Name = L"tBnumero";
			this->tBnumero->Size = System::Drawing::Size(81, 20);
			this->tBnumero->TabIndex = 0;
			this->tBnumero->TextChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::tBnumero_TextChanged);
			// 
			// tBbairro
			// 
			this->tBbairro->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBbairro->Location = System::Drawing::Point(72, 97);
			this->tBbairro->Name = L"tBbairro";
			this->tBbairro->Size = System::Drawing::Size(207, 20);
			this->tBbairro->TabIndex = 38;
			// 
			// tBcidade
			// 
			this->tBcidade->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBcidade->Location = System::Drawing::Point(457, 95);
			this->tBcidade->Name = L"tBcidade";
			this->tBcidade->Size = System::Drawing::Size(207, 20);
			this->tBcidade->TabIndex = 40;
			this->tBcidade->TextChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::tBcidade_TextChanged);
			// 
			// tBcomplemento
			// 
			this->tBcomplemento->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBcomplemento->Location = System::Drawing::Point(868, 95);
			this->tBcomplemento->Name = L"tBcomplemento";
			this->tBcomplemento->Size = System::Drawing::Size(207, 20);
			this->tBcomplemento->TabIndex = 42;
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->tBcomplemento);
			this->panel8->Controls->Add(this->tBcidade);
			this->panel8->Controls->Add(this->tBbairro);
			this->panel8->Controls->Add(this->tBnumero);
			this->panel8->Controls->Add(this->tBrua);
			this->panel8->Controls->Add(this->tBCep);
			this->panel8->Controls->Add(this->label8);
			this->panel8->Controls->Add(this->label15);
			this->panel8->Controls->Add(this->label32);
			this->panel8->Controls->Add(this->label16);
			this->panel8->Controls->Add(this->label14);
			this->panel8->Controls->Add(this->label31);
			this->panel8->Controls->Add(this->label13);
			this->panel8->Controls->Add(this->label30);
			this->panel8->Controls->Add(this->label12);
			this->panel8->Controls->Add(this->linkLabelValidarCep);
			this->panel8->Controls->Add(this->label29);
			this->panel8->Controls->Add(this->label28);
			this->panel8->Location = System::Drawing::Point(349, 640);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1280, 173);
			this->panel8->TabIndex = 65;
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(348, 613);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(181, 24);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Endereço do Imóvel";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(354, 131);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(154, 24);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Dados do Cliente";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label4->Location = System::Drawing::Point(107, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 24);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Email";
			// 
			// label22
			// 
			this->label22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::Color::Red;
			this->label22->Location = System::Drawing::Point(466, 42);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(11, 13);
			this->label22->TabIndex = 51;
			this->label22->Text = L"*";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->label3->Location = System::Drawing::Point(20, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(149, 24);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Telefone/Celular";
			// 
			// label21
			// 
			this->label21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(466, 2);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(11, 13);
			this->label21->TabIndex = 50;
			this->label21->Text = L"*";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(62, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Proprietário";
			// 
			// tBNomeProprie
			// 
			this->tBNomeProprie->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBNomeProprie->Location = System::Drawing::Point(178, 14);
			this->tBNomeProprie->Name = L"tBNomeProprie";
			this->tBNomeProprie->Size = System::Drawing::Size(296, 20);
			this->tBNomeProprie->TabIndex = 5;
			this->tBNomeProprie->TextChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::tBNomeProprie_TextChanged);
			// 
			// tBtelefone
			// 
			this->tBtelefone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBtelefone->Location = System::Drawing::Point(178, 58);
			this->tBtelefone->Name = L"tBtelefone";
			this->tBtelefone->Size = System::Drawing::Size(296, 20);
			this->tBtelefone->TabIndex = 7;
			this->tBtelefone->TextChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::tBtelefone_TextChanged);
			// 
			// tBemail
			// 
			this->tBemail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tBemail->Location = System::Drawing::Point(178, 103);
			this->tBemail->Name = L"tBemail";
			this->tBemail->Size = System::Drawing::Size(296, 20);
			this->tBemail->TabIndex = 9;
			this->tBemail->TextChanged += gcnew System::EventHandler(this, &CadastroDeImoveisForm::tBemail_TextChanged);
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel6->BackColor = System::Drawing::SystemColors::MenuBar;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->tBemail);
			this->panel6->Controls->Add(this->tBtelefone);
			this->panel6->Controls->Add(this->tBNomeProprie);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->label21);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->label22);
			this->panel6->Controls->Add(this->label4);
			this->panel6->Location = System::Drawing::Point(355, 158);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1277, 170);
			this->panel6->TabIndex = 63;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(10, 10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(97, 75);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(302, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1180, 66);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cadastro de imóveis";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CadastroDeImoveisForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel19);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->linkLabel4);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label17);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CadastroDeImoveisForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"e-Imobweb";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &CadastroDeImoveisForm::CadastroDeImoveisForm_Load);
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

// ==========================================================================================================================

     
	public:
		String^ TipoImovel;
		String^ TipoNegocio = nullptr;

		public: Imoveis^ imovel = nullptr;


private: System::Void tBNomeProprie_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ validText = "";
	// Salva o texto atual digitado no campo

	String^ currentText = tBNomeProprie->Text;

	// Remover caracteres que nao sao letras
	for each (Char c in currentText)
	{
		if (Char::IsLetter(c) || Char::IsWhiteSpace(c) || Char::IsDigit(c))
		{
			validText += c; // Manter apenas letras e espaços
		}
	}
	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBNomeProprie->SelectionStart; // Salva a posição do cursor
		tBNomeProprie->Text = validText;
		tBNomeProprie->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}
} // fim proprietario


private: System::Void tBvalor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Salva o texto atual digitado no campo
	String^ currentText = tBvalor->Text;

	// Remove caracteres não numéricos
	String^ numericPart = "";
	for each(Char c in currentText) {
		if (Char::IsDigit(c)) {
			numericPart += c;
		}
	}

	// Se não houver números, define como "0,00"
	if (numericPart->Length == 0) {
		tBvalor->Text = "R$ 0,00";
		return;
	}

	// Converte a string numérica para um valor decimal correto
	double valorNumerico = Convert::ToDouble(numericPart) / 100.0; // Sempre desloca dois dígitos para os centavos

	// Formata corretamente para moeda brasileira
	tBvalor->Text = "R$ " + valorNumerico.ToString("#,##0.00", CultureInfo::CreateSpecificCulture("pt-BR"));

	// Move o cursor para o final do texto
	tBvalor->SelectionStart = tBvalor->Text->Length;
} // fim de valor


private: System::Void AtualizarCalculo() {
	// Verifica se os campos não estão vazios
	if (tBAreaTerreno->Text->Length == 0 || tBareaConstruida->Text->Length == 0) return;

	// Converte os valores para inteiros
	int areaTerreno = Convert::ToInt32(tBAreaTerreno->Text);
	int areaConstruida = Convert::ToInt32(tBareaConstruida->Text);

	// Verifica se a área construída é maior que a área do terreno
	if (areaConstruida > areaTerreno) {
		MessageBox::Show("A área construída não pode ser maior que a área do terreno!",
			"Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tBareaConstruida->Clear(); // Limpa o campo de área construída
		tBareaConstruida->Focus();
	}
}

private: System::Void tBAreaTerreno_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Salva o texto atual digitado no campo
	String^ currentText = tBAreaTerreno->Text;

	// Remove caracteres não numéricos
	String^ validText = "";
	for each(Char c in currentText) {
		if (Char::IsDigit(c)) {
			validText += c; // Mantém apenas os dígitos
		}
	}

	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBAreaTerreno->SelectionStart; // Salva posição do cursor
		tBAreaTerreno->Text = validText;
		tBAreaTerreno->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}

	AtualizarCalculo(); // Atualiza o cálculo após a digitação
}

private: System::Void tBareaConstruida_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Salva o texto atual digitado no campo
	String^ currentText = tBareaConstruida->Text;

	// Remove caracteres não numéricos
	String^ validText = "";
	for each(Char c in currentText) {
		if (Char::IsDigit(c)) {
			validText += c; // Mantém apenas os dígitos
		}
	}

	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBareaConstruida->SelectionStart; // Salva posição do cursor
		tBareaConstruida->Text = validText;
		tBareaConstruida->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}

	AtualizarCalculo(); // Atualiza o cálculo após a digitação
}





private: System::Void tBnumero_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	// Salva o texto atual digitado no campo
	String^ currentText = tBnumero->Text;

	// Remove caracteres não numéricos
	String^ validText = "";
	for each (Char c in currentText) {
		if (Char::IsDigit(c)) {
			validText += c; // Mantém apenas os dígitos
		}
	}

	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBnumero->SelectionStart; // Salva posição do cursor
		tBnumero->Text = validText;
		tBnumero->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}
} // fim numero



private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	// Lista de opções no ComboBox
	cli::array<System::String^>^ opcoes = gcnew cli::array<System::String^> {
		"Venda", "Aluguel", "Venda ou Aluguel"
	};

	// Verificar se o índice selecionado é válido
	if (comboBox2->SelectedIndex != -1) {
		// Obter a opção selecionada
		System::String^ tipoNegocio = comboBox2->SelectedItem->ToString();

		// Exibir a opção selecionada no console para depuração
		System::Diagnostics::Debug::WriteLine("Tipo de negócio selecionado: " + tipoNegocio);

		// Atribuir a opção selecionada à variável correta
		TipoNegocio = tipoNegocio; // Variável deve ser global ou membro da classe
	}
	else {
		// Caso nenhum item esteja selecionado
		TipoNegocio = nullptr;
	}
}// fim de pretensao (venda ou aluguel)



private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	// Lista de opções no ComboBox
	cli::array<System::String^>^ opcoes = gcnew cli::array<System::String^> {
		"Casa", "Apartamento", "Terreno", "Kitnet",
			"Flat", "Sobrado", "Sítio", "Rancho", "Chácara"
	};

	// Verificar se o índice selecionado é válido
	if (comboBox1->SelectedIndex != -1) {
		// Obter a opção selecionada
		System::String^ tipoImovel = comboBox1->SelectedItem->ToString();

		// Exibir a opção selecionada no console para depuração
		System::Diagnostics::Debug::WriteLine("Tipo de imóvel selecionado: " + tipoImovel);

		// Atribuir a opção selecionada à variável correta
		TipoImovel = tipoImovel; // Variável deve ser global ou membro da classe
	}
	else {
		// Caso nenhum item esteja selecionado
		TipoImovel = nullptr;

	}
}// fim tipo de imovel

private: System::Void tBtelefone_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Salva o texto atual digitado no campo
	String^ currentText = tBtelefone->Text;

	// Remove caracteres não numéricos
	String^ numericText = "";
	int cursorPosition = tBtelefone->SelectionStart; // Salva posição do cursor

	for each(Char c in currentText) {
		if (Char::IsDigit(c)) {
			numericText += c;
		}
	}

	// Aplica a formatação correta
	String^ formattedText = "";
	int length = numericText->Length;

	if (length > 0) {
		formattedText = "(" + numericText->Substring(0, Math::Min(2, length));

		if (length >= 3) {
			if (length >= 11) { // Celular com 9 dígitos
				formattedText += ") " + numericText->Substring(2, 5) + "-" + numericText->Substring(7, Math::Min(4, length - 7));
			}
			else if (length >= 10) { // Telefone fixo com 8 dígitos
				formattedText += ") " + numericText->Substring(2, 4) + "-" + numericText->Substring(6, Math::Min(4, length - 6));
			}
			else { // Número incompleto, adiciona o que for possível
				formattedText += ") " + numericText->Substring(2);
			}
		}
	}

	// Atualiza o campo se o texto original foi alterado
	if (currentText != formattedText) {
		tBtelefone->Text = formattedText;

		// Ajusta a posição do cursor corretamente
		int diff = formattedText->Length - currentText->Length;
		tBtelefone->SelectionStart = Math::Min(cursorPosition + diff, formattedText->Length);
	}
	
}
	   
private: System::Void tBemail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ email = tBemail->Text->Trim();

	// Se o usuário ainda não digitou ".com" ou ".com.br", não valida
	if (!(email->EndsWith(".com") || email->EndsWith(".com.br"))) {
		return;
	}

	// Lista de domínios permitidos
	array<String^>^ dominiosPermitidos = {
		"@gmail.com", "@outlook.com", "@protonmail.com", "@zoho.com",
		"@yahoo.com", "@icloud.com", "@gmx.com", "@aol.com",
		"@fastmail.com", "@tutanota.com","@gmail.com.br", "@outlook.com.br", 
		"@protonmail.com.br", "@zoho.com.br","@yahoo.com.br", "@icloud.com.br", 
		"@gmx.com.br", "@aol.com.br","@fastmail.com.br", "@tutanota.com.br",
		"@hotmail.com"
	};

	// Verifica se o domínio digitado é permitido
	bool dominioValido = false;
	for each(String ^ dominio in dominiosPermitidos) {
		if (email->EndsWith(dominio)) {
			dominioValido = true;
			break;
		}
	}

	// Se o domínio for inválido, exibe erro
	if (!dominioValido) {
		MessageBox::Show("E-mail inválido! Utilize apenas domínios permitidos.",
			"Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tBemail->Focus(); // Retorna o foco para o campo
	}
}



 // Funcao para salvar tudo

private: System::Void linkLabel4_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	String^ name = tBNomeProprie->Text;
	String^ telefone = tBtelefone->Text;
	String^ email = tBemail->Text;
	String^ CEP = tBCep->Text;
	String^ rua = tBrua->Text;
	String^ bairro = tBbairro->Text;
	String^ cidade = tBcidade->Text;
	String^ numero = tBnumero->Text;
	String^ complemento = tBcomplemento->Text;
	String^ valor = tBvalor->Text->Trim();
	String^ AreaTerreno = tBAreaTerreno->Text;
	String^ AreaConstruida = tBareaConstruida->Text;
	String^ Descricao = tBdescricao->Text;
	ConfigBanco banco;
	// remover espaços e caracteres especiais 




	if (name->Length == 0 || telefone->Length == 0 || AreaConstruida->Length == 0
		|| rua->Length == 0 || bairro->Length == 0 || cidade->Length == 0 || numero->Length == 0 || valor->Length == 0 || Descricao->Length == 0
		|| AreaTerreno->Length == 0 || TipoNegocio == nullptr || TipoNegocio->Length == 0 || TipoImovel == nullptr || TipoImovel->Length == 0)
	{
		MessageBox::Show("Por favor digite todos os valores",
			"Atenção", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		return;
	}

	
	try {
		String^ connString = banco.GetConnectionString();
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO Imoveis$" +
			"(nome, telefone, email, Tipo_Imovel, TipoNegocio, cep, rua, bairro, cidade, numero, complemento, valor, Area_terreno, Area_Construcao, Descricao) VALUES " +
			"(@nome, @telefone, @email, @Tipo_Imovel, @TipoNegocio, @cep, @rua, @bairro, @cidade, @numero, @complemento, @valor, @Area_terreno, @Area_Construcao, @Descricao);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@nome", name);
		command.Parameters->AddWithValue("@telefone", telefone);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@TipoNegocio", TipoNegocio);
		command.Parameters->AddWithValue("@Tipo_Imovel", TipoImovel);
		command.Parameters->AddWithValue("@rua", rua);
		command.Parameters->AddWithValue("@bairro", bairro);
		command.Parameters->AddWithValue("@cidade", cidade);
		command.Parameters->AddWithValue("@cep", CEP);
		command.Parameters->AddWithValue("@numero", numero);
		command.Parameters->AddWithValue("@complemento", complemento);
		command.Parameters->AddWithValue("@valor", valor);
		command.Parameters->AddWithValue("@Area_terreno", AreaTerreno);
		command.Parameters->AddWithValue("@Area_Construcao", AreaConstruida);
		command.Parameters->AddWithValue("@Descricao", Descricao);

		command.ExecuteNonQuery();
		MessageBox::Show("Cadastro realizado com sucesso!", "Sucesso", MessageBoxButtons::OK);

		// Limpar todos os TextBox após cadastro
		tBNomeProprie->Clear();
		tBtelefone->Clear();
		tBemail->Clear();
		tBrua->Clear();
		tBbairro->Clear();
		tBcidade->Clear();
		tBvalor->Clear();
		tBAreaTerreno->Clear();
		tBareaConstruida->Clear();
		tBCep->Clear();
		tBnumero->Clear();
		tBcomplemento->Clear();

		tBdescricao->Clear();

		// Limpar as seleções do ComboBox
		comboBox1->SelectedIndex = -1; // Remove a seleção do ComboBox para Tipo de Imóvel
		comboBox2->SelectedIndex = -1; // Remove a seleção do ComboBox para Tipo de Negócio


		sqlConn.Close();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Erro ao salvar os dados: " + ex->Message,
			"Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void linkLabelValidarCep_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		// Obtém o CEP do campo tBCep
		String^ CEP = tBCep->Text;
		// Remover espaços e caracteres desnecessários
		CEP = CEP->Trim()->Replace(" ", "")->Replace("-", "");

		try {
			// Validação básica do CEP (8 dígitos)
			if (CEP->Length != 8 || !System::Text::RegularExpressions::Regex::IsMatch(CEP, "^\\d{8}$")) {
				MessageBox::Show("CEP inválido. Certifique-se de que contém exatamente 8 dígitos numéricos.",
					"Erro no CEP", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}


			// URL da API ViaCEP
			String^ url = "https://viacep.com.br/ws/" + CEP + "/json/";
			HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(url));
			request->Method = "GET";

			// Enviar requisição e obter resposta
			HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse());
			Stream^ responseStream = response->GetResponseStream();
			StreamReader^ reader = gcnew StreamReader(responseStream);
			String^ jsonResponse = reader->ReadToEnd();

			// Exibe o JSON retornado (opcional, para depuração)
			// MessageBox::Show("JSON retornado: " + jsonResponse, "Depuração", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Verifica se a API retornou um erro
			if (jsonResponse->Contains("\"erro\"")) {
				MessageBox::Show("CEP não encontrado. Verifique o número informado.",
					"Erro no CEP", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Usando expressões regulares para extrair os dados do JSON
			String^ logradouro = System::Text::RegularExpressions::Regex::Match(jsonResponse, "\"logradouro\"\\s*:\\s*\"([^\"]*)\"")->Groups[1]->Value;
			String^ bairro = System::Text::RegularExpressions::Regex::Match(jsonResponse, "\"bairro\"\\s*:\\s*\"([^\"]*)\"")->Groups[1]->Value;
			String^ localidade = System::Text::RegularExpressions::Regex::Match(jsonResponse, "\"localidade\"\\s*:\\s*\"([^\"]*)\"")->Groups[1]->Value;
			String^ uf = System::Text::RegularExpressions::Regex::Match(jsonResponse, "\"uf\"\\s*:\\s*\"([^\"]*)\"")->Groups[1]->Value;


			// Substituir valores vazios por "Informação não disponível"
			if (String::IsNullOrEmpty(logradouro)) logradouro = "Informação não disponível";
			if (String::IsNullOrEmpty(bairro)) bairro = "Informação não disponível";
			if (String::IsNullOrEmpty(localidade)) localidade = "Informação não disponível";
			if (String::IsNullOrEmpty(uf)) uf = "Informação não disponível";

			// Preencher o campo tBendereco com os dados obtidos
			tBrua->Text = logradouro;
			tBbairro->Text = bairro;
			tBcidade->Text = localidade + " - " + uf;

			// Fechar os fluxos e a resposta
			reader->Close();
			responseStream->Close();
			response->Close();

			// Mensagem de sucesso
			MessageBox::Show("Endereço preenchido com sucesso!", "Sucesso", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
		catch (Exception^ ex) {
			MessageBox::Show("Erro ao buscar o endereço pelo CEP: " + ex->Message,
				"Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
}
	  
	   public: bool switchToLista = false;

private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLista = true;
	eImobweb::ListaDeImoveisForm^ listaForm = gcnew eImobweb::ListaDeImoveisForm();
	listaForm->Show(); // Abre a nova janela, mantendo a atual aberta
}

public: bool switchToImobiliaria = false;

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToImobiliaria = true;
	eImobweb::ImobiliariaForm^ imobiliariaForm = gcnew eImobweb::ImobiliariaForm();
	imobiliariaForm->Show(); // Abre a nova janela, mantendo a atual aberta
}

private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
}

public: bool switchToBanco = false;

private: System::Void linkLabel5_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToBanco = true;
	this->Close();
}

 public: bool switchToExcluir = false;
private: System::Void linkLabel10_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToExcluir = true;
	eImobweb::Excluirform^ Excluir = gcnew eImobweb::Excluirform();
	Excluir->Show(); // Abre a nova janela, mantendo a atual aberta
}


	   public: bool switchToEditar = false;
private: System::Void linkLabel11_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToEditar = true;
	eImobweb::EditarForm^ Editar = gcnew eImobweb::EditarForm();
	Editar->Show(); // Abre a nova janela, mantendo a atual aberta
}

	   public: bool switchToVenda = false;
 private: System::Void linkLabel7_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	 this->switchToVenda = true;
	 eImobweb::VendasForm^ Venda = gcnew eImobweb::VendasForm();
	 Venda->Show(); // Abre a nova janela, mantendo a atual aberta
 }
     public: bool switchToRelatorio = false;
private: System::Void linkLabel9_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRelatorio = true;
	eImobweb:RelatorioForm^ Relatorio = gcnew eImobweb::RelatorioForm();
	Relatorio->Show(); // Abre a nova janela, mantendo a atual aberta

}
private: System::Void linkLabel8_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	// Abre o link do GitHub
	System::Diagnostics::Process::Start("https://github.com/HenriqueDEV-code");
}




private: System::Void tBcidade_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void CadastroDeImoveisForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
