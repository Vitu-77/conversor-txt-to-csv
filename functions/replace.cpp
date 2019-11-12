bool replace(std::string& stringInicial, std::string& from, std::string& to) {

    size_t posicaoInicial = stringInicial.find(from);

    if(posicaoInicial == std::string::npos){
        return false;
    }

    stringInicial.replace(posicaoInicial, from.length( ), to);

    return true;

}