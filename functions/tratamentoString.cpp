void tratamentoString(std::string& str){
    string dVirg = ",,";
    string virg = ",";
    string dEspaco = "  ";
    string espaco = " ";
    string espacoVirg = " ,";
    string virgEspaco = ", ";
    string quebraLinha = "\n";
    string apaga = "\0";

    for(int i = 0; i < str.length( ); i++){
        replace(str, dEspaco, espaco);
    }

    for(int i = 0; i < str.length( ); i++){
        replace(str, espacoVirg, virg);
    }

    for(int i = 0; i < str.length( ); i++){
        replace(str, dEspaco, espaco);
    }

    for(int i = 0; i < str.length( ); i++){
        replace(str, virgEspaco, virg);
    }

    for(int i = 0; i < str.length( ); i++){
        replace(str, quebraLinha, apaga);
    }

    if(str[0] == ','){
        str[0] = '\0';
    }
}