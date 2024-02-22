
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char *concat(int count, ...) {
    
    int result_count = 0;
    char *result = malloc(sizeof(char));
    *result = '\0';
    
    va_list list;
    
    va_start(list, count);
    
    for (int i = 0; i < count; i++) {
        
        char *str = va_arg(list, char *);
        result = realloc(result, ( result_count + strlen(str) ) * sizeof(char) );
        
        for (int j = 0; j < (int) strlen(str); j++) {
            result[result_count + j] = str[j];
        }
        
        result_count += strlen(str);
        result[result_count] = '\0';
        
    }
    
    va_end(list);
    
    return result;
    
}
