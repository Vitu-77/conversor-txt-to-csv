string gerarSubStringTabela2(std::string str, std::string inicio){
    std::string str1 = str;
    std::string str2 = inicio;
    std::string str3;

    std::size_t posicaoInicial = str1.find(str2) + str2.length( );
    std::size_t posicaoFinal = str.length( ) - 2;

    str3 = str1.substr(posicaoInicial, (posicaoFinal - posicaoInicial));

    return str3;
}