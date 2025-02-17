

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
    // String de conex�o com o banco de dados
    String^ connectionString = banco.GetConnectionString();

    // Verifica se j� existe um login e senha cadastrados no banco
    String^ queryCheck = "SELECT COUNT(*) FROM banco";
    SqlConnection^ connection = gcnew SqlConnection(connectionString);
    SqlCommand^ commandCheck = gcnew SqlCommand(queryCheck, connection);

    bool hasLogin = false;

    try
    {
        connection->Open();
        int count = Convert::ToInt32(commandCheck->ExecuteScalar());
        hasLogin = (count > 0); // Se existir pelo menos um registro, h� login salvo
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Erro ao verificar o banco de dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return; // Sai do programa em caso de erro cr�tico
    }
    finally
    {
        connection->Close();
    }

    // Se n�o h� login, abre o formul�rio ConfigBancoForm para configurar o primeiro login
    if (!hasLogin)
    {
        eImobweb::ConfigBancoForm^ ConfigBanco = gcnew eImobweb::ConfigBancoForm();
        Application::Run(ConfigBanco);

        // Obt�m os valores inseridos pelo usu�rio no ConfigBancoForm
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

    // Login j� cadastrado ou configurado, mant�m a janela principal aberta e exibe novas janelas sem encerrar a principal
    eImobweb::CadastroDeImoveisForm^ Cadastro = gcnew eImobweb::CadastroDeImoveisForm();
    Application::Run(Cadastro);

    // Verifica qual a��o foi selecionada no CadastroDeImoveisForm
    if (Cadastro->switchToLista)
    {
        eImobweb::ListaDeImoveisForm^ Lista = gcnew eImobweb::ListaDeImoveisForm();
        Lista->Show(); // Exibe a janela de lista de im�veis
    }

    if (Cadastro->switchToImobiliaria)
    {
        eImobweb::ImobiliariaForm^ Imobiliaria = gcnew eImobweb::ImobiliariaForm();
        Imobiliaria->Show(); // Exibe a janela de imobili�ria
    }
    if (Cadastro->switchToExcluir)
    {
        eImobweb::Excluirform^ Excluir = gcnew eImobweb::Excluirform();
        Excluir->Show(); // Exibe a janela de imobili�ria
    }
    if (Cadastro->switchToEditar)
    {
        eImobweb::EditarForm^ Editar = gcnew eImobweb::EditarForm();
        Editar->Show(); // Exibe a janela de imobili�ria
    }
    if (Cadastro->switchToVenda)
    {
        eImobweb::VendasForm^ Venda = gcnew eImobweb::VendasForm();
        Venda->Show(); // Exibe a janela de imobili�ria
    }
    if (Cadastro->switchToRelatorio)
    {
        eImobweb::RelatorioForm^ Relatorio = gcnew eImobweb::RelatorioForm();
        Relatorio->Show(); // Exibe a janela de imobili�ria
    }

    if (Cadastro->switchToBanco)
    {
        eImobweb::ConfigBancoForm^ Banco = gcnew eImobweb::ConfigBancoForm();
        Banco->Show(); // Exibe a janela de configura��o do banco
    }
}

