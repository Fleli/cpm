
#include <string.h>
#include <stdio.h>

#include "parse.h"
#include "bool_t.h"
#include "Context.h"
#include "meta.h"
#include "reinstall_self.h"
#include "install_pkg.h"

bool_t parse(int *current, int count, char const *strings[], Context *context) {
    
    if (*current >= count) {
        return false;
    }
    
    char const *arg = strings[*current];
    
    if (strcmp(arg, "-v") == 0) {
        
        printf("Version %s, date %s\n", version, date);
        return false;
        
    } else if (strcmp(arg, "r") == 0) {
        
        reinstall_self();
        return false;
        
    } else if (strcmp(arg, "i") == 0) {
        
        *current += 1;
        
        if (*current >= count) {
            printf("Missing argument for command 'cpm i'.\n");
            context->syntax_error = true;
            return false;
        }
        
        const char *name = strings[*current];
        bool_t success = install_pkg(name);
        
        *current += 1;
        
        if (success) {
            printf("Successfully installed package '%s'.\n", name);
        } else {
            printf("Installation of package '%s' failed.\n", name);
        }
        
        return success;
        
    }
    
    // ...
    else {
        printf("Unrecognized command '%s'.\n", strings[*current]);
        context->syntax_error = true;
        return false;
    }
    
    
    
    return true;
    
}
