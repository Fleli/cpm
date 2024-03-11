
#include "concat.h"

char *install_lib_pkg(char *github, char *category, char *result_folder) {
    
    char *script = concat(8,
        "cd /opt/cpm"
        " && sudo mkdir -p libraries/", category,
        " && cd libraries/", category,
        " && sudo rm -rf ", result_folder,
        " && sudo git clone ", github
    );
    
    return script;
    
}
