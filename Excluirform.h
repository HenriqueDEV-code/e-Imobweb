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

	/// <summary>
	/// Sumário para Excluirform
	/// </summary>
	public ref class Excluirform : public System::Windows::Forms::Form
	{
	public:
		Excluirform(void)
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
		~Excluirform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ tBidCliente;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ tBClienteProprietario;
	private: System::Windows::Forms::Button^ bTExcluirCliente;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ tBtelefoneCliente;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ tBtelefoneImob;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ tBresponsavelImob;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ tBidImobiliaria;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Excluirform::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tBidCliente = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tBClienteProprietario = (gcnew System::Windows::Forms::TextBox());
			this->bTExcluirCliente = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tBtelefoneCliente = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->tBtelefoneImob = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->tBresponsavelImob = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->tBidImobiliaria = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(934, 100);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(182, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(507, 75);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Exclui Cadastros";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(10, 10);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(97, 75);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(6, 127);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 24);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Excluir Imóveis";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(6, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 24);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Excluir Imobiliária";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(295, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(11, 13);
			this->label21->TabIndex = 53;
			this->label21->Text = L"*";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->tBidCliente);
			this->panel2->Location = System::Drawing::Point(252, 16);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(55, 20);
			this->panel2->TabIndex = 52;
			// 
			// tBidCliente
			// 
			this->tBidCliente->Location = System::Drawing::Point(0, -3);
			this->tBidCliente->Name = L"tBidCliente";
			this->tBidCliente->Size = System::Drawing::Size(87, 20);
			this->tBidCliente->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(242, 24);
			this->label3->TabIndex = 51;
			this->label3->Text = L"Informe o código do Cliente";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(306, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 24);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Cliente";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->tBClienteProprietario);
			this->panel3->Location = System::Drawing::Point(368, 17);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(180, 20);
			this->panel3->TabIndex = 55;
			// 
			// tBClienteProprietario
			// 
			this->tBClienteProprietario->Location = System::Drawing::Point(-2, -2);
			this->tBClienteProprietario->Name = L"tBClienteProprietario";
			this->tBClienteProprietario->Size = System::Drawing::Size(180, 20);
			this->tBClienteProprietario->TabIndex = 5;
			// 
			// bTExcluirCliente
			// 
			this->bTExcluirCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bTExcluirCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bTExcluirCliente.Image")));
			this->bTExcluirCliente->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->bTExcluirCliente->Location = System::Drawing::Point(867, 169);
			this->bTExcluirCliente->Name = L"bTExcluirCliente";
			this->bTExcluirCliente->Size = System::Drawing::Size(55, 38);
			this->bTExcluirCliente->TabIndex = 56;
			this->bTExcluirCliente->Text = L"Excluir";
			this->bTExcluirCliente->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->bTExcluirCliente->UseVisualStyleBackColor = true;
			this->bTExcluirCliente->Click += gcnew System::EventHandler(this, &Excluirform::bTExcluirCliente_Click);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->tBtelefoneCliente);
			this->panel4->Location = System::Drawing::Point(626, 18);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(201, 20);
			this->panel4->TabIndex = 57;
			// 
			// tBtelefoneCliente
			// 
			this->tBtelefoneCliente->Location = System::Drawing::Point(-2, -2);
			this->tBtelefoneCliente->Name = L"tBtelefoneCliente";
			this->tBtelefoneCliente->Size = System::Drawing::Size(200, 20);
			this->tBtelefoneCliente->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(556, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 24);
			this->label5->TabIndex = 58;
			this->label5->Text = L"Telefone";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->panel2);
			this->panel5->Controls->Add(this->panel4);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->panel3);
			this->panel5->Location = System::Drawing::Point(10, 152);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(851, 56);
			this->panel5->TabIndex = 59;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->panel9);
			this->panel6->Controls->Add(this->panel8);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->label7);
			this->panel6->Controls->Add(this->label6);
			this->panel6->Location = System::Drawing::Point(10, 254);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(851, 55);
			this->panel6->TabIndex = 60;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Excluirform::panel6_Paint);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(591, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(85, 24);
			this->label10->TabIndex = 67;
			this->label10->Text = L"Telefone";
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Controls->Add(this->tBtelefoneImob);
			this->panel9->Location = System::Drawing::Point(681, 19);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(165, 20);
			this->panel9->TabIndex = 66;
			// 
			// tBtelefoneImob
			// 
			this->tBtelefoneImob->Location = System::Drawing::Point(-2, -2);
			this->tBtelefoneImob->Name = L"tBtelefoneImob";
			this->tBtelefoneImob->Size = System::Drawing::Size(163, 20);
			this->tBtelefoneImob->TabIndex = 5;
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Controls->Add(this->tBresponsavelImob);
			this->panel8->Location = System::Drawing::Point(439, 18);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(156, 20);
			this->panel8->TabIndex = 65;
			// 
			// tBresponsavelImob
			// 
			this->tBresponsavelImob->Location = System::Drawing::Point(-2, -2);
			this->tBresponsavelImob->Name = L"tBresponsavelImob";
			this->tBresponsavelImob->Size = System::Drawing::Size(156, 20);
			this->tBresponsavelImob->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(320, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(119, 24);
			this->label8->TabIndex = 64;
			this->label8->Text = L"Responsável";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->tBidImobiliaria);
			this->panel7->Location = System::Drawing::Point(263, 19);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(55, 20);
			this->panel7->TabIndex = 62;
			// 
			// tBidImobiliaria
			// 
			this->tBidImobiliaria->Location = System::Drawing::Point(-2, -1);
			this->tBidImobiliaria->Name = L"tBidImobiliaria";
			this->tBidImobiliaria->Size = System::Drawing::Size(55, 20);
			this->tBidImobiliaria->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(307, 2);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(11, 13);
			this->label7->TabIndex = 63;
			this->label7->Text = L"*";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-2, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(267, 24);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Informe o código da Imobiliária";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(867, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 38);
			this->button1->TabIndex = 61;
			this->button1->Text = L"Excluir";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Excluirform::button1_Click);
			// 
			// Excluirform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 341);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->bTExcluirCliente);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(950, 380);
			this->MinimumSize = System::Drawing::Size(950, 380);
			this->Name = L"Excluirform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"e-Imobweb";
			this->Load += gcnew System::EventHandler(this, &Excluirform::Excluirform_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Excluirform_Load(System::Object^ sender, System::EventArgs^ e) {
	}



    // sistema para excluir cliente
private: System::Void bTExcluirCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verifica se o campo ID está preenchido
	if (String::IsNullOrWhiteSpace(tBidCliente->Text)) {
		MessageBox::Show("Digite o ID do cliente.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Obtém o ID digitado
	int idCliente;
	if (!Int32::TryParse(tBidCliente->Text, idCliente)) {
		MessageBox::Show("O ID do cliente deve ser um número válido.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	ConfigBanco banco;
	// Conectar ao banco de dados
	String^ connectionString = banco.GetConnectionString();
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();

		// Primeiro, buscar os dados do cliente pelo ID
		String^ selectQuery = "SELECT nome, telefone FROM Imoveis$ WHERE id = @id";
		SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, connection);
		selectCommand->Parameters->AddWithValue("@id", idCliente);

		SqlDataReader^ reader = selectCommand->ExecuteReader();

		if (reader->Read()) {
			tBClienteProprietario->Text = reader["nome"]->ToString();
			tBtelefoneCliente->Text = reader["telefone"]->ToString();
		}
		else {
			MessageBox::Show("Nenhum cliente encontrado com este ID.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tBClienteProprietario->Text = "";
			tBtelefoneCliente->Text = "";
			reader->Close();
			return;
		}
		reader->Close();

		// Confirmar exclusão
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Tem certeza que deseja excluir este cliente?",
			"Confirmação",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			// Excluir cliente
			String^ deleteQuery = "DELETE FROM Imoveis$ WHERE id = @id";
			SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, connection);
			deleteCommand->Parameters->AddWithValue("@id", idCliente);

			int rowsAffected = deleteCommand->ExecuteNonQuery();
			if (rowsAffected > 0) {
				MessageBox::Show("Cliente excluído com sucesso!", "Sucesso", MessageBoxButtons::OK, MessageBoxIcon::Information);
				tBidCliente->Text = ""; // Limpa o campo de ID
				tBClienteProprietario->Text = ""; // Limpa o nome
				tBtelefoneCliente->Text = ""; // Limpa o telefone
			}
			else {
				MessageBox::Show("Erro ao excluir o cliente.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao executar operação: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}


}


	   // sistema para excluir Imobiliaria
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Verifica se o campo ID está preenchido
	if (String::IsNullOrWhiteSpace(tBidImobiliaria->Text)) {
		MessageBox::Show("Digite o ID da imobiliária.", "Aviso", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Obtém o ID digitado
	int idImobiliaria;
	if (!Int32::TryParse(tBidImobiliaria->Text, idImobiliaria)) {
		MessageBox::Show("O ID da imobiliária deve ser um número válido.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	ConfigBanco banco;
	// Conectar ao banco de dados
	String^ connectionString = banco.GetConnectionString();
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		connection->Open();

		// Buscar os dados da imobiliária pelo ID
		String^ selectQuery = "SELECT nomeResponsavel, telefoneResp FROM Imobiliaria$ WHERE IdImobiliaria = @IdImobiliaria";
		SqlCommand^ selectCommand = gcnew SqlCommand(selectQuery, connection);
		selectCommand->Parameters->AddWithValue("@IdImobiliaria", idImobiliaria);

		SqlDataReader^ reader = selectCommand->ExecuteReader();

		if (reader->Read()) {
			tBresponsavelImob->Text = reader["nomeResponsavel"]->ToString();
			tBtelefoneImob->Text = reader["telefoneResp"]->ToString();
		}
		else {
			MessageBox::Show("Nenhuma imobiliária encontrada com este ID.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tBresponsavelImob->Text = "";
			tBtelefoneImob->Text = "";
			reader->Close();
			return;
		}
		reader->Close();

		// Confirmar exclusão
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Tem certeza que deseja excluir esta imobiliária?",
			"Confirmação",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question
		);

		if (result == System::Windows::Forms::DialogResult::Yes) {
			// Excluir imobiliária
			String^ deleteQuery = "DELETE FROM Imobiliaria$ WHERE IdImobiliaria = @IdImobiliaria";
			SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, connection);
			deleteCommand->Parameters->AddWithValue("@IdImobiliaria", idImobiliaria);

			int rowsAffected = deleteCommand->ExecuteNonQuery();
			if (rowsAffected > 0) {
				MessageBox::Show("Imobiliária excluída com sucesso!", "Sucesso", MessageBoxButtons::OK, MessageBoxIcon::Information);
				tBidImobiliaria->Text = ""; // Limpa o campo de ID
				tBresponsavelImob->Text = ""; // Limpa o nome do responsável
				tBtelefoneImob->Text = ""; // Limpa o telefone
			}
			else {
				MessageBox::Show("Erro ao excluir a imobiliária.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao executar operação: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}

}


private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
