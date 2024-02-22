
#include <stdlib.h>
#include <stdio.h>

#include "meta.h"

void reinstall_self(void) {
    
    char *prompts = 
        "cd /opt/cpm"
        " && sudo rm -rf cpminstaller"
        " && sudo mkdir cpminstaller"
        " && cd cpminstaller"
        " && sudo git clone https://github.com/Fleli/cpm"
        " && cd cpm"
        " && sudo make executable"
    ;
    
    int success = system(prompts);
    
    if (success != 0) {
        printf("\nUnsuccessful reinstall [code %d].\n", success);
    } else {
        printf("\nSuccessfully reinstalled Chad Package Manager.\n");
    }
    
    printf("Terminating current CPM instance.\n\n");
    
    exit(0);
    
}
