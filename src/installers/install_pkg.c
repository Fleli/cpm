
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "install_pkg.h"
#include "installers.h"

bool_t install_pkg(char *name) {
    
    char *code = NULL;
    bool_t exists = true;
    
    if (strcmp(name, "pmax") == 0) {
        
    }
    
    else {
        exists = false;
    }
    
    
    if (exists) {
        system(code);
    } else {
        printf("Unrecognized package '%s'.", name);
    }
    
    return exists /* && success */;
    
}
