#pragma once
#include "ConfigBancoForm.h"
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
	/// Sumário para EditarForm
	/// </summary>
	public ref class EditarForm : public System::Windows::Forms::Form
	{
	public:
		EditarForm(void)
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
		~EditarForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel6;

	private: System::Windows::Forms::Label^ label3;





	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel8;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label7;





	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::TextBox^ tBBairroClienteEd;

	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::TextBox^ tBCidadeClienteEd;

	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::TextBox^ tBTelefoneClienteEd;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ tBNomeClienteEd;

	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::ComboBox^ BXPretencao;

	private: System::Windows::Forms::ComboBox^ BXTipoImovel;

	private: System::Windows::Forms::TextBox^ tBComplementoClienteEd;

	private: System::Windows::Forms::TextBox^ tBNumeroClienteEd;

	private: System::Windows::Forms::TextBox^ tBRuaClienteEd;

	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Panel^ panel17;


	private: System::Windows::Forms::Label^ label20;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;



	private: System::Windows::Forms::Label^ label24;


	private: System::Windows::Forms::Label^ label23;








	private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::TextBox^ tBIDClienteInfo;

private: System::Windows::Forms::Button^ buttonConcluirCliente;






	private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::TextBox^ tBIDNomeImobiliariaInfo;
private: System::Windows::Forms::Button^ buttonConcluirImobiliaria;



private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::TextBox^ tBValorImobiliariaEd;


private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::TextBox^ tBCreciImobiliariaEd;




private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::TextBox^ tBNomeImobiliariaEd;

private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::TextBox^ tBNomeIResponsavelImobiliariaEd;





private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::TextBox^ tBTelefoneImobiliariaEd;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Panel^ panel22;
private: System::Windows::Forms::TextBox^ tBCEP;

private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::LinkLabel^ linkLabelValidarCep;
private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ tBvalorClienteEd;
private: System::Windows::Forms::TextBox^ tBDescricaoClienteEd;



























































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditarForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->buttonConcluirCliente = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->tBvalorClienteEd = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->linkLabelValidarCep = (gcnew System::Windows::Forms::LinkLabel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->tBCEP = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->tBComplementoClienteEd = (gcnew System::Windows::Forms::TextBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->tBNumeroClienteEd = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->tBRuaClienteEd = (gcnew System::Windows::Forms::TextBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->tBBairroClienteEd = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->tBCidadeClienteEd = (gcnew System::Windows::Forms::TextBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->tBTelefoneClienteEd = (gcnew System::Windows::Forms::TextBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->tBNomeClienteEd = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->tBDescricaoClienteEd = (gcnew System::Windows::Forms::TextBox());
			this->BXPretencao = (gcnew System::Windows::Forms::ComboBox());
			this->BXTipoImovel = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->tBIDClienteInfo = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->buttonConcluirImobiliaria = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->tBNomeIResponsavelImobiliariaEd = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->tBTelefoneImobiliariaEd = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->tBValorImobiliariaEd = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tBCreciImobiliariaEd = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tBNomeImobiliariaEd = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->tBIDNomeImobiliariaInfo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel22->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel24->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1923, 122);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(253, 18);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1573, 81);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Editar Cadastro";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(13, 12);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(128, 91);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->buttonConcluirCliente);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 122);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1037, 671);
			this->panel2->TabIndex = 1;
			// 
			// buttonConcluirCliente
			// 
			this->buttonConcluirCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->buttonConcluirCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonConcluirCliente.Image")));
			this->buttonConcluirCliente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonConcluirCliente->Location = System::Drawing::Point(849, 590);
			this->buttonConcluirCliente->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonConcluirCliente->Name = L"buttonConcluirCliente";
			this->buttonConcluirCliente->Size = System::Drawing::Size(151, 57);
			this->buttonConcluirCliente->TabIndex = 91;
			this->buttonConcluirCliente->Text = L"Concluir";
			this->buttonConcluirCliente->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonConcluirCliente->UseVisualStyleBackColor = true;
			this->buttonConcluirCliente->Click += gcnew System::EventHandler(this, &EditarForm::buttonConcluirCliente_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(24, 143);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 29);
			this->label5->TabIndex = 63;
			this->label5->Text = L"Formulário";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->panel23);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->linkLabelValidarCep);
			this->panel7->Controls->Add(this->panel22);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Controls->Add(this->panel19);
			this->panel7->Controls->Add(this->panel18);
			this->panel7->Controls->Add(this->panel17);
			this->panel7->Controls->Add(this->panel16);
			this->panel7->Controls->Add(this->panel15);
			this->panel7->Controls->Add(this->panel14);
			this->panel7->Controls->Add(this->panel13);
			this->panel7->Controls->Add(this->panel12);
			this->panel7->Controls->Add(this->BXPretencao);
			this->panel7->Controls->Add(this->BXTipoImovel);
			this->panel7->Controls->Add(this->label22);
			this->panel7->Controls->Add(this->label19);
			this->panel7->Controls->Add(this->label18);
			this->panel7->Controls->Add(this->label17);
			this->panel7->Controls->Add(this->label16);
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Location = System::Drawing::Point(29, 174);
			this->panel7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(971, 408);
			this->panel7->TabIndex = 62;
			// 
			// panel23
			// 
			this->panel23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel23->Controls->Add(this->tBvalorClienteEd);
			this->panel23->Location = System::Drawing::Point(709, 206);
			this->panel23->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(187, 24);
			this->panel23->TabIndex = 96;
			// 
			// tBvalorClienteEd
			// 
			this->tBvalorClienteEd->Location = System::Drawing::Point(-3, -2);
			this->tBvalorClienteEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBvalorClienteEd->Name = L"tBvalorClienteEd";
			this->tBvalorClienteEd->Size = System::Drawing::Size(187, 22);
			this->tBvalorClienteEd->TabIndex = 94;
			this->tBvalorClienteEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBvalorClienteEd_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(639, 201);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 29);
			this->label8->TabIndex = 95;
			this->label8->Text = L"Valor";
			// 
			// linkLabelValidarCep
			// 
			this->linkLabelValidarCep->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->linkLabelValidarCep->AutoSize = true;
			this->linkLabelValidarCep->Location = System::Drawing::Point(841, 116);
			this->linkLabelValidarCep->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabelValidarCep->Name = L"linkLabelValidarCep";
			this->linkLabelValidarCep->Size = System::Drawing::Size(91, 16);
			this->linkLabelValidarCep->TabIndex = 93;
			this->linkLabelValidarCep->TabStop = true;
			this->linkLabelValidarCep->Text = L"Validar o CEP";
			this->linkLabelValidarCep->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &EditarForm::linkLabelValidarCep_LinkClicked);
			// 
			// panel22
			// 
			this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel22->Controls->Add(this->tBCEP);
			this->panel22->Location = System::Drawing::Point(661, 112);
			this->panel22->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(171, 24);
			this->panel22->TabIndex = 92;
			// 
			// tBCEP
			// 
			this->tBCEP->Location = System::Drawing::Point(-3, -2);
			this->tBCEP->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBCEP->Name = L"tBCEP";
			this->tBCEP->Size = System::Drawing::Size(171, 22);
			this->tBCEP->TabIndex = 77;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(599, 108);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 29);
			this->label4->TabIndex = 91;
			this->label4->Text = L"CEP";
			// 
			// panel19
			// 
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel19->Controls->Add(this->tBComplementoClienteEd);
			this->panel19->Location = System::Drawing::Point(749, 160);
			this->panel19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(184, 24);
			this->panel19->TabIndex = 90;
			// 
			// tBComplementoClienteEd
			// 
			this->tBComplementoClienteEd->Location = System::Drawing::Point(-3, -2);
			this->tBComplementoClienteEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBComplementoClienteEd->Name = L"tBComplementoClienteEd";
			this->tBComplementoClienteEd->Size = System::Drawing::Size(184, 22);
			this->tBComplementoClienteEd->TabIndex = 80;
			// 
			// panel18
			// 
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel18->Controls->Add(this->tBNumeroClienteEd);
			this->panel18->Location = System::Drawing::Point(491, 160);
			this->panel18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(87, 24);
			this->panel18->TabIndex = 89;
			// 
			// tBNumeroClienteEd
			// 
			this->tBNumeroClienteEd->Location = System::Drawing::Point(-3, -2);
			this->tBNumeroClienteEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBNumeroClienteEd->Name = L"tBNumeroClienteEd";
			this->tBNumeroClienteEd->Size = System::Drawing::Size(87, 22);
			this->tBNumeroClienteEd->TabIndex = 79;
			this->tBNumeroClienteEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBNumeroClienteEd_TextChanged);
			// 
			// panel17
			// 
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel17->Controls->Add(this->tBRuaClienteEd);
			this->panel17->Location = System::Drawing::Point(133, 160);
			this->panel17->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(252, 24);
			this->panel17->TabIndex = 88;
			// 
			// tBRuaClienteEd
			// 
			this->tBRuaClienteEd->Location = System::Drawing::Point(-3, -2);
			this->tBRuaClienteEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBRuaClienteEd->Name = L"tBRuaClienteEd";
			this->tBRuaClienteEd->ReadOnly = true;
			this->tBRuaClienteEd->Size = System::Drawing::Size(253, 22);
			this->tBRuaClienteEd->TabIndex = 78;
			this->tBRuaClienteEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBRuaClienteEd_TextChanged);
			// 
			// panel16
			// 
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel16->Controls->Add(this->tBBairroClienteEd);
			this->panel16->Location = System::Drawing::Point(419, 112);
			this->panel16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(171, 24);
			this->panel16->TabIndex = 87;
			// 
			// tBBairroClienteEd
			// 
			this->tBBairroClienteEd->Location = System::Drawing::Point(-3, -2);
			this->tBBairroClienteEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBBairroClienteEd->Name = L"tBBairroClienteEd";
			this->tBBairroClienteEd->ReadOnly = true;
			this->tBBairroClienteEd->Size = System::Drawing::Size(171, 22);
			this->tBBairroClienteEd->TabIndex = 77;
			this->tBBairroClienteEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBBairroClienteEd_TextChanged);
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel15->Controls->Add(this->tBCidadeClienteEd);
			this->panel15->Location = System::Drawing::Point(89, 112);
			this->panel15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(244, 24);
			this->panel15->TabIndex = 86;
			// 
			// tBCidadeClienteEd
			// 
			this->tBCidadeClienteEd->Location = System::Drawing::Point(-3, -2);
			this->tBCidadeClienteEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBCidadeClienteEd->Name = L"tBCidadeClienteEd";
			this->tBCidadeClienteEd->ReadOnly = true;
			this->tBCidadeClienteEd->Size = System::Drawing::Size(244, 22);
			this->tBCidadeClienteEd->TabIndex = 76;
			this->tBCidadeClienteEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBCidadeClienteEd_TextChanged);
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel14->Controls->Add(this->tBTelefoneClienteEd);
			this->panel14->Location = System::Drawing::Point(108, 65);
			this->panel14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(191, 24);
			this->panel14->TabIndex = 85;
			// 
			// tBTelefoneClienteEd
			// 
			this->tBTelefoneClienteEd->Location = System::Drawing::Point(-3, -1);
			this->tBTelefoneClienteEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBTelefoneClienteEd->Name = L"tBTelefoneClienteEd";
			this->tBTelefoneClienteEd->Size = System::Drawing::Size(191, 22);
			this->tBTelefoneClienteEd->TabIndex = 75;
			this->tBTelefoneClienteEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBTelefoneClienteEd_TextChanged);
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel13->Controls->Add(this->tBNomeClienteEd);
			this->panel13->Location = System::Drawing::Point(81, 18);
			this->panel13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(196, 24);
			this->panel13->TabIndex = 84;
			// 
			// tBNomeClienteEd
			// 
			this->tBNomeClienteEd->Location = System::Drawing::Point(-3, -2);
			this->tBNomeClienteEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBNomeClienteEd->Name = L"tBNomeClienteEd";
			this->tBNomeClienteEd->Size = System::Drawing::Size(196, 22);
			this->tBNomeClienteEd->TabIndex = 74;
			this->tBNomeClienteEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBNomeClienteEd_TextChanged);
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->Controls->Add(this->tBDescricaoClienteEd);
			this->panel12->Location = System::Drawing::Point(9, 278);
			this->panel12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(952, 109);
			this->panel12->TabIndex = 83;
			// 
			// tBDescricaoClienteEd
			// 
			this->tBDescricaoClienteEd->Location = System::Drawing::Point(-3, -6);
			this->tBDescricaoClienteEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBDescricaoClienteEd->Multiline = true;
			this->tBDescricaoClienteEd->Name = L"tBDescricaoClienteEd";
			this->tBDescricaoClienteEd->Size = System::Drawing::Size(952, 109);
			this->tBDescricaoClienteEd->TabIndex = 92;
			// 
			// BXPretencao
			// 
			this->BXPretencao->FormattingEnabled = true;
			this->BXPretencao->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Venda", L"Aluguel", L"Venda ou Aluguel" });
			this->BXPretencao->Location = System::Drawing::Point(469, 204);
			this->BXPretencao->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BXPretencao->Name = L"BXPretencao";
			this->BXPretencao->Size = System::Drawing::Size(160, 24);
			this->BXPretencao->TabIndex = 82;
			// 
			// BXTipoImovel
			// 
			this->BXTipoImovel->FormattingEnabled = true;
			this->BXTipoImovel->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Casa", L"Apartamento", L"Terreno", L"Kitnet",
					L"Flat", L"Sobrado", L"Sítio", L"Rancho", L"Chácara"
			});
			this->BXTipoImovel->Location = System::Drawing::Point(178, 204);
			this->BXTipoImovel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->BXTipoImovel->Name = L"BXTipoImovel";
			this->BXTipoImovel->Size = System::Drawing::Size(160, 24);
			this->BXTipoImovel->TabIndex = 81;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(4, 246);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(121, 29);
			this->label22->TabIndex = 73;
			this->label22->Text = L"Descrição";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(353, 202);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(123, 29);
			this->label19->TabIndex = 71;
			this->label19->Text = L"Pretensão";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(4, 204);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(174, 29);
			this->label18->TabIndex = 70;
			this->label18->Text = L"Tipo de imóvel";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(587, 156);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(165, 29);
			this->label17->TabIndex = 69;
			this->label17->Text = L"Complemento";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(395, 156);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 29);
			this->label16->TabIndex = 68;
			this->label16->Text = L"Número";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(4, 156);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(151, 29);
			this->label15->TabIndex = 67;
			this->label15->Text = L"Lougradouro";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(343, 108);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(78, 29);
			this->label14->TabIndex = 66;
			this->label14->Text = L"Bairro";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(4, 108);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(91, 29);
			this->label13->TabIndex = 65;
			this->label13->Text = L"Cidade";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(4, 62);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(110, 29);
			this->label12->TabIndex = 64;
			this->label12->Text = L"Telefone";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(4, 15);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(79, 29);
			this->label11->TabIndex = 62;
			this->label11->Text = L"Nome";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->button1);
			this->panel6->Controls->Add(this->panel21);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->label21);
			this->panel6->Location = System::Drawing::Point(6, 46);
			this->panel6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1027, 77);
			this->panel6->TabIndex = 61;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(423, 15);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 47);
			this->button1->TabIndex = 92;
			this->button1->Text = L"Buscar";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditarForm::button1_Click);
			// 
			// panel21
			// 
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel21->Controls->Add(this->tBIDClienteInfo);
			this->panel21->Location = System::Drawing::Point(323, 26);
			this->panel21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(91, 22);
			this->panel21->TabIndex = 61;
			// 
			// tBIDClienteInfo
			// 
			this->tBIDClienteInfo->Location = System::Drawing::Point(-3, -4);
			this->tBIDClienteInfo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBIDClienteInfo->Name = L"tBIDClienteInfo";
			this->tBIDClienteInfo->Size = System::Drawing::Size(91, 22);
			this->tBIDClienteInfo->TabIndex = 60;
			this->tBIDClienteInfo->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBIDClienteInfo_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 22);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(310, 29);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Informe o código do Cliente";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(392, 9);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(12, 16);
			this->label21->TabIndex = 58;
			this->label21->Text = L"*";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(331, 1);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(272, 29);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Editar dados de Imóveis";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->buttonConcluirImobiliaria);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->panel8);
			this->panel3->Controls->Add(this->panel9);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(1039, 123);
			this->panel3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel3->MaximumSize = System::Drawing::Size(996, 664);
			this->panel3->MinimumSize = System::Drawing::Size(996, 664);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(996, 664);
			this->panel3->TabIndex = 2;
			// 
			// buttonConcluirImobiliaria
			// 
			this->buttonConcluirImobiliaria->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->buttonConcluirImobiliaria->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonConcluirImobiliaria.Image")));
			this->buttonConcluirImobiliaria->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonConcluirImobiliaria->Location = System::Drawing::Point(699, 441);
			this->buttonConcluirImobiliaria->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->buttonConcluirImobiliaria->Name = L"buttonConcluirImobiliaria";
			this->buttonConcluirImobiliaria->Size = System::Drawing::Size(149, 57);
			this->buttonConcluirImobiliaria->TabIndex = 92;
			this->buttonConcluirImobiliaria->Text = L"Concluir";
			this->buttonConcluirImobiliaria->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonConcluirImobiliaria->UseVisualStyleBackColor = true;
			this->buttonConcluirImobiliaria->Click += gcnew System::EventHandler(this, &EditarForm::buttonConcluirImobiliaria_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(13, 143);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 29);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Formulário";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->panel20);
			this->panel8->Controls->Add(this->panel11);
			this->panel8->Controls->Add(this->panel10);
			this->panel8->Controls->Add(this->panel5);
			this->panel8->Controls->Add(this->label26);
			this->panel8->Controls->Add(this->panel4);
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->label24);
			this->panel8->Controls->Add(this->label23);
			this->panel8->Controls->Add(this->label20);
			this->panel8->Location = System::Drawing::Point(19, 175);
			this->panel8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(829, 258);
			this->panel8->TabIndex = 66;
			// 
			// panel20
			// 
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel20->Controls->Add(this->tBNomeIResponsavelImobiliariaEd);
			this->panel20->Location = System::Drawing::Point(260, 59);
			this->panel20->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(208, 24);
			this->panel20->TabIndex = 93;
			// 
			// tBNomeIResponsavelImobiliariaEd
			// 
			this->tBNomeIResponsavelImobiliariaEd->Location = System::Drawing::Point(-3, -2);
			this->tBNomeIResponsavelImobiliariaEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBNomeIResponsavelImobiliariaEd->Name = L"tBNomeIResponsavelImobiliariaEd";
			this->tBNomeIResponsavelImobiliariaEd->Size = System::Drawing::Size(208, 22);
			this->tBNomeIResponsavelImobiliariaEd->TabIndex = 94;
			this->tBNomeIResponsavelImobiliariaEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBNomeIResponsavelImobiliariaEd_TextChanged);
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Controls->Add(this->tBTelefoneImobiliariaEd);
			this->panel11->Location = System::Drawing::Point(261, 112);
			this->panel11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(207, 24);
			this->panel11->TabIndex = 93;
			// 
			// tBTelefoneImobiliariaEd
			// 
			this->tBTelefoneImobiliariaEd->Location = System::Drawing::Point(-3, -2);
			this->tBTelefoneImobiliariaEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBTelefoneImobiliariaEd->Name = L"tBTelefoneImobiliariaEd";
			this->tBTelefoneImobiliariaEd->Size = System::Drawing::Size(207, 22);
			this->tBTelefoneImobiliariaEd->TabIndex = 94;
			this->tBTelefoneImobiliariaEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBTelefoneImobiliariaEd_TextChanged);
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Controls->Add(this->tBValorImobiliariaEd);
			this->panel10->Location = System::Drawing::Point(260, 154);
			this->panel10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(131, 24);
			this->panel10->TabIndex = 93;
			// 
			// tBValorImobiliariaEd
			// 
			this->tBValorImobiliariaEd->Location = System::Drawing::Point(-3, -2);
			this->tBValorImobiliariaEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBValorImobiliariaEd->Name = L"tBValorImobiliariaEd";
			this->tBValorImobiliariaEd->Size = System::Drawing::Size(131, 22);
			this->tBValorImobiliariaEd->TabIndex = 94;
			this->tBValorImobiliariaEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBValorImobiliariaEd_TextChanged);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->tBCreciImobiliariaEd);
			this->panel5->Location = System::Drawing::Point(260, 198);
			this->panel5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(131, 24);
			this->panel5->TabIndex = 93;
			// 
			// tBCreciImobiliariaEd
			// 
			this->tBCreciImobiliariaEd->Location = System::Drawing::Point(-3, -2);
			this->tBCreciImobiliariaEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBCreciImobiliariaEd->Name = L"tBCreciImobiliariaEd";
			this->tBCreciImobiliariaEd->Size = System::Drawing::Size(131, 22);
			this->tBCreciImobiliariaEd->TabIndex = 77;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(187, 198);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(70, 29);
			this->label26->TabIndex = 75;
			this->label26->Text = L"Creci";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->tBNomeImobiliariaEd);
			this->panel4->Location = System::Drawing::Point(261, 18);
			this->panel4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(207, 24);
			this->panel4->TabIndex = 76;
			// 
			// tBNomeImobiliariaEd
			// 
			this->tBNomeImobiliariaEd->Location = System::Drawing::Point(-3, -2);
			this->tBNomeImobiliariaEd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBNomeImobiliariaEd->Name = L"tBNomeImobiliariaEd";
			this->tBNomeImobiliariaEd->Size = System::Drawing::Size(207, 22);
			this->tBNomeImobiliariaEd->TabIndex = 77;
			this->tBNomeImobiliariaEd->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBNomeImobiliariaEd_TextChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(187, 154);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(69, 29);
			this->label25->TabIndex = 74;
			this->label25->Text = L"Valor";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(151, 106);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(116, 29);
			this->label24->TabIndex = 70;
			this->label24->Text = L"Telefone ";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(4, 59);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(259, 29);
			this->label23->TabIndex = 67;
			this->label23->Text = L"Nome do Responsável";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(63, 15);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(197, 29);
			this->label20->TabIndex = 63;
			this->label20->Text = L"Nome Imobiliária";
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Controls->Add(this->button2);
			this->panel9->Controls->Add(this->panel24);
			this->panel9->Controls->Add(this->label7);
			this->panel9->Controls->Add(this->label10);
			this->panel9->Location = System::Drawing::Point(9, 46);
			this->panel9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(857, 77);
			this->panel9->TabIndex = 65;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EditarForm::panel9_Paint);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(444, 15);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 47);
			this->button2->TabIndex = 93;
			this->button2->Text = L"Buscar";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EditarForm::button2_Click);
			// 
			// panel24
			// 
			this->panel24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel24->Controls->Add(this->tBIDNomeImobiliariaInfo);
			this->panel24->Location = System::Drawing::Point(351, 31);
			this->panel24->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(84, 22);
			this->panel24->TabIndex = 77;
			// 
			// tBIDNomeImobiliariaInfo
			// 
			this->tBIDNomeImobiliariaInfo->Location = System::Drawing::Point(-3, -4);
			this->tBIDNomeImobiliariaInfo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tBIDNomeImobiliariaInfo->Name = L"tBIDNomeImobiliariaInfo";
			this->tBIDNomeImobiliariaInfo->Size = System::Drawing::Size(84, 22);
			this->tBIDNomeImobiliariaInfo->TabIndex = 60;
			this->tBIDNomeImobiliariaInfo->TextChanged += gcnew System::EventHandler(this, &EditarForm::tBIDNomeImobiliariaInfo_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(4, 26);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(345, 29);
			this->label7->TabIndex = 56;
			this->label7->Text = L"Informe o código da imobiliária";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(421, 12);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(12, 16);
			this->label10->TabIndex = 58;
			this->label10->Text = L"*";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(372, 1);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(301, 29);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Editar dados de Imobiliária";
			// 
			// EditarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1923, 793);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximumSize = System::Drawing::Size(1941, 840);
			this->MinimumSize = System::Drawing::Size(1917, 840);
			this->Name = L"EditarForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"  e-Imobweb";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}





private: System::Void tBIDClienteInfo_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	// Salva o texto atual digitado no campo
	String^ currentText = tBIDClienteInfo->Text;

	// Remove caracteres não numéricos
	String^ validText = "";
	for each (Char c in currentText) {
		if (Char::IsDigit(c)) {
			validText += c; // Mantém apenas os dígitos
		}
	}

	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBIDClienteInfo->SelectionStart; // Salva posição do cursor
		tBIDClienteInfo->Text = validText;
		tBIDClienteInfo->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor

	}
}


