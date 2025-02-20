#pragma once
#include "Imoveis&Proprientario.h"

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
	/// Sumário para ImobiliariaForm
	/// </summary>
	public ref class ImobiliariaForm : public System::Windows::Forms::Form
	{
	public:
		ImobiliariaForm(void)
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
		~ImobiliariaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tBimobiliaria;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ tBnomeResponsavel;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ tBtelefoneResponsavel;


	private: System::Windows::Forms::Panel^ panel5;




	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ tBcreci;
	private: System::Windows::Forms::TextBox^ tBValorResponsavel;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;









	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ImobiliariaForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tBimobiliaria = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tBnomeResponsavel = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tBtelefoneResponsavel = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tBValorResponsavel = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->tBcreci = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel7->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(452, 116);
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
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(132, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 66);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Cadastro de Imobiliária";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(8, 119);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(179, 24);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Dados da Imobiliária";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 24);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Nome da Imobiliária";
			// 
			// tBimobiliaria
			// 
			this->tBimobiliaria->Location = System::Drawing::Point(-2, 0);
			this->tBimobiliaria->Name = L"tBimobiliaria";
			this->tBimobiliaria->Size = System::Drawing::Size(168, 20);
			this->tBimobiliaria->TabIndex = 31;
			this->tBimobiliaria->TextChanged += gcnew System::EventHandler(this, &ImobiliariaForm::tBimobiliaria_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->tBimobiliaria);
			this->panel2->Location = System::Drawing::Point(213, 165);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(168, 20);
			this->panel2->TabIndex = 32;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 24);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Nome do Responsavel";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->tBnomeResponsavel);
			this->panel3->Location = System::Drawing::Point(213, 211);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(168, 20);
			this->panel3->TabIndex = 34;
			// 
			// tBnomeResponsavel
			// 
			this->tBnomeResponsavel->Location = System::Drawing::Point(-2, -2);
			this->tBnomeResponsavel->Name = L"tBnomeResponsavel";
			this->tBnomeResponsavel->Size = System::Drawing::Size(168, 20);
			this->tBnomeResponsavel->TabIndex = 35;
			this->tBnomeResponsavel->TextChanged += gcnew System::EventHandler(this, &ImobiliariaForm::tBnomeResponsavel_TextChanged);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->tBtelefoneResponsavel);
			this->panel4->Location = System::Drawing::Point(213, 257);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(168, 20);
			this->panel4->TabIndex = 36;
			// 
			// tBtelefoneResponsavel
			// 
			this->tBtelefoneResponsavel->Location = System::Drawing::Point(-2, -2);
			this->tBtelefoneResponsavel->Name = L"tBtelefoneResponsavel";
			this->tBtelefoneResponsavel->Size = System::Drawing::Size(168, 20);
			this->tBtelefoneResponsavel->TabIndex = 37;
			this->tBtelefoneResponsavel->TextChanged += gcnew System::EventHandler(this, &ImobiliariaForm::tBtelefoneResponsavel_TextChanged);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->tBValorResponsavel);
			this->panel5->Location = System::Drawing::Point(213, 298);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(85, 20);
			this->panel5->TabIndex = 38;
			// 
			// tBValorResponsavel
			// 
			this->tBValorResponsavel->Location = System::Drawing::Point(-2, 0);
			this->tBValorResponsavel->Name = L"tBValorResponsavel";
			this->tBValorResponsavel->Size = System::Drawing::Size(85, 20);
			this->tBValorResponsavel->TabIndex = 53;
			this->tBValorResponsavel->TextChanged += gcnew System::EventHandler(this, &ImobiliariaForm::tBValorResponsavel_TextChanged_1);
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->tBcreci);
			this->panel7->Location = System::Drawing::Point(213, 336);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(85, 20);
			this->panel7->TabIndex = 52;
			// 
			// tBcreci
			// 
			this->tBcreci->Location = System::Drawing::Point(-2, -2);
			this->tBcreci->Name = L"tBcreci";
			this->tBcreci->Size = System::Drawing::Size(85, 20);
			this->tBcreci->TabIndex = 53;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(150, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 24);
			this->label5->TabIndex = 53;
			this->label5->Text = L"Creci";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(144, 295);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 24);
			this->label6->TabIndex = 54;
			this->label6->Text = L"Valor";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(122, 257);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 24);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Telefone";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F));
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(378, 386);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(73, 25);
			this->linkLabel1->TabIndex = 58;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Salvar";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ImobiliariaForm::linkLabel1_LinkClicked);
			// 
			// ImobiliariaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(452, 418);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(468, 457);
			this->MinimumSize = System::Drawing::Size(468, 457);
			this->Name = L"ImobiliariaForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"e-Imobweb";
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
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: Imobiliaria^ imobiliaria = nullptr;



	private: System::Void tBimobiliaria_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ validText = "";
		String^ currentText = tBimobiliaria->Text;

		// Permitir apenas letras e espaços
		for each (Char c in currentText) {
			if (Char::IsLetter(c) || Char::IsWhiteSpace(c)) {
				validText += c;
			}
		}

		// Atualiza o campo caso tenha ocorrido alteração
		if (currentText != validText) {
			int cursorPosition = tBimobiliaria->SelectionStart;
			tBimobiliaria->Text = validText;
			tBimobiliaria->SelectionStart = Math::Min(cursorPosition, validText->Length);
		}
	}

