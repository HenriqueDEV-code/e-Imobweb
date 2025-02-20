#pragma once
#include "ConfigBancoForm.h"

namespace eImobweb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::Globalization;



	/// <summary>
	/// Sumário para ListaDeImoveisForm
	/// </summary>
	public ref class ListaDeImoveisForm : public System::Windows::Forms::Form
	{
	public:
		ListaDeImoveisForm(void)
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
		~ListaDeImoveisForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:



	private: System::Windows::Forms::Label^ label1;

















	private: System::Windows::Forms::PictureBox^ pictureBox3;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tBidFiltro;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::DataGridView^ dataGridView1;













	private: System::Windows::Forms::Panel^ panel3;














	private: System::Windows::Forms::TextBox^ tBnumeroFiltro;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tBbairroFiltro;
	private: System::Windows::Forms::TextBox^ tBcidadeFiltro;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ tBTelefoneFiltro;
	private: System::Windows::Forms::TextBox^ tBnomeFiltro;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cBTipoImovelFiltro;

	private: System::Windows::Forms::Button^ buttonFiltrar;
	private: System::Windows::Forms::ComboBox^ cBPretencaoFiltro;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ telefone;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ email;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ cidade;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ bairro;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ rua;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ numero;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ complemento;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Area_terreno;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Area_Construcao;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ descricao;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo_Imovel;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TipoNegocio;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ valor;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::DataGridView^ dataGridView2;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ListaDeImoveisForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tBidFiltro = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->telefone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bairro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->rua = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->numero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->complemento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Area_terreno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Area_Construcao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->descricao = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipo_Imovel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TipoNegocio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->valor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonFiltrar = (gcnew System::Windows::Forms::Button());
			this->cBPretencaoFiltro = (gcnew System::Windows::Forms::ComboBox());
			this->cBTipoImovelFiltro = (gcnew System::Windows::Forms::ComboBox());
			this->tBnumeroFiltro = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tBbairroFiltro = (gcnew System::Windows::Forms::TextBox());
			this->tBcidadeFiltro = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tBTelefoneFiltro = (gcnew System::Windows::Forms::TextBox());
			this->tBnomeFiltro = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1904, 113);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(10, 10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(97, 75);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F));
			this->label1->Location = System::Drawing::Point(113, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1677, 43);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Lista de Imóveis Cadastrados";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(163, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nome do cliente";
			// 
			// tBidFiltro
			// 
			this->tBidFiltro->Location = System::Drawing::Point(92, 47);
			this->tBidFiltro->Name = L"tBidFiltro";
			this->tBidFiltro->Size = System::Drawing::Size(65, 20);
			this->tBidFiltro->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(919, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 23);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Bairro";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(474, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 23);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Telefone";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1497, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 23);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Pretenção";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1241, 39);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 23);
			this->label6->TabIndex = 47;
			this->label6->Text = L"Tipo de Imóvel";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {
				this->Id, this->Nome,
					this->telefone, this->email, this->cidade, this->bairro, this->rua, this->numero, this->complemento, this->Area_terreno, this->Area_Construcao,
					this->descricao, this->Tipo_Imovel, this->TipoNegocio, this->valor
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::MenuHighlight;
			this->dataGridView1->Location = System::Drawing::Point(-2, 129);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(960, 735);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ListaDeImoveisForm::dataGridView1_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"ID Cliente";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 50;
			// 
			// Nome
			// 
			this->Nome->HeaderText = L"Proprietario";
			this->Nome->MinimumWidth = 6;
			this->Nome->Name = L"Nome";
			this->Nome->Width = 175;
			// 
			// telefone
			// 
			this->telefone->HeaderText = L"Telefone";
			this->telefone->MinimumWidth = 6;
			this->telefone->Name = L"telefone";
			this->telefone->Width = 125;
			// 
			// email
			// 
			this->email->HeaderText = L"Email";
			this->email->MinimumWidth = 6;
			this->email->Name = L"email";
			this->email->Width = 125;
			// 
			// cidade
			// 
			this->cidade->HeaderText = L"Cidade";
			this->cidade->MinimumWidth = 6;
			this->cidade->Name = L"cidade";
			this->cidade->Width = 162;
			// 
			// bairro
			// 
			this->bairro->HeaderText = L"Bairro";
			this->bairro->MinimumWidth = 6;
			this->bairro->Name = L"bairro";
			this->bairro->Width = 210;
			// 
			// rua
			// 
			this->rua->HeaderText = L"Logradouro";
			this->rua->MinimumWidth = 6;
			this->rua->Name = L"rua";
			this->rua->Width = 210;
			// 
			// numero
			// 
			this->numero->HeaderText = L"Número";
			this->numero->MinimumWidth = 6;
			this->numero->Name = L"numero";
			this->numero->Width = 60;
			// 
			// complemento
			// 
			this->complemento->HeaderText = L"Complemento";
			this->complemento->MinimumWidth = 6;
			this->complemento->Name = L"complemento";
			this->complemento->Width = 125;
			// 
			// Area_terreno
			// 
			this->Area_terreno->HeaderText = L"Área do terreno";
			this->Area_terreno->Name = L"Area_terreno";
			this->Area_terreno->Width = 56;
			// 
			// Area_Construcao
			// 
			this->Area_Construcao->HeaderText = L"Área Construida";
			this->Area_Construcao->Name = L"Area_Construcao";
			this->Area_Construcao->Width = 59;
			// 
			// descricao
			// 
			this->descricao->HeaderText = L"Descrição";
			this->descricao->MinimumWidth = 6;
			this->descricao->Name = L"descricao";
			this->descricao->Width = 115;
			// 
			// Tipo_Imovel
			// 
			this->Tipo_Imovel->HeaderText = L"Tipo e Imóvel";
			this->Tipo_Imovel->MinimumWidth = 6;
			this->Tipo_Imovel->Name = L"Tipo_Imovel";
			this->Tipo_Imovel->Width = 125;
			// 
			// TipoNegocio
			// 
			this->TipoNegocio->HeaderText = L"Pretensão";
			this->TipoNegocio->MinimumWidth = 6;
			this->TipoNegocio->Name = L"TipoNegocio";
			this->TipoNegocio->Width = 125;
			// 
			// valor
			// 
			this->valor->HeaderText = L"Valor do Imóvel";
			this->valor->MinimumWidth = 6;
			this->valor->Name = L"valor";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->buttonFiltrar);
			this->panel3->Controls->Add(this->cBPretencaoFiltro);
			this->panel3->Controls->Add(this->cBTipoImovelFiltro);
			this->panel3->Controls->Add(this->tBnumeroFiltro);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->tBbairroFiltro);
			this->panel3->Controls->Add(this->tBcidadeFiltro);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->tBTelefoneFiltro);
			this->panel3->Controls->Add(this->tBnomeFiltro);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->tBidFiltro);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(0, 119);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1904, 868);
			this->panel3->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->dataGridView2);
			this->panel2->Location = System::Drawing::Point(964, 154);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(938, 712);
			this->panel2->TabIndex = 62;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::MenuHighlight;
			this->dataGridView2->Location = System::Drawing::Point(-2, -2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(938, 737);
			this->dataGridView2->TabIndex = 61;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ListaDeImoveisForm::dataGridView2_CellContentClick);
			// 
			// buttonFiltrar
			// 
			this->buttonFiltrar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.25F));
			this->buttonFiltrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonFiltrar.Image")));
			this->buttonFiltrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonFiltrar->Location = System::Drawing::Point(1738, 37);
			this->buttonFiltrar->Name = L"buttonFiltrar";
			this->buttonFiltrar->Size = System::Drawing::Size(96, 32);
			this->buttonFiltrar->TabIndex = 60;
			this->buttonFiltrar->Text = L"pesquisar";
			this->buttonFiltrar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonFiltrar->UseVisualStyleBackColor = true;
			this->buttonFiltrar->Click += gcnew System::EventHandler(this, &ListaDeImoveisForm::buttonFiltrar_Click_1);
			// 
			// cBPretencaoFiltro
			// 
			this->cBPretencaoFiltro->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->cBPretencaoFiltro->FormattingEnabled = true;
			this->cBPretencaoFiltro->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Venda", L"Aluguel", L"Venda e Aluguel" });
			this->cBPretencaoFiltro->Location = System::Drawing::Point(1584, 42);
			this->cBPretencaoFiltro->Name = L"cBPretencaoFiltro";
			this->cBPretencaoFiltro->Size = System::Drawing::Size(148, 21);
			this->cBPretencaoFiltro->TabIndex = 59;
			// 
			// cBTipoImovelFiltro
			// 
			this->cBTipoImovelFiltro->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->cBTipoImovelFiltro->FormattingEnabled = true;
			this->cBTipoImovelFiltro->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Casa", L"Apartamento", L"Terreno", L"Kitnet",
					L"Flat", L"Sobrado", L"Sítio", L"Rancho", L"Chácara"
			});
			this->cBTipoImovelFiltro->Location = System::Drawing::Point(1357, 41);
			this->cBTipoImovelFiltro->Name = L"cBTipoImovelFiltro";
			this->cBTipoImovelFiltro->Size = System::Drawing::Size(121, 21);
			this->cBTipoImovelFiltro->TabIndex = 58;
			// 
			// tBnumeroFiltro
			// 
			this->tBnumeroFiltro->Location = System::Drawing::Point(1171, 42);
			this->tBnumeroFiltro->Name = L"tBnumeroFiltro";
			this->tBnumeroFiltro->Size = System::Drawing::Size(64, 20);
			this->tBnumeroFiltro->TabIndex = 57;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1108, 42);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 23);
			this->label9->TabIndex = 56;
			this->label9->Text = L"Número";
			// 
			// tBbairroFiltro
			// 
			this->tBbairroFiltro->Location = System::Drawing::Point(976, 44);
			this->tBbairroFiltro->Name = L"tBbairroFiltro";
			this->tBbairroFiltro->Size = System::Drawing::Size(126, 20);
			this->tBbairroFiltro->TabIndex = 55;
			// 
			// tBcidadeFiltro
			// 
			this->tBcidadeFiltro->Location = System::Drawing::Point(749, 44);
			this->tBcidadeFiltro->Name = L"tBcidadeFiltro";
			this->tBcidadeFiltro->Size = System::Drawing::Size(164, 20);
			this->tBcidadeFiltro->TabIndex = 54;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(683, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 23);
			this->label8->TabIndex = 53;
			this->label8->Text = L"Cidade";
			// 
			// tBTelefoneFiltro
			// 
			this->tBTelefoneFiltro->Location = System::Drawing::Point(550, 47);
			this->tBTelefoneFiltro->Name = L"tBTelefoneFiltro";
			this->tBTelefoneFiltro->Size = System::Drawing::Size(127, 20);
			this->tBTelefoneFiltro->TabIndex = 52;
			// 
			// tBnomeFiltro
			// 
			this->tBnomeFiltro->Location = System::Drawing::Point(287, 48);
			this->tBnomeFiltro->Name = L"tBnomeFiltro";
			this->tBnomeFiltro->Size = System::Drawing::Size(181, 20);
			this->tBnomeFiltro->TabIndex = 51;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 23);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Id do cliente";
			// 
			// ListaDeImoveisForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ListaDeImoveisForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"e-Imobweb";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &ListaDeImoveisForm::ListaDeImoveisForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


   
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex == 11) { // Apenas a coluna 11
				DataGridViewCell^ cell = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex];

			if (cell->Tag != nullptr) {
					String^ textoReal = safe_cast<String^>(cell->Tag);

			  if (cell->Value->ToString() == "Descrição de Imóvel...") {
						cell->Value = textoReal; // Mostra a informação real
			  }  
			  else {
						cell->Value = "Descrição de Imóvel..."; // Oculta a informação
			  }
			}
		}
	}

