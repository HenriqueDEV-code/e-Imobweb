#pragma once


using namespace System;


public ref class Imoveis
{
public:
	int id;
	String^ nome;
	String^ telefone;
	String^ email;
	String^ rua;
	String^ bairro;
	String^ cidade;
	String^ CEP;
	String^ NUMERO;
	String^ Complemento;
	String^ AreaTerreno;
	String^ AreaConstrucao;
	String^ Descricao;
	String^ login;
	String^ senha;
};


public ref class Imobiliaria
{
	int id;
	String^ nome;
	String^ telefone;
	String^ responsavelImobiliaria;
	String^ ValorImobiliaria;
};


			