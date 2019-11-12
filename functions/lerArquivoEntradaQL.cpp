string lerArquivoEntradaQL(std::string nomeArquivo){

    string linha;
    string conteudoArquivo;
    string conteudoFinal;
    string caracter;

    arquivoEntrada.open("Formularios/" + nomeArquivo);

    if(arquivoEntrada.is_open( )){
        while(getline(arquivoEntrada, linha)) {
            conteudoArquivo = conteudoArquivo + linha + '\n';
        }
    }
    else{
        std::cout << "N�o foi poss�vel abrir o arquivo" << endl;
    }

    arquivoEntrada.close( );

    for(int i = 0; i < conteudoArquivo.size( ); i++){
        conteudoArquivo[i] = toupper(conteudoArquivo[i]);
    }

    return conteudoArquivo;

}