
#include <string.h>
#include <stdio.h>

#include "parse.h"
#include "bool_t.h"
#include "Context.h"
#include "meta.h"
#include "reinstall_self.h"

bool_t parse(int *current, int count, char const *strings[], Context *context) {
    
    if (*current >= count) {
        return false;
    }
    
    char const *arg = strings[*current];
    
    if (strcmp(arg, "-v") == 0) {
        
        printf("Version %s, date %s\n", version, date);
        return false;
        
    } else if (strcmp(arg, "-r") == 0) {
        
        reinstall_self();
        
        return false;
        
    }
    
    // ...
    else {
        *current += 1;
    }
    
    
    
    return true;
    
}
