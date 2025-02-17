

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
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ConfigBanco banco;

    String^ connectionString = banco.GetConnectionString();
    String^ queryCheck = "SELECT COUNT(*) FROM banco";
    SqlConnection^ connection = gcnew SqlConnection(connectionString);
    SqlCommand^ commandCheck = gcnew SqlCommand(queryCheck, connection);

    bool hasLogin = false;

    try
    {
        connection->Open();
        int count = Convert::ToInt32(commandCheck->ExecuteScalar());
        hasLogin = (count > 0);
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Erro ao verificar o banco de dados: " + ex->Message, "Erro", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return -1; // Indica erro crítico
    }
    finally
    {
        connection->Close();
    }

    if (!hasLogin)
    {
        eImobweb::ConfigBancoForm^ ConfigBanco = gcnew eImobweb::ConfigBancoForm();
        Application::Run(ConfigBanco);

        String^ logon = ConfigBanco->GetLogon();
        String^ senha = ConfigBanco->GetSenha();

        if (!String::IsNullOrEmpty(logon) && !String::IsNullOrEmpty(senha))
        {
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
                return -1;
            }
            finally
            {
                connection->Close();
            }
        }
        else {
            return 0;
        }
    }

    eImobweb::CadastroDeImoveisForm^ Cadastro = gcnew eImobweb::CadastroDeImoveisForm();
    Application::Run(Cadastro);

    if (Cadastro->switchToLista)
    {
        eImobweb::ListaDeImoveisForm^ Lista = gcnew eImobweb::ListaDeImoveisForm();
        Lista->Show();
    }

    if (Cadastro->switchToImobiliaria)
    {
        eImobweb::ImobiliariaForm^ Imobiliaria = gcnew eImobweb::ImobiliariaForm();
        Imobiliaria->Show();
    }

    if (Cadastro->switchToExcluir)
    {
        eImobweb::Excluirform^ Excluir = gcnew eImobweb::Excluirform();
        Excluir->Show();
    }

    if (Cadastro->switchToEditar)
    {
        eImobweb::EditarForm^ Editar = gcnew eImobweb::EditarForm();
        Editar->Show();
    }

    if (Cadastro->switchToVenda)
    {
        eImobweb::VendasForm^ Venda = gcnew eImobweb::VendasForm();
        Venda->Show();
    }

    if (Cadastro->switchToRelatorio)
    {
        eImobweb::RelatorioForm^ Relatorio = gcnew eImobweb::RelatorioForm();
        Relatorio->Show();
    }

    if (Cadastro->switchToBanco)
    {
        eImobweb::ConfigBancoForm^ Banco = gcnew eImobweb::ConfigBancoForm();
        Banco->Show();
    }

    return 0; // Indica execução bem-sucedida
}


