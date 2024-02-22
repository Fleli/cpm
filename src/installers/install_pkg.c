
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
    } else if (strcmp(name, "bbasm") == 0) {
        code = install_swift_pkg("https://github.com/Fleli/bbasm", "bbasm", "bbasm");
    } else if (strcmp(name, "bbvm") == 0) {
        code = install_swift_pkg("https://github.com/Fleli/bbvm", "bbvm", "bbvm");
    } else if (strcmp(name, "pdk") == 0) {
        return (
            install_pkg("pmax") &&
            install_pkg("bbasm") &&
            install_pkg("bbvm")
        );
    }
    
    else {
        exists = false;
    }
    
    int success = 0;
    
    if (exists) {
        success = (system(code) == 0);
    } else {
        printf("Unrecognized package '%s'.\n", name);
    }
    
    return success;
    
}
