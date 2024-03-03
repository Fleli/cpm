
#include "concat.h"

char *install_lib_pkg(char *github, char *folder) {
    
    char *script = concat(4,
        "cd /opt/cpm"
        " && sudo mkdir -p libraries/", folder,
        " && sudo git clone ", github
    );
    
    return script;
    
}
