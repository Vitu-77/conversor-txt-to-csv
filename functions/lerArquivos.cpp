string lerArquivos(void){
    std::string nomeArquivo;
    std::string indice;
    std::string conteudoArquivo;
    std::string conteudoArquivoQL;
    std::string conteudoArquivos;
    std::string body;
    std::string bodyCSV;
    std::string atributosBody[71];
    std::string valoresAprovados;
    std::string procedimentos;
    std::string conteudoArquivoCSV;

    preencherVetor(atributosBody);

    short int qtdArquivos = 4;

    for(int i = 1; i <= qtdArquivos; i++){
        indice = to_string(i);
        nomeArquivo = "Formulario (" + indice + ").txt";

        conteudoArquivo = lerArquivoEntrada(nomeArquivo);
        conteudoArquivoQL = lerArquivoEntradaQL(nomeArquivo);

        body = gerarSubString(conteudoArquivo, "NUM AIH:", "PROCEDIMENTOS REALIZADOS :");
        bodyCSV = gerarCSVBody(body, atributosBody);
        tratamentoString(bodyCSV);

        procedimentos = gerarSubStringTabela(conteudoArquivoQL, "CMPT DESCRI��O", "SERVI�O HOSPITALAR");
        tratamentoStringTabela(procedimentos);

        valoresAprovados = gerarSubStringTabela2(conteudoArquivo, "VALOR TOTAL :");

        conteudoArquivoCSV = bodyCSV + procedimentos + valoresAprovados + "\n\n" ;

        conteudoArquivos = conteudoArquivos + conteudoArquivoCSV;

        conteudoArquivoCSV.clear( );
        conteudoArquivoQL.clear( );
        conteudoArquivo.clear( );
        nomeArquivo.clear( );
        body.clear( );
        bodyCSV.clear( );
        procedimentos.clear( );
        valoresAprovados.clear( );
    }

    return conteudoArquivos;

}