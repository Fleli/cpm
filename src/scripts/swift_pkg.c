
#include "concat.h"

char *install_swift_pkg(char *github, char *exe_name, char *folder_name) {
    
    char *script = concat(12,
        "cd /opt/cpm"
        " && sudo rm -rf cpm_install_tmp"
        " && sudo rm -rf ", exe_name, 
        " && sudo mkdir cpm_install_tmp"
        " && cd cpm_install_tmp"
        " && sudo git clone ", github,
        " && cd ", folder_name,
        " && sudo swift package update"
        " && sudo swift build -c debug"
        " && sudo cp -rf .build/debug/", exe_name, " /opt/cpm/"
        " && sudo ln -fs /opt/cpm/", exe_name, " /usr/local/bin/", exe_name
    );
    
    return script;
    
}
