
#include "concat.h"

char *install_swift_pkg(char *github, char *exe_name) {
    
    char *s_start =
        "cd /opt/cpm"
        "\nsudo mkdir temp"
        "\ncd temp"
        "\nsudo git clone "
    ;
    
    char *s_build =
        "\nswift package update"
        "\nswift build -c debug"
        "\ncp -rf .build/debug/"
    ;
    
    char *s_destination =
        "\n/opt/cpm/"
    ;
    
    char *script = concat(3,
        s_start,
        github,
        s_build,
        exe_name,
        s_destination
    );
    
    return script;
    
}
