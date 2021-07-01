#include "shared.h"
#ifndef USE_OPENSSL
int main_ForaDoEsle()
{
    printf("ERROR: Not compiled. Missing OpenSSL support.\n");
    printf("sasad....");
    exit(0);

    #ifndef TESTE_MEU_ForaElse
    printf("sdfsklfslkf");  
#else
    exit("fsadfsas"); 
#endif

}

#else
int main_DentroDoElse()
{
    printf("dsfasfa");

#ifndef TESTE_MEU
    printf("sdfsklfslkf");
    printf("sdfsklfslkf");  
#else
    printf("fsadfsas");
    exit("fsadfsas"); 
#endif
    printf("dsfasfa");

}
#endif