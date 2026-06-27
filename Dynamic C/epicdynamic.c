#include <stdio.h>
#include <windows.h>

typedef void (*get_input_func)(int*, int*);
typedef int (*add_func)(int, int);
typedef void (*print_func)(int);

int main() 
{
    HMODULE hDll = LoadLibrary("epicdll.dll");

    if (!hDll) 
    {
        printf("Failed to load DLL\n");
        return 1;
    }

    get_input_func get_input = (get_input_func)GetProcAddress(hDll, "get_input");
    add_func add = (add_func)GetProcAddress(hDll, "add");
    print_func print_result = (print_func)GetProcAddress(hDll, "print_result");

    if (!get_input || !add || !print_result) 
    {
        printf("Failed to find functions\n");
        return 1;
    }

    int x;
    int y;
    get_input(&x, &y);

    int result = add(x, y);

    print_result(result);

    printf("Address of add(): %p\n", add);
    getchar(); // Wait for user input before closing
    getchar();

    FreeLibrary(hDll);
    return 0;
}