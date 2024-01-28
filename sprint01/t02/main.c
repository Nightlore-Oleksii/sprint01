#include <unistd.h>
#include <string.h>

void mx_write_knock_knock(void) {
    char *string = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    write(1, string, strlen(string));
}

int main() {
    mx_write_knock_knock();
    return 0;
}
