

#include "Excluirform.h"
#include "CadastroDeImoveisForm.h"
#include "ListaDeImoveisForm.h"
#include "ImobiliariaForm.h"
#include "ConfigBancoForm.h" 
#include "EditarForm.h"
#include "VendasForm.h"
#include "RelatorioForm.h"





using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;
[STAThread]
void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ConfigBanco banco;
    // String de conexão com o banco de dados
    String^ connectionString = banco.GetConnectionString();

    // Verifica se já existe um login e senha cadastrados no banco
    String^ queryCheck = "SELECT COUNT(*) FROM banco";
    SqlConnection^ connection = gcnew SqlConnection(connectionString);
    SqlCommand^ commandCheck = gcnew SqlCommand(queryCheck, connection);

    bool hasLogin = false;

    try
    {
        connection->Open();
        int count = Convert::ToInt32(commandCheck->ExecuteScalar());
        hasLogin = (count > 0); // Se existir pelo menos um registro, há login salvo
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Erro ao verificar o banco de dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return; // Sai do programa em caso de erro crítico
    }
    finally
    {
        connection->Close();
    }

    // Se não há login, abre o formulário ConfigBancoForm para configurar o primeiro login
    if (!hasLogin)
    {
        eImobweb::ConfigBancoForm^ ConfigBanco = gcnew eImobweb::ConfigBancoForm();
        Application::Run(ConfigBanco);

        // Obtém os valores inseridos pelo usuário no ConfigBancoForm
        String^ logon = ConfigBanco->GetLogon();
        String^ senha = ConfigBanco->GetSenha();

        if (!String::IsNullOrEmpty(logon) && !String::IsNullOrEmpty(senha))
        {
            // Insere o login e senha no banco de dados
            String^ queryInsert = "INSERT INTO banco (Logon, senha) VALUES (@logon, @senha)";
            SqlCommand^ commandInsert = gcnew SqlCommand(queryInsert, connection);
            commandInsert->Parameters->AddWithValue("@logon", logon);
            commandInsert->Parameters->AddWithValue("@senha", senha);

            try
            {
                connection->Open();
                commandInsert->ExecuteNonQuery();
                MessageBox::Show("Login inicial cadastrado com sucesso!", "Sucesso", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Erro ao salvar o login no banco de dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return; // Sai do programa em caso de erro
            }
            finally
            {
                connection->Close();
            }

        }
        else {
            return;
        }
       
    }

    // Login já cadastrado ou configurado, mantém a janela principal aberta e exibe novas janelas sem encerrar a principal
    eImobweb::CadastroDeImoveisForm^ Cadastro = gcnew eImobweb::CadastroDeImoveisForm();
    Application::Run(Cadastro);

    // Verifica qual ação foi selecionada no CadastroDeImoveisForm
    if (Cadastro->switchToLista)
    {
        eImobweb::ListaDeImoveisForm^ Lista = gcnew eImobweb::ListaDeImoveisForm();
        Lista->Show(); // Exibe a janela de lista de imóveis
    }

    if (Cadastro->switchToImobiliaria)
    {
        eImobweb::ImobiliariaForm^ Imobiliaria = gcnew eImobweb::ImobiliariaForm();
        Imobiliaria->Show(); // Exibe a janela de imobiliária
    }
    if (Cadastro->switchToExcluir)
    {
        eImobweb::Excluirform^ Excluir = gcnew eImobweb::Excluirform();
        Excluir->Show(); // Exibe a janela de imobiliária
    }
    if (Cadastro->switchToEditar)
    {
        eImobweb::EditarForm^ Editar = gcnew eImobweb::EditarForm();
        Editar->Show(); // Exibe a janela de imobiliária
    }
    if (Cadastro->switchToVenda)
    {
        eImobweb::VendasForm^ Venda = gcnew eImobweb::VendasForm();
        Venda->Show(); // Exibe a janela de imobiliária
    }
    if (Cadastro->switchToRelatorio)
    {
        eImobweb::RelatorioForm^ Relatorio = gcnew eImobweb::RelatorioForm();
        Relatorio->Show(); // Exibe a janela de imobiliária
    }

    if (Cadastro->switchToBanco)
    {
        eImobweb::ConfigBancoForm^ Banco = gcnew eImobweb::ConfigBancoForm();
        Banco->Show(); // Exibe a janela de configuração do banco
    }
}

