#include <stdio.h>
#include <stdlib.h>
#include "include/lexer.h"






void usage() {
    printf("usage : vin <filename>\n");
    exit(1);
}


int main(int argc, char** argv) {
    char *filename;
    uint8_t *program;

    if (argc!=2){
        usage();
    }

    filename = argv[1];
    program = read_entry(filename);

    print("%s\n", program);

    return 0;

    


}