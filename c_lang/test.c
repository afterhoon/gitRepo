#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "hello world";

    if(str == "hello world") printf("str == hello world\n");
    if(!strcmp(str, "hello world")) printf("strcmp(str, hello world)\n");
    if(&str == "hello world") printf("&str == hello world\n");

    return 0;
}