
#pragma once

#include "bool_t.h"

typedef struct {
    
    /* FLAGS */
    bool_t show_help;
    bool_t syntax_error;
    
} Context;

Context *init_context(void);

void deinit_context(Context *);
