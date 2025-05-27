#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    printf("press middle box to start(s), stop(p) and end(e) game\n");
    printf("press 'x' for normal attack\n");
    printf("press'xa' for special attack\n");
    printf("press 'L' to move left\n");
    printf("press 'r' to move right\n");
    printf("press 'u' to move forward\n");
    printf("press 'd' to move backward\n");
    printf("\ngame pad\n");
    printf("\n");
    char input[10];
    bool isgaming = false;
    bool running = true;

        while (running) {
        scanf("%s", input);

        if (strcmp(input, "e") == 0) {
            printf("end game...\n");
            break;
        }

        if (strcmp(input, "b") == 0) {
            isgaming = !isgaming;
            printf(isgaming ? "start\n" : "stop\n");
            continue;
        }

        if (!isgaming){
            printf("Enter 'b' to start\n");
            continue;
        }

        if (strcmp(input, "xa") == 0 || strcmp(input, "ax") == 0) {
            printf("special attack\n");
        }

        else if (strcmp(input, "x") == 0) {
            printf("attack\n");
        }

        else if (strcmp(input, "u") == 0) {
            printf("move forward\n");
        }

        else if (strcmp(input, "d") == 0) {
            printf("move downward\n");
        }

        else if (strcmp(input, "L") == 0) {
            printf("move left\n");
        }

        else if (strcmp(input, "r") == 0) {
            printf("move right\n");
        }
        else {
            printf("Invalid input: enter x, xa, u, d, L, r\n");
        }
    }

    return 0;
}
