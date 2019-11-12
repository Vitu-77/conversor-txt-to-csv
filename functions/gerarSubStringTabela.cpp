string gerarSubStringTabela(string conteudoForm, string inicio, string fim){
    std::string conteudoFormulario = conteudoForm;
    std::string strInicio = inicio;
    std::string strFim = fim;
    std::string subString;

    size_t posicaoInicial = conteudoFormulario.find(inicio) + inicio.length( );
    size_t posicaoFinal = conteudoFormulario.find(strFim);

    subString = conteudoFormulario.substr(posicaoInicial, (posicaoFinal - posicaoInicial));

    return subString;
}
