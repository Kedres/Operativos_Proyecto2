#include <stdio.h>
#include "Qr_Admin.h"


int main()
{
    char* msg = "esto es una prueba";
    char* name = "2";
    createQR(name, msg);
    return 0;
}
