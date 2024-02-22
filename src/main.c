
#include <stdio.h>

#include "parse.h"
#include "Context.h"

int main(int argc, char const *argv[]) {
    
    printf("\n");
    
    int current = 1;
    
    Context *c = init_context();
    
    while (parse(&current, argc, argv, c));
    
    if (argc == 1) {
        printf(
            "Chad Package Manager (CPM)\n"
            "--------------------------\n"
        );
        c->show_help = true;
    }
    
    if (c->syntax_error || c->show_help) {
        
        char *help_message =
            "\nCommands"
            "\n  v: Show version number"
            "\n  r: Reinstall cpm"
            "\n  i <p>: Install package <p>"
            "\n\n"
        ;
        
        printf("%s", help_message);
        
    }
    
    bool_t error = c->syntax_error;
    
    deinit_context(c);
    
    if (error) {
        return 1;
    }
    
    return 0;
    
}

