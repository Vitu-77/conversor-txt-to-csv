void escreverArquivo(std::string conteudoFormulario){
    arquivoSaida.open("FormCSV/FormularioCSV.csv");
    arquivoSaidaTXT.open("FormCSV/FormularioTXT.txt");

    arquivoSaida << conteudoFormulario;
    arquivoSaida.close();

    arquivoSaidaTXT << conteudoFormulario;
    arquivoSaidaTXT.close();

    cout << "Arquivo Gerado!" << endl;

}