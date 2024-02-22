
#include <stdio.h>

#include "parse.h"
#include "Context.h"

int main(int argc, char const *argv[]) {
    
    int current = 1;
    
    Context *c = init_context();
    
    while (parse(&current, argc, argv, c));
    
    if (c->syntax_error) {
        
        char *help_message =
            "\nFlags"
            "\n  -v: Print version number"
            "\nCommands"
            "\n  r: Reinstall cpm"
            "\n  i <p>: Install package <p>"
            "\n\n"
        ;
        
        printf("%s", help_message);
        return 1;
        
    }
    
    deinit_context(c);
    
    return 0;
    
}

