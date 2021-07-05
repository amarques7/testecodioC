#include "shared.h"

#ifdef USE_OPENSSL

int main_ForaDoEsle()
{
    printf("ERROR: Not compiled. Missing OpenSSL support.\n");
    printf("sasad....");
    exit(0);

   
}
#else

int main_DentroDoElse(){
     printf("fdsadsfa");
    exit(0);

}
#endif