private: System::Void buttonFiltrar_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   private: System::Void CarregarDados() {
		   ConfigBanco banco;
		   String^ connectionString = banco.GetConnectionString();
		   SqlConnection^ connection = gcnew SqlConnection(connectionString);
		   try {
			   connection->Open();
			   String^ query = "SELECT Id, nome, telefone, email, Tipo_Imovel, TipoNegocio, cep, rua, bairro, cidade, numero, complemento, valor, Area_terreno, Area_Construcao, Descricao FROM Imoveis$";
			   SqlCommand^ command = gcnew SqlCommand(query, connection);
			   SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			   DataTable^ dataTable = gcnew DataTable();
			   adapter->Fill(dataTable);
			   dataGridView1->Rows->Clear();
			   for each (DataRow ^ row in dataTable->Rows) {
				   dataGridView1->Rows->Add(
					   row["Id"],
					   row["nome"],
					   row["telefone"],
					   row["email"],
					   row["cidade"],
					   row["bairro"],
					   row["rua"],
					   row["numero"],
					   row["complemento"],
					   row["Area_terreno"],
					   row["Area_Construcao"],
					   row["descricao"],
					   row["Tipo_Imovel"],
					   row["TipoNegocio"],
					   row["valor"]
				   );
			   }
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Erro ao carregar os dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
		   finally {
			   if (connection->State == ConnectionState::Open) {
				   connection->Close();
			   }
		   }
	   }


			  private: System::Void CarregarDados(String^ filtros, List<SqlParameter^>^ parameters) {
				  ConfigBanco banco;
				  String^ connectionString = banco.GetConnectionString();
				  SqlConnection^ connection = gcnew SqlConnection(connectionString);

				  try {
					  connection->Open();

					  // Base da query
					  String^ query = "SELECT Id, nome, telefone, email, Tipo_Imovel, TipoNegocio, cep, rua, bairro, cidade, numero, complemento, valor, Area_terreno, Area_Construcao, Descricao FROM Imoveis$";

					  // Adiciona os filtros corretamente
					  if (!String::IsNullOrEmpty(filtros)) {
						  query += " WHERE " + filtros->Substring(5); // Remove o primeiro " AND"
					  }

					  SqlCommand^ command = gcnew SqlCommand(query, connection);

					  // Adiciona os parâmetros ao comando SQL
					  for each (SqlParameter ^ param in parameters) {
						  command->Parameters->Add(param);
					  }

					  SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
					  DataTable^ dataTable = gcnew DataTable();
					  adapter->Fill(dataTable);
					  dataGridView1->Rows->Clear();

					  for each (DataRow ^ row in dataTable->Rows) {
						  int rowIndex = dataGridView1->Rows->Add(
							  row["Id"],
							  row["nome"],
							  row["telefone"],
							  row["email"],
							  row["cidade"],
							  row["bairro"],
							  row["rua"],
							  row["numero"],
							  row["complemento"],
							  row["Area_terreno"],
							  row["Area_Construcao"],
							  "Descrição de Imóvel...",  // Exibe apenas um texto oculto por padrão
							  row["Tipo_Imovel"],
							  row["TipoNegocio"],
							  row["valor"]
						  );

						  // Armazena a descrição real na propriedade Tag da célula
						  dataGridView1->Rows[rowIndex]->Cells[11]->Tag = row["Descricao"] != DBNull::Value ? row["Descricao"]->ToString() : "";
					  }
				  }
				  catch (Exception^ ex) {
					  MessageBox::Show("Erro ao carregar os dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
				  }
				  finally {
					  if (connection->State == ConnectionState::Open) {
						  connection->Close();
					  }
				  }
			  }




private: System::Void ListaDeImoveisForm_Load(System::Object^ sender, System::EventArgs^ e) {
	    CarregarDados();
		CarregarImobiliarias();
		MarcarEnvios();

}



private: System::Void buttonFiltrar_Click_1(System::Object^ sender, System::EventArgs^ e) {

	String^ filtros = "";
	List<SqlParameter^>^ parameters = gcnew List<SqlParameter^>();

	if (!String::IsNullOrWhiteSpace(tBidFiltro->Text->Trim())) {
		filtros += " AND id = @id";
		parameters->Add(gcnew SqlParameter("@id", tBidFiltro->Text->Trim()));
	}

	if (!String::IsNullOrWhiteSpace(tBnomeFiltro->Text->Trim())) {
		filtros += " AND nome LIKE @nome";
		parameters->Add(gcnew SqlParameter("@nome", "%" + tBnomeFiltro->Text->Trim() + "%"));
	}

	if (!String::IsNullOrWhiteSpace(tBbairroFiltro->Text->Trim())) {
		filtros += " AND bairro LIKE @bairro";
		parameters->Add(gcnew SqlParameter("@bairro", "%" + tBbairroFiltro->Text->Trim() + "%"));
	}

	// ? Verifica se o ComboBox tem um valor antes de adicionar o filtro
	if (cBPretencaoFiltro->SelectedIndex != -1 && !String::IsNullOrWhiteSpace(cBPretencaoFiltro->Text->Trim())) {
		filtros += " AND TipoNegocio = @pretencao";
		parameters->Add(gcnew SqlParameter("@pretencao", cBPretencaoFiltro->Text->Trim()));
	}

	if (cBTipoImovelFiltro->SelectedIndex != -1 && !String::IsNullOrWhiteSpace(cBTipoImovelFiltro->Text->Trim())) {
		filtros += " AND Tipo_Imovel = @tipoImovel";
		parameters->Add(gcnew SqlParameter("@tipoImovel", cBTipoImovelFiltro->Text->Trim()));
	}

	if (!String::IsNullOrWhiteSpace(tBTelefoneFiltro->Text->Trim())) {
		filtros += " AND telefone LIKE @telefone";
		parameters->Add(gcnew SqlParameter("@telefone", "%" + tBTelefoneFiltro->Text->Trim() + "%"));
	}

	if (!String::IsNullOrWhiteSpace(tBcidadeFiltro->Text->Trim())) {
		filtros += " AND cidade LIKE @cidade";
		parameters->Add(gcnew SqlParameter("@cidade", "%" + tBcidadeFiltro->Text->Trim() + "%"));
	}

	if (!String::IsNullOrWhiteSpace(tBnumeroFiltro->Text->Trim())) {
		filtros += " AND numero = @numero";
		parameters->Add(gcnew SqlParameter("@numero", tBnumeroFiltro->Text->Trim()));
	}
	// Chama a versão correta da função CarregarDados
	CarregarDados(filtros, parameters);

}
	  
	   void AtualizarDataGrid() {
		   ConfigBanco banco;
		   String^ connectionString = banco.GetConnectionString();
		   SqlConnection^ connection = gcnew SqlConnection(connectionString);

		   try {
			   connection->Open();
			   String^ query = "SELECT imovel_id, imobiliaria_id, status FROM dbo.Envios";
			   SqlDataAdapter^ da = gcnew SqlDataAdapter(query, connection);
			   DataTable^ dt = gcnew DataTable();
			   da->Fill(dt);
			   dataGridView2->DataSource = dt;

			   // Ocultar colunas desnecessárias
			   dataGridView2->Columns["imovel_id"]->Visible = false;
			   dataGridView2->Columns["imobiliaria_id"]->Visible = false;
			   dataGridView2->Columns["status"]->Visible = false;
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Erro ao atualizar a tabela: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
		   finally {
			   connection->Close();
		   }
	   }

	   void CarregarImobiliarias() {
		   ConfigBanco banco;
		   String^ connectionString = banco.GetConnectionString();
		   SqlConnection^ connection = gcnew SqlConnection(connectionString);

		   try {
			   connection->Open();
			   String^ query = "SELECT IdImobiliaria, nome FROM Imobiliaria$";
			   SqlCommand^ command = gcnew SqlCommand(query, connection);
			   SqlDataReader^ reader = command->ExecuteReader();

			   dataGridView2->Columns->Clear(); // Limpa colunas antes de recriar
			   dataGridView2->Columns->Add("ID_Imovel", "ID Imóvel"); // Primeira coluna fixa

			   while (reader->Read()) {
				   int imobiliariaId = reader->GetInt32(0);
				   String^ nomeImobiliaria = reader->GetString(1);

				   DataGridViewCheckBoxColumn^ coluna = gcnew DataGridViewCheckBoxColumn();
				   coluna->HeaderText = nomeImobiliaria;
				   coluna->Tag = imobiliariaId;  // Guarda o ID da imobiliária
				   dataGridView2->Columns->Add(coluna);
			   }
			   reader->Close();
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Erro ao carregar imobiliárias: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
		   finally {
			   connection->Close();
		   }
	   }

	   void MarcarEnvios() {
		   ConfigBanco banco;
		   String^ connectionString = banco.GetConnectionString();
		   SqlConnection^ connection = gcnew SqlConnection(connectionString);

		   try {
			   connection->Open();
			   String^ query = "SELECT imovel_id, imobiliaria_id, status FROM Envios";
			   SqlCommand^ command = gcnew SqlCommand(query, connection);
			   SqlDataReader^ reader = command->ExecuteReader();

			   while (reader->Read()) {
				   int imovelId = reader->GetInt32(0);
				   int imobiliariaId = reader->GetInt32(1);

				   // Verifica se a coluna `status` é NULL e faz a conversão correta
				   bool status = false;
				   if (!reader->IsDBNull(2)) {
					   try {
						   status = reader->GetBoolean(2); // Se `status` for `BIT`
					   }
					   catch (...) {
						   status = reader->GetInt32(2) == 1; // Se for `INT`
					   }
				   }

				   for each (DataGridViewRow ^ row in dataGridView2->Rows) {
					   if (row->Cells[0]->Value != nullptr && Convert::ToInt32(row->Cells[0]->Value) == imovelId) {
						   for each (DataGridViewColumn ^ col in dataGridView2->Columns) {
							   if (col->Tag != nullptr && Convert::ToInt32(col->Tag) == imobiliariaId) {
								   row->Cells[col->Index]->Value = status;
								   break;
							   }
						   }
						   break;
					   }
				   }
			   }
			   reader->Close();
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Erro ao marcar envios: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
		   finally {
			   connection->Close();
		   }
	   }

	   void SalvarEnvio(int imovelId, int imobiliariaId, bool status) {
		   ConfigBanco banco;
		   String^ connectionString = banco.GetConnectionString();
		   SqlConnection^ connection = gcnew SqlConnection(connectionString);
		   try {
			   connection->Open();
			   String^ query = "IF EXISTS (SELECT 1 FROM envios WHERE imovel_id = @imovel_id AND imobiliaria_id = @imobiliaria_id) "
				   "UPDATE envios SET status = @status WHERE imovel_id = @imovel_id AND imobiliaria_id = @imobiliaria_id "
				   "ELSE "
				   "INSERT INTO envios (imovel_id, imobiliaria_id, status) VALUES (@imovel_id, @imobiliaria_id , @status)";

			   SqlCommand^ cmd = gcnew SqlCommand(query, connection);
			   cmd->Parameters->AddWithValue("@imovel_id", imovelId);
			   cmd->Parameters->AddWithValue("@imobiliaria_id", imobiliariaId);
			   cmd->Parameters->AddWithValue("@status", status ? 1 : 0); // Salvar como 1 ou 0
			   cmd->ExecuteNonQuery();
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Erro ao salvar no banco: " + ex->Message);
		   }
		   finally {
			   connection->Close();
		   }
	   }

	private: System::Void MeuFormulario_Load(System::Object^ sender, System::EventArgs^ e) {
		CarregarImobiliarias();
		AtualizarDataGrid();
		MarcarEnvios();
		dataGridView2->EndEdit(); // Garante que o estado dos checkboxes seja atualizado antes de salvar
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 1) {
			DataGridViewCheckBoxCell^ checkBoxCell = dynamic_cast<DataGridViewCheckBoxCell^>(dataGridView2->Rows[e->RowIndex]->Cells[e->ColumnIndex]);

			if (checkBoxCell != nullptr) {
				bool isChecked = (checkBoxCell->Value != nullptr) ? Convert::ToBoolean(checkBoxCell->Value) : false;
				int imovel_id = Convert::ToInt32(dataGridView2->Rows[e->RowIndex]->Cells[0]->Value);
				int imobiliaria_id = Convert::ToInt32(dataGridView2->Columns[e->ColumnIndex]->Tag);

				SalvarEnvio(imovel_id, imobiliaria_id, isChecked);
			}
		}
	}
};
}
