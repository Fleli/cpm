
#include <stdio.h>

#include "parse.h"
#include "Context.h"

int main(int argc, char const *argv[]) {
    
    printf("Running CPM blud\n");
    
    int current = 0;
    
    Context *c = init_context();
    
    while (parse(&current, argc, argv, c));
    
    return 0;
    
}