private: System::Void tBClienteIInfo_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}


private: System::Void tBNomeClienteEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ validText = "";
	// Salva o texto atual digitado no campo

	String^ currentText = tBNomeClienteEd->Text;

	// Remover caracteres que nao sao letras
	for each (Char c in currentText)
	{
		if (Char::IsLetter(c) || Char::IsWhiteSpace(c))
		{
			validText += c; // Manter apenas letras e espaços
		}
	}
	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBNomeClienteEd->SelectionStart; // Salva a posição do cursor
		tBNomeClienteEd->Text = validText;
		tBNomeClienteEd->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}
}
private: System::Void tBTelefoneClienteEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Salva o texto atual digitado no campo
	String^ currentText = tBTelefoneClienteEd->Text;

	// Remove caracteres não numéricos
	String^ numericText = "";
	int cursorPosition = tBTelefoneClienteEd->SelectionStart; // Salva posição do cursor

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
		tBTelefoneClienteEd->Text = formattedText;

		// Ajusta a posição do cursor corretamente
		int diff = formattedText->Length - currentText->Length;
		tBTelefoneClienteEd->SelectionStart = Math::Min(cursorPosition + diff, formattedText->Length);
	}
}


private: System::Void tBCidadeClienteEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ validText = "";
	// Salva o texto atual digitado no campo

	String^ currentText = tBCidadeClienteEd->Text;

	// Remover caracteres que nao sao letras
	for each (Char c in currentText)
	{
		if (Char::IsLetter(c) || Char::IsWhiteSpace(c))
		{
			validText += c; // Manter apenas letras e espaços
		}
	}
	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBCidadeClienteEd->SelectionStart; // Salva a posição do cursor
		tBCidadeClienteEd->Text = validText;
		tBCidadeClienteEd->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}
}
private: System::Void tBBairroClienteEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ validText = "";
	// Salva o texto atual digitado no campo

	String^ currentText = tBBairroClienteEd->Text;

	// Remover caracteres que nao sao letras
	for each (Char c in currentText)
	{
		if (Char::IsLetter(c) || Char::IsWhiteSpace(c))
		{
			validText += c; // Manter apenas letras e espaços
		}
	}
	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBBairroClienteEd->SelectionStart; // Salva a posição do cursor
		tBBairroClienteEd->Text = validText;
		tBBairroClienteEd->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}
}
private: System::Void tBRuaClienteEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ validText = "";
	// Salva o texto atual digitado no campo

	String^ currentText = tBRuaClienteEd->Text;

	// Remover caracteres que nao sao letras
	for each (Char c in currentText)
	{
		if (Char::IsLetter(c) || Char::IsWhiteSpace(c))
		{
			validText += c; // Manter apenas letras e espaços
		}
	}
	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBRuaClienteEd->SelectionStart; // Salva a posição do cursor
		tBRuaClienteEd->Text = validText;
		tBRuaClienteEd->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}
}

