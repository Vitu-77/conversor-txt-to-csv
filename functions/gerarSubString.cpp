string gerarSubString(string conteudoForm, string inicio, string fim){
    std::string conteudoFormulario = conteudoForm;
    std::string strInicio = inicio;
    std::string strFim = fim;
    std::string subString;

    size_t posicaoInicial = conteudoFormulario.find(inicio);
    size_t posicaoFinal = conteudoFormulario.find(strFim);

    subString = conteudoFormulario.substr(posicaoInicial, (posicaoFinal - posicaoInicial));

    return subString;
}