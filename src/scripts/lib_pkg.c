
#include "concat.h"

char *install_lib_pkg(char *github, char *folder) {
    
    char *script = concat(6,
        "cd /opt/cpm"
        " && sudo mkdir -p libraries/", folder,
        " && cd libraries/", folder,
        " && sudo git clone ", github
    );
    
    return script;
    
}
