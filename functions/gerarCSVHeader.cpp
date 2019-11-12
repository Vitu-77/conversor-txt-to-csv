string gerarCSVHeader(std::string& conteudoArquivo, std::string vetorAtributos[7]){
    std::string atributoFormulario;
    std::string stringCSV;
    std::string virgula = ",";

    stringCSV = conteudoArquivo;

    for(int i = 0; i < stringCSV.length( ); i++){
        for(int j = 0; j < 7; j++){
            atributoFormulario = vetorAtributos[j];
            replace(stringCSV, atributoFormulario, virgula);
        }
    }

    return stringCSV;

}