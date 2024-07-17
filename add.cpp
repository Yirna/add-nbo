#include "add.h"

uint32_t read_uint32_from_file(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        fprintf(stderr, "읽기 오류: %s\n", filename);
        exit(EXIT_FAILURE);
    }

    uint32_t number;
    size_t read_size = fread(&number, sizeof(uint32_t), 1, file);
    fclose(file);

    if (read_size != 1) {
        fprintf(stderr, "읽기 오류: %s\n", filename);
        exit(EXIT_FAILURE);
    }

    return ntohl(number);
}
