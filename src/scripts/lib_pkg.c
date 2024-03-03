
#include "concat.h"

char *install_lib_pkg(char *github, char *folder) {
    
    char *script = concat(4,
        "cd /opt/cpm"
        " && mkdir -p libraries/", folder,
        " && git clone ", github
    );
    
    return script;
    
}
