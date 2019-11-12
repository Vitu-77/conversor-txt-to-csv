#include "lib/lib.cpp"

using namespace std;

ofstream arquivoSaida;
ofstream arquivoSaidaTXT;
ifstream arquivoEntrada;

int main(int argc, char const *argv[]) {
    std::setlocale(LC_ALL, "Portuguese");

    std::string conteudoArquivos;

    conteudoArquivos = lerArquivos( );
    escreverArquivo(conteudoArquivos);

    system("pause");
    return 0;

}