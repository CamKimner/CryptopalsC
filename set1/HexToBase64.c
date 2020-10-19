#include <string.h>
#include <stdio.h>

char* hexToBase64(const char* hex);

int main(int argc, char * argv[])
{
    const char hexIn[] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";

    printf("Input:\n %s\n", hexIn);



    return 0;
}

char* hexToBase64(const char* hex){
    char base64[] = "";

    strcpy(base64, hex);

    return base64;
}