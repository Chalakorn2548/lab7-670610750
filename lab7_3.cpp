char before(char x){
    if(x == 'A'){
        return 'Z';
    }
    if(x > 'A' && x <= 'Z'){
        return x - 1;
    }
    return '0';
}
