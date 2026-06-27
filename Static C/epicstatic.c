#include <stdio.h>
#include "epic.lib"

int main() 
{
    int x; 
    int y;
    get_input(&x, &y);
    
    int result = add(x, y);
    print_result(result);
    printf("Address of add(): %p\n", &add);

    return 0;
}