private: System::Void tBnomeResponsavel_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ validText = "";
	String^ currentText = tBnomeResponsavel->Text;

	// Permitir apenas letras e espaços
	for each (Char c in currentText) {
		if (Char::IsLetter(c) || Char::IsWhiteSpace(c)) {
			validText += c;
		}
	}

	if (currentText != validText) {
		int cursorPosition = tBnomeResponsavel->SelectionStart;
		tBnomeResponsavel->Text = validText;
		tBnomeResponsavel->SelectionStart = Math::Min(cursorPosition, validText->Length);
	}

}
private: System::Void tBtelefoneResponsavel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ currentText = tBtelefoneResponsavel->Text;
	String^ numericText = "";
	int cursorPosition = tBtelefoneResponsavel->SelectionStart;

	// Manter apenas números
	for each (Char c in currentText) {
		if (Char::IsDigit(c)) {
			numericText += c;
		}
	}

	// Aplicar a formatação correta
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
			else { // Número incompleto
				formattedText += ") " + numericText->Substring(2);
			}
		}
	}

	// Atualiza o campo se o texto original foi alterado
	if (currentText != formattedText) {
		tBtelefoneResponsavel->Text = formattedText;
		tBtelefoneResponsavel->SelectionStart = Math::Min(cursorPosition + (formattedText->Length - currentText->Length), formattedText->Length);
	}

}


private: System::Void tBValorResponsavel_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	String^ currentText = tBValorResponsavel->Text;
	String^ validText = "";

	// Manter apenas números
	for each (Char c in currentText) {
		if (Char::IsDigit(c)) {
			validText += c;
		}
	}

	// Formatar como moeda (R$)
	if (validText->Length > 0) {
		double valor = Convert::ToDouble(validText) / 100.0;
		tBValorResponsavel->Text = "R$ " + valor.ToString("N2");
		tBValorResponsavel->SelectionStart = tBValorResponsavel->Text->Length;
	}
}




	   //  link para salvar no banco de dados
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	String^ NomeImobi = tBimobiliaria->Text->Trim();
	String^ NomeResp = tBnomeResponsavel->Text->Trim();
	String^ TelefoneResp = tBtelefoneResponsavel->Text->Trim();
	String^ ValorResp = tBValorResponsavel->Text->Replace("R$", "")->Trim();
	String^ creci = tBcreci->Text->Trim();
	ConfigBanco banco;

	// Verificar campos vazios
	if (NomeImobi->Length == 0 || NomeResp->Length == 0 || TelefoneResp->Length == 0 || ValorResp->Length == 0 || creci->Length == 0) {
		MessageBox::Show("Por favor, preencha todos os campos.", "Atenção", MessageBoxButtons::OK, MessageBoxIcon::Stop);
		return;
	}

	// Validar CRECI
	bool creciValido = (creci->Length >= 7 && creci->Length <= 8 && Char::IsDigit(creci[0]) &&
		Char::IsDigit(creci[creci->Length - 3]) && creci[creci->Length - 2] == '-' &&
		(creci->EndsWith("F") || creci->EndsWith("J") || creci->EndsWith("f") || creci->EndsWith("j")));

	if (!creciValido) {
		tBcreci->BackColor = System::Drawing::Color::LightCoral;
		MessageBox::Show("O CRECI informado é inválido. Formato esperado: 123456-F ou 123456-J.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	tBcreci->BackColor = System::Drawing::Color::LightGreen;

	// Verificar duplicidade no banco de dados
	try {
		String^ connString = banco.GetConnectionString();
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ query = "SELECT COUNT(*) FROM Imobiliaria$ WHERE nome = @nome OR telefoneResp = @telefoneResp OR creciSP = @creciSP";
		SqlCommand commandCheck(query, % sqlConn);
		commandCheck.Parameters->AddWithValue("@nome", NomeImobi);
		commandCheck.Parameters->AddWithValue("@telefoneResp", TelefoneResp);
		commandCheck.Parameters->AddWithValue("@creciSP", creci);

		int resultado = (int)commandCheck.ExecuteScalar();
		sqlConn.Close();

		if (resultado > 0) {
			MessageBox::Show("Valores duplicados encontrados no banco de dados. Verifique as informações.", "Atenção", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao verificar duplicidade: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Inserir dados no banco de dados
	try {
		String^ connString = banco.GetConnectionString();
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO Imobiliaria$ (nome, nomeResponsavel, telefoneResp, creciSP, valorReal) VALUES (@nome, @nomeResponsavel, @telefoneResp, @creciSP, @valorReal)";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@nome", NomeImobi);
		command.Parameters->AddWithValue("@nomeResponsavel", NomeResp);
		command.Parameters->AddWithValue("@telefoneResp", TelefoneResp);
		command.Parameters->AddWithValue("@creciSP", creci);
		command.Parameters->AddWithValue("@valorReal", Convert::ToDecimal(ValorResp));

		command.ExecuteNonQuery();
		MessageBox::Show("Cadastro realizado com sucesso!", "Sucesso", MessageBoxButtons::OK);
		sqlConn.Close();

		// Limpar campos
		tBimobiliaria->Clear();
		tBnomeResponsavel->Clear();
		tBtelefoneResponsavel->Clear();
		tBValorResponsavel->Clear();
		tBcreci->Clear();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao salvar os dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}


