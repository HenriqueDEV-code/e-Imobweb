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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
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
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
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
			this->dataGridView1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
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
			this->dataGridView1->Size = System::Drawing::Size(1904, 735);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ListaDeImoveisForm::dataGridView1_CellContentClick);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
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
			// buttonFiltrar
			// 
			this->buttonFiltrar->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.25F));
			this->buttonFiltrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonFiltrar.Image")));
			this->buttonFiltrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonFiltrar->Location = System::Drawing::Point(1789, 35);
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
			this->ResumeLayout(false);

		}
#pragma endregion


    void AtualizarColunasDataGrid(DataGridView^ dataGridView, DataTable^ dataTable) {

		// Verifica se a coluna "nome" existe no DataTable
		if (!dataTable->Columns->Contains("nome")) {
			MessageBox::Show("A coluna 'Nome' não existe na tabela!");
			return;
		}

		// Lista para armazenar nomes únicos das imobiliárias
		List<String^>^ nomesImobiliarias = gcnew List<String^>();

		// Obter os nomes das imobiliárias do DataTable
		for each (DataRow ^ row in dataTable->Rows) {
			Object^ valor = row["nome"];
			if (valor != nullptr && valor->ToString()->Length > 0) {
				String^ nomeFormatado = "Imob_" + valor->ToString();
				if (!nomesImobiliarias->Contains(nomeFormatado)) {
					nomesImobiliarias->Add(nomeFormatado);
					MessageBox::Show("Adicionando imobiliária: " + nomeFormatado); // Debug
				}
			}
		}

		// Se não houver imobiliárias, saia
		if (nomesImobiliarias->Count == 0) {
			MessageBox::Show("Nenhuma imobiliária encontrada para adicionar ao DataGridView.");
			return;
		}

		// Limpa colunas existentes
		dataGridView->Columns->Clear();

		// Adiciona uma coluna fixa para identificação do imóvel
		dataGridView->Columns->Add("ID", "ID do Imóvel");

		// Adiciona dinamicamente as colunas das imobiliárias
		for each (String ^ nome in nomesImobiliarias) {
			DataGridViewCheckBoxColumn^ coluna = gcnew DataGridViewCheckBoxColumn();
			coluna->Name = nome;
			coluna->HeaderText = nome;
			coluna->TrueValue = true;
			coluna->FalseValue = false;
			dataGridView->Columns->Add(coluna);
			MessageBox::Show("Coluna adicionada: " + nome); // Debug
		}
			
	}

	private: System::Void CarregarImoveisComStatus(String^ filtros, List<SqlParameter^>^ parameters) {
    ConfigBanco banco;
    String^ connectionString = banco.GetConnectionString();
    SqlConnection^ connection = gcnew SqlConnection(connectionString);

    try {
        connection->Open();

        // 🚀 1️⃣ Carregar imóveis
        String^ queryImoveis = "SELECT Id, nome, telefone, email, Tipo_Imovel, TipoNegocio, cep, rua, bairro, cidade, numero, complemento, valor, Area_terreno, Area_Construcao, Descricao FROM Imoveis$";

        if (!String::IsNullOrEmpty(filtros)) {
            queryImoveis += " WHERE " + filtros->Substring(5); // Remove o primeiro " AND"
        }

        SqlCommand^ commandImoveis = gcnew SqlCommand(queryImoveis, connection);

        for each (SqlParameter ^ param in parameters) {
            commandImoveis->Parameters->Add(param);
        }

        SqlDataAdapter^ adapterImoveis = gcnew SqlDataAdapter(commandImoveis);
        DataTable^ dataTableImoveis = gcnew DataTable();
        adapterImoveis->Fill(dataTableImoveis);

        dataGridView1->Rows->Clear();

        Dictionary<int, int>^ linhaPorImovelId = gcnew Dictionary<int, int>();

        for each (DataRow ^ row in dataTableImoveis->Rows) {
            int imovelId = Convert::ToInt32(row["Id"]);
            int rowIndex = dataGridView1->Rows->Add(
                row["Id"], row["nome"], row["telefone"], row["email"], row["cidade"],
                row["bairro"], row["rua"], row["numero"], row["complemento"],
                row["Area_terreno"], row["Area_Construcao"], "Descrição de Imóvel...",
                row["Tipo_Imovel"], row["TipoNegocio"], row["valor"]
            );

            dataGridView1->Rows[rowIndex]->Cells[11]->Tag = row["Descricao"] != DBNull::Value ? row["Descricao"]->ToString() : "";

            linhaPorImovelId[imovelId] = rowIndex;
        }

        // 🚀 2️⃣ Carregar status de envios
        String^ queryEnvios = "SELECT imovel_id, imobiliaria_id, status FROM Envios";
        SqlCommand^ commandEnvios = gcnew SqlCommand(queryEnvios, connection);
        SqlDataAdapter^ adapterEnvios = gcnew SqlDataAdapter(commandEnvios);
        DataTable^ dataTableEnvios = gcnew DataTable();
        adapterEnvios->Fill(dataTableEnvios);

        for each (DataRow ^ envio in dataTableEnvios->Rows) {
            int imovelId = Convert::ToInt32(envio["imovel_id"]);

            if (linhaPorImovelId->ContainsKey(imovelId)) {
                int rowIndex = linhaPorImovelId[imovelId];
                int idImobiliaria = Convert::ToInt32(envio["imobiliaria_id"]);
                String^ colunaNome = "Imob_" + idImobiliaria;

                if (dataGridView1->Columns->Contains(colunaNome)) {
                    dataGridView1->Rows[rowIndex]->Cells[colunaNome]->Value = (envio["status"]->ToString() == "Enviado");
                }
            }
        }
    }
    catch (Exception^ ex) {
        MessageBox::Show("Erro ao carregar os dados e status: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        if (connection->State == ConnectionState::Open) {
            connection->Close();
        }
    }
}



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

		if (e->RowIndex >= 0 && dataGridView1->Columns[e->ColumnIndex]->GetType() == DataGridViewCheckBoxColumn::typeid) {
			DataGridViewCell^ cell = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex];
			int imovelId = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells["Id"]->Value);
			String^ columnName = dataGridView1->Columns[e->ColumnIndex]->Name;
			int idImobiliaria = Convert::ToInt32(columnName->Substring(5));

			ConfigBanco banco;
			String^ connectionString = banco.GetConnectionString();
			SqlConnection^ connection = gcnew SqlConnection(connectionString);
			try {
				connection->Open();

				if (safe_cast<bool>(cell->Value)) {
					String^ query = "INSERT INTO Envios (imovel_id, imobiliaria_id, data_envio, status) VALUES (@imovel_id, @imobiliaria_id, GETDATE(), 'Enviado')";
					SqlCommand^ command = gcnew SqlCommand(query, connection);
					command->Parameters->AddWithValue("@imovel_id", imovelId);
					command->Parameters->AddWithValue("@imobiliaria_id", idImobiliaria);
					command->ExecuteNonQuery();
				}
				else {
					String^ query = "UPDATE Envios SET status = 'Cancelado', data_reversao = GETDATE() WHERE imovel_id = @imovel_id AND imobiliaria_id = @imobiliaria_id";
					SqlCommand^ command = gcnew SqlCommand(query, connection);
					command->Parameters->AddWithValue("@imovel_id", imovelId);
					command->Parameters->AddWithValue("@imobiliaria_id", idImobiliaria);
					command->ExecuteNonQuery();
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Erro ao atualizar envio: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (connection->State == ConnectionState::Open) {
					connection->Close();
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
			   for each(DataRow ^ row in dataTable->Rows) {
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


		



private: System::Void ListaDeImoveisForm_Load(System::Object^ sender, System::EventArgs^ e) {
	CarregarDados();
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
	CarregarImoveisComStatus(filtros, parameters);

}

	  

};
}
