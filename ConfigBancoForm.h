#pragma once
#include "Imoveis&Proprientario.h"



public ref class ConfigBanco
{
public:
	static String^ LOGON = gcnew String("sa");
	static String^ SENHA = gcnew String("Sfc@196722");

	static String^ GetConnectionString() {
		return "Data Source=localhost\\SQLEXPRESS;Initial Catalog=ImobWeb;Persist Security Info=True;User ID="+LOGON+";Password="+ SENHA +";Encrypt=False";
	}
};

namespace eImobweb {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Sumário para ConfigBancoForm
	/// </summary>
	public ref class ConfigBancoForm : public System::Windows::Forms::Form
	{
	public:
		ConfigBancoForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~ConfigBancoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tBLogin;
	private: System::Windows::Forms::TextBox^ tBsenha;


	private: System::Windows::Forms::Button^ BtLogin;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;






	protected:

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConfigBancoForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tBLogin = (gcnew System::Windows::Forms::TextBox());
			this->tBsenha = (gcnew System::Windows::Forms::TextBox());
			this->BtLogin = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F));
			this->label1->Location = System::Drawing::Point(90, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F));
			this->label2->Location = System::Drawing::Point(90, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Senha";
			// 
			// tBLogin
			// 
			this->tBLogin->BackColor = System::Drawing::SystemColors::MenuBar;
			this->tBLogin->Location = System::Drawing::Point(-2, -2);
			this->tBLogin->Name = L"tBLogin";
			this->tBLogin->Size = System::Drawing::Size(116, 20);
			this->tBLogin->TabIndex = 2;
			// 
			// tBsenha
			// 
			this->tBsenha->BackColor = System::Drawing::SystemColors::Menu;
			this->tBsenha->Location = System::Drawing::Point(-2, -2);
			this->tBsenha->Name = L"tBsenha";
			this->tBsenha->PasswordChar = '*';
			this->tBsenha->Size = System::Drawing::Size(116, 20);
			this->tBsenha->TabIndex = 3;
			// 
			// BtLogin
			// 
			this->BtLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->BtLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BtLogin->Location = System::Drawing::Point(166, 116);
			this->BtLogin->Name = L"BtLogin";
			this->BtLogin->Size = System::Drawing::Size(75, 23);
			this->BtLogin->TabIndex = 4;
			this->BtLogin->Text = L"Enter";
			this->BtLogin->UseVisualStyleBackColor = false;
			this->BtLogin->Click += gcnew System::EventHandler(this, &ConfigBancoForm::BtLogin_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->BtLogin);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(248, 146);
			this->panel1->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->tBsenha);
			this->panel3->Location = System::Drawing::Point(69, 75);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(116, 20);
			this->panel3->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->tBLogin);
			this->panel2->Location = System::Drawing::Point(69, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(116, 20);
			this->panel2->TabIndex = 4;
			// 
			// ConfigBancoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(273, 184);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(289, 223);
			this->MinimumSize = System::Drawing::Size(289, 223);
			this->Name = L"ConfigBancoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Logon Banco SQL Server";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		
		

	private:
		String^ logon; // Propriedade para armazenar o login digitado
		String^ senha; // Propriedade para armazenar a senha digitada

public:
	String^ GetLogon() {
		return logon;
	}

	String^ GetSenha() {
		return senha;
	}


private: System::Void BtLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	// String de conexão
	String^ connectionString = ConfigBanco::GetConnectionString();

	// Captura dos valores
	String^ inputLogon = tBLogin->Text;
	String^ inputSenha = tBsenha->Text;

	// Validar os campos
	if (String::IsNullOrEmpty(inputLogon) || String::IsNullOrEmpty(inputSenha)) {
		MessageBox::Show("Por favor, preencha todos os campos.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tBLogin->Clear();
		tBsenha->Clear();
		return;
	}

	bool loginValido = (inputLogon == ConfigBanco::LOGON && inputSenha == ConfigBanco::SENHA);

	if (!loginValido)
	{
		MessageBox::Show("Login ou senha incorretos.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tBLogin->Clear();
		tBsenha->Clear();
		return;
	}

	

	// Verificar se o login já existe no banco de dados
	String^ queryCheck = "SELECT COUNT(*) FROM banco WHERE Logon = @Logon";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	SqlCommand^ commandCheck = gcnew SqlCommand(queryCheck, connection);
	commandCheck->Parameters->AddWithValue("@Logon", inputLogon);

	try {
		connection->Open();
		int count = Convert::ToInt32(commandCheck->ExecuteScalar());

		if (count > 0) {
			MessageBox::Show("Este login já existe. Escolha outro.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro ao verificar o banco de dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	finally {
		connection->Close();
	}

	// Inserir o novo login e senha no banco de dados
	String^ queryInsert = "INSERT INTO banco (Logon, senha) VALUES (@Logon, @senha)";
	SqlCommand^ commandInsert = gcnew SqlCommand(queryInsert, connection);
	commandInsert->Parameters->AddWithValue("@Logon", inputLogon);
	commandInsert->Parameters->AddWithValue("@senha", inputSenha);

	try {
		connection->Open();
		int rowsAffected = commandInsert->ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Dados salvos com sucesso!", "Sucesso", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Armazena os valores nas propriedades públicas
			ConfigBanco::LOGON = inputLogon;
			ConfigBanco::SENHA = inputSenha;

			// Fecha o formulário após o cadastro
			this->Close();
		}
		else {
			MessageBox::Show("Erro ao salvar os dados.", "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Erro: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		connection->Close();
	}
}

};
}
