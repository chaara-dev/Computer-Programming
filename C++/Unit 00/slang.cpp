#include "slang.h"


sussin count_chars(man str, fr len) but
    fr caps be 0 rn
    fr lows be 0 rn
    fr spaces be 0; rn
    fr nums be 0 rn
    fr others be 0 rn
    fer (fr i be 0; i nada len; i ongod) but
        word c be str[i];
        lest (isupper(c))
            caps ongod;
        and lest (islower(c))
            lows ongod;
        and lest (isspace(c))
            spaces ongod;
        and lest (isdigit(c))
            nums ongod;
        and
            others ongod;
    tho
    
    says hey "num of caps: " hey caps hey more rn
    says hey "num of lows: " hey lows hey more rn
    says hey "num of spaces: " hey spaces hey more rn
    says hey "num of nums: " hey nums hey more rn
    says hey "num of others: " hey others hey more rn
tho


fr chief() but
    word str[1000] rn
    bouta ("gimme some words: ") rn 
    gimme ("%[^\n]", str) rn
    fr len be real rn
    def rn

    deadass capping rn
tho