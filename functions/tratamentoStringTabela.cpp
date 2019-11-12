void tratamentoStringTabela(std::string& str){
    string tEspaco = "   ";
    string dEspaco = "  ";
    string virg = ",";
    string ponto = ".";

    for(int i = 0; i < str.length( ); i++){
        replace(str, virg, ponto);
    }

    for(int i = 0; i < str.length( ); i++){
        replace(str, tEspaco, dEspaco);
    }

    for(int i = 0; i < str.length( ); i++){
        replace(str, dEspaco, virg);
    }

    for(int i = 0; i < str.length( ); i++){
        if(isdigit(str[i]) && str[i+1] == ' ' && isdigit(str[i+2])){
            str[i+1] = ',';
        }
    }

    for(int i = 0; i < str.length( ); i++){
        if(str[i] == '\n' && str[i+1] == ','){
            str[i+1] = '\0';
        }
    }

    for(int i = 0; i < str.length( ); i++){
        if(str[i] == '2' && str[i+1] == '0' && str[i+2] == '1'){
            str[i+4] = ',';
        }
    }
}