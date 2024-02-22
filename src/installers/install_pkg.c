
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "install_pkg.h"
#include "installers.h"

bool_t install_pkg(const char *name) {
    
    char *code = NULL;
    bool_t exists = true;
    
    if (strcmp(name, "pmax") == 0) {
        code = install_swift_pkg("https://github.com/Fleli/PMax", "pmax", "PMax");
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
