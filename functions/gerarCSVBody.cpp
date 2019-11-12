string gerarCSVBody(std::string& conteudoArquivo, std::string vetorAtributos[71]){
    std::string atributoFormulario;
    std::string stringCSV;
    std::string virgula = ",";

    stringCSV = conteudoArquivo;

    for(int i = 0; i < stringCSV.length( ); i++){
        for(int j = 0; j < 71; j++){
            atributoFormulario = vetorAtributos[j];
            replace(stringCSV, atributoFormulario, virgula);
        }
    }

    return stringCSV;

}