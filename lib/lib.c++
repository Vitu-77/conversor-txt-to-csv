#include <iostream>
#include <cstring>
#include <fstream>
#include <clocale>
#include <cctype>

using namespace std;

extern bool replace(std::string& stringInicial, std::string& from, std::string& to);
extern void preencherVetor(string vetorBody[71]);
extern void mostrarVetor(string vetor[], int tamanho);
extern void tratamentoString(std::string& str);
extern void tratamentoStringTabela(std::string& str);
extern void escreverArquivo(std::string conteudoFormulario);
extern string gerarSubString(string conteudoForm, string inicio, string fim);
extern string gerarSubStringTabela(string conteudoForm, string inicio, string fim);
extern string gerarSubStringTabela2(std::string str, std::string inicio);
extern string lerArquivoEntrada(std::string nomeArquivo);
extern string lerArquivoEntradaQL(std::string nomeArquivo);
extern string lerArquivos(void);
extern string gerarCSVHeader(std::string& conteudoArquivo, std::string vetorAtributos[7]);
extern string gerarCSVBody(std::string& conteudoArquivo, std::string vetorAtributos[71]);