private: System::Void tBNumeroClienteEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	// Salva o texto atual digitado no campo
	String^ currentText = tBNumeroClienteEd->Text;

	// Remove caracteres não numéricos
	String^ validText = "";
	for each (Char c in currentText) {
		if (Char::IsDigit(c)) {
			validText += c; // Mantém apenas os dígitos
		}
	}

	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBNumeroClienteEd->SelectionStart; // Salva posição do cursor
		tBNumeroClienteEd->Text = validText;
		tBNumeroClienteEd->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor

	}
}

private: System::Void tBIDNomeImobiliariaInfo_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	// Salva o texto atual digitado no campo
	String^ currentText = tBIDNomeImobiliariaInfo->Text;

	// Remove caracteres não numéricos
	String^ validText = "";
	for each(Char c in currentText) {
		if (Char::IsDigit(c)) {
			validText += c; // Mantém apenas os dígitos
		}
	}

	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBIDNomeImobiliariaInfo->SelectionStart; // Salva posição do cursor
		tBIDNomeImobiliariaInfo->Text = validText;
		tBIDNomeImobiliariaInfo->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor

	}
}

private: System::Void tBImobiliariaInfo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tBNomeImobiliariaEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ validText = "";
	// Salva o texto atual digitado no campo

	String^ currentText = tBNomeImobiliariaEd->Text;

	// Remover caracteres que nao sao letras
	for each(Char c in currentText)
	{
		if (Char::IsLetter(c) || Char::IsWhiteSpace(c))
		{
			validText += c; // Manter apenas letras e espaços
		}
	}
	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBNomeImobiliariaEd->SelectionStart; // Salva a posição do cursor
		tBNomeImobiliariaEd->Text = validText;
		tBNomeImobiliariaEd->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}
}
private: System::Void tBNomeIResponsavelImobiliariaEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ validText = "";
	// Salva o texto atual digitado no campo

	String^ currentText = tBNomeIResponsavelImobiliariaEd->Text;

	// Remover caracteres que nao sao letras
	for each(Char c in currentText)
	{
		if (Char::IsLetter(c) || Char::IsWhiteSpace(c))
		{
			validText += c; // Manter apenas letras e espaços
		}
	}
	// Se o texto original tiver sido alterado, atualiza o campo com o texto válido
	if (currentText != validText) {
		int cursorPosition = tBNomeIResponsavelImobiliariaEd->SelectionStart; // Salva a posição do cursor
		tBNomeIResponsavelImobiliariaEd->Text = validText;
		tBNomeIResponsavelImobiliariaEd->SelectionStart = Math::Min(cursorPosition, validText->Length); // Restaura a posição do cursor
	}
}
private: System::Void tBValorImobiliariaEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	// Salva o texto atual digitado no campo
	String^ currentText = tBValorImobiliariaEd->Text;

	// Remove caracteres não numéricos
	String^ numericPart = "";
	for each(Char c in currentText) {
		if (Char::IsDigit(c)) {
			numericPart += c;
		}
	}

	// Se não houver números, define como "0,00"
	if (numericPart->Length == 0) {
		tBValorImobiliariaEd->Text = "R$ 0,00";
		return;
	}

	// Converte a string numérica para um valor decimal correto
	double valorNumerico = Convert::ToDouble(numericPart) / 100.0; // Sempre desloca dois dígitos para os centavos

	// Formata corretamente para moeda brasileira
	tBValorImobiliariaEd->Text = "R$ " + valorNumerico.ToString("#,##0.00", CultureInfo::CreateSpecificCulture("pt-BR"));

	// Move o cursor para o final do texto
	tBValorImobiliariaEd->SelectionStart = tBValorImobiliariaEd->Text->Length;
	
}
	   // botao cliente info
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// Verifica se o campo ID está preenchido
	if (String::IsNullOrWhiteSpace(tBIDClienteInfo->Text->Trim())) {
		MessageBox::Show("Digite o ID do cliente.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Obtém o ID digitado
	int idCliente;
	if (!Int32::TryParse(tBIDClienteInfo->Text->Trim(), idCliente)) {
		MessageBox::Show("O ID do cliente deve ser um número válido.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	ConfigBanco banco;
	String^ connectionString = banco.GetConnectionString();
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	


	try {
		connection->Open();

		// Buscar os dados do cliente pelo ID
		String^ selectQuery = "SELECT nome, telefone, Tipo_Imovel, TipoNegocio, rua, bairro, cidade, numero, complemento, valor, Descricao FROM Imoveis$ WHERE id = @id";
		SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, connection);
		selectCommand->Parameters->AddWithValue("@id", idCliente);

		SqlDataReader^ reader = selectCommand->ExecuteReader();

		if (reader->Read()) {
			// Preenche os campos do formulário
			tBNomeClienteEd->Text = reader["nome"]->ToString();
			tBTelefoneClienteEd->Text = reader["telefone"]->ToString();
			BXTipoImovel->Text = reader["Tipo_Imovel"]->ToString();
			BXPretencao->Text = reader["TipoNegocio"]->ToString();
			tBCidadeClienteEd->Text = reader["cidade"]->ToString();
			tBBairroClienteEd->Text = reader["bairro"]->ToString();
			tBRuaClienteEd->Text = reader["rua"]->ToString();
			tBNumeroClienteEd->Text = reader["numero"]->ToString();
			tBComplementoClienteEd->Text = reader["complemento"]->ToString();
			tBvalorClienteEd->Text = reader["valor"]->ToString();
			tBDescricaoClienteEd->Text = reader["Descricao"]->ToString();
		}
		else {
			MessageBox::Show("Nenhum cliente encontrado com este ID.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		reader->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao acessar o banco de dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}

}

private: System::Void tBvalorClienteEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	// Salva o texto atual digitado no campo
	String^ currentText = tBvalorClienteEd->Text;

	// Remove caracteres não numéricos
	String^ numericPart = "";
	for each(Char c in currentText) {
		if (Char::IsDigit(c)) {
			numericPart += c;
		}
	}

	// Se não houver números, define como "0,00"
	if (numericPart->Length == 0) {
		tBvalorClienteEd->Text = "R$ 0,00";
		return;
	}

	// Converte a string numérica para um valor decimal correto
	double valorNumerico = Convert::ToDouble(numericPart) / 100.0; // Sempre desloca dois dígitos para os centavos

	// Formata corretamente para moeda brasileira
	tBvalorClienteEd->Text = "R$ " + valorNumerico.ToString("#,##0.00", CultureInfo::CreateSpecificCulture("pt-BR"));

	// Move o cursor para o final do texto
	tBvalorClienteEd->SelectionStart = tBvalorClienteEd->Text->Length;

}
private: System::Void tBTelefoneImobiliariaEd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		   
	// Salva o texto atual digitado no campo
	String^ currentText = tBTelefoneImobiliariaEd->Text;

	// Remove caracteres não numéricos
	String^ numericText = "";
	int cursorPosition = tBTelefoneImobiliariaEd->SelectionStart; // Salva posição do cursor

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
		tBTelefoneImobiliariaEd->Text = formattedText;

		// Ajusta a posição do cursor corretamente
		int diff = formattedText->Length - currentText->Length;
		tBTelefoneImobiliariaEd->SelectionStart = Math::Min(cursorPosition + diff, formattedText->Length);
	}
}


private: System::Void buttonConcluirCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verifica se o campo ID está preenchido
	if (String::IsNullOrWhiteSpace(tBIDClienteInfo->Text->Trim())) {
		MessageBox::Show("Digite o ID do cliente.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	int idCliente;
	if (!Int32::TryParse(tBIDClienteInfo->Text->Trim(), idCliente)) {
		MessageBox::Show("O ID do cliente deve ser um número válido.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Verifica se os campos obrigatórios estão preenchidos
	if (String::IsNullOrWhiteSpace(tBNomeClienteEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBTelefoneClienteEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(BXTipoImovel->Text->Trim()) ||
		String::IsNullOrWhiteSpace(BXPretencao->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBCidadeClienteEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBBairroClienteEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBRuaClienteEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBNumeroClienteEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBvalorClienteEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBDescricaoClienteEd->Text->Trim())) {

		MessageBox::Show("Todos os campos obrigatórios devem ser preenchidos.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	


	ConfigBanco banco;
	String^ connectionString = banco.GetConnectionString();
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();

		// Query de atualização
		String^ editQuery = "UPDATE Imoveis$ SET nome = @nome, telefone = @telefone, Tipo_Imovel = @Tipo_Imovel, TipoNegocio = @TipoNegocio, rua = @rua, bairro = @bairro, cidade = @cidade, numero = @numero, complemento = @complemento, valor = @valor, Descricao = @Descricao WHERE id = @id";

		SqlCommand^ editCommand = gcnew SqlCommand(editQuery, connection);
		editCommand->Parameters->AddWithValue("@nome", tBNomeClienteEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@telefone", tBTelefoneClienteEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@Tipo_Imovel", BXTipoImovel->Text->Trim());
		editCommand->Parameters->AddWithValue("@TipoNegocio", BXPretencao->Text->Trim());
		editCommand->Parameters->AddWithValue("@cidade", tBCidadeClienteEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@bairro", tBBairroClienteEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@rua", tBRuaClienteEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@numero", tBNumeroClienteEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@complemento", tBComplementoClienteEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@valor", tBvalorClienteEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@Descricao", tBDescricaoClienteEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@id", idCliente);

		int rowsAffected = editCommand->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Cadastro atualizado com sucesso!", "Sucesso", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Nenhum registro foi alterado. Verifique se o ID está correto.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao editar o cadastro: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}

}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verifica se o campo ID está preenchido
	if (String::IsNullOrWhiteSpace(tBIDNomeImobiliariaInfo->Text->Trim())) {
		MessageBox::Show("Digite o ID da Imobiliária.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Obtém o ID digitado
	int idCliente;
	if (!Int32::TryParse(tBIDNomeImobiliariaInfo->Text->Trim(), idCliente)) {
		MessageBox::Show("O ID do cliente deve ser um número válido.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	ConfigBanco banco;
	String^ connectionString = banco.GetConnectionString();
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	// @nome @nomeResponsavel @telefoneResp @creciSP @valorReal


	try {
		connection->Open();

		// Buscar os dados do cliente pelo ID
		String^ selectQuery = "SELECT nome, nomeResponsavel, telefoneResp, creciSP, valorReal  FROM Imobiliaria$ WHERE IdImobiliaria = @IdImobiliaria";
		SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, connection);
		selectCommand->Parameters->AddWithValue("@IdImobiliaria", idCliente);

		SqlDataReader^ reader = selectCommand->ExecuteReader();

		if (reader->Read()) {
			// Preenche os campos do formulário
			tBNomeImobiliariaEd->Text = reader["nome"]->ToString();
			tBNomeIResponsavelImobiliariaEd->Text = reader["nomeResponsavel"]->ToString();
			tBTelefoneImobiliariaEd->Text = reader["telefoneResp"]->ToString();
			tBValorImobiliariaEd->Text = reader["valorReal"]->ToString();
			tBCreciImobiliariaEd->Text = reader["creciSP"]->ToString();
		}
		else {
			MessageBox::Show("Nenhum cliente encontrado com este ID.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		reader->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao acessar o banco de dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}

}
private: System::Void buttonConcluirImobiliaria_Click(System::Object^ sender, System::EventArgs^ e) {

	// Verifica se o campo ID está preenchido
	if (String::IsNullOrWhiteSpace(tBIDNomeImobiliariaInfo->Text->Trim())) {
		MessageBox::Show("Digite o ID do cliente.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	int idCliente;
	if (!Int32::TryParse(tBIDNomeImobiliariaInfo->Text->Trim(), idCliente)) {
		MessageBox::Show("O ID do cliente deve ser um número válido.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Verifica se os campos obrigatórios estão preenchidos
	if (
		String::IsNullOrWhiteSpace(tBNomeImobiliariaEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBNomeIResponsavelImobiliariaEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBTelefoneImobiliariaEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBValorImobiliariaEd->Text->Trim()) ||
		String::IsNullOrWhiteSpace(tBCreciImobiliariaEd->Text->Trim())) {

		MessageBox::Show("Todos os campos obrigatórios devem ser preenchidos.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	 

	
	String^ creci = tBCreciImobiliariaEd->Text;
	// Validar o CRECI
	bool creciValido = true;
	if (creci->Length < 7 || creci->Length > 8 ||
		!Char::IsDigit(creci[0]) ||
		!Char::IsDigit(creci[creci->Length - 3]) ||
		creci[creci->Length - 2] != '-' ||
		(creci[creci->Length - 1] != 'F' && creci[creci->Length - 1] != 'J' &&
			creci[creci->Length - 1] != 'f' && creci[creci->Length - 1] != 'j')) {
		creciValido = false;
	}


	ConfigBanco banco;
	String^ connectionString = banco.GetConnectionString();
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();

		// Query de atualização
		String^ editQuery = "UPDATE Imobiliaria$ SET nome = @nome, nomeResponsavel = @nomeResponsavel, telefoneResp = @telefoneResp, creciSP = @creciSP, valorReal = @valorReal WHERE IdImobiliaria = @IdImobiliaria";

		SqlCommand^ editCommand = gcnew SqlCommand(editQuery, connection);
		editCommand->Parameters->AddWithValue("@nome", tBNomeImobiliariaEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@nomeResponsavel", tBNomeIResponsavelImobiliariaEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@telefoneResp", tBTelefoneImobiliariaEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@creciSP", tBValorImobiliariaEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@valorReal", tBCreciImobiliariaEd->Text->Trim());
		editCommand->Parameters->AddWithValue("@IdImobiliaria", idCliente);

		int rowsAffected = editCommand->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Cadastro atualizado com sucesso!", "Sucesso", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Nenhum registro foi alterado. Verifique se o ID está correto.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}




	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao editar o cadastro: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}

}
private: System::Void linkLabelValidarCep_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	// Obtém o CEP do campo tBCep
	String^ CEP = tBCEP->Text;
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
		tBRuaClienteEd->Text = logradouro;
		tBBairroClienteEd->Text = bairro;
		tBCidadeClienteEd->Text = localidade + " - " + uf;

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


};
}