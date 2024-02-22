
#include <stdlib.h>
#include <stdio.h>

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
    
    system(prompts);
    
    printf("Terminating current CPM instance.\n");
    exit(0);
    
}
