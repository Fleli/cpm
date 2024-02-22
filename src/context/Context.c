
#include <stdlib.h>

#include "Context.h"
#include "bool_t.h"

Context *init_context(void) {
    
    Context *c = malloc(sizeof(Context));
    
    c->syntax_error = false;
    
    return c;
    
}

void deinit_context(Context *c) {
    free(c);
}
