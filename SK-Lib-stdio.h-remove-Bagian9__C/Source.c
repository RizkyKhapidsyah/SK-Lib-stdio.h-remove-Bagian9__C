#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    if (remove("crt_remove.txt") == -1) {
        perror("Could not delete 'CRT_REMOVE.TXT'");
    } else {
        printf("Deleted 'CRT_REMOVE.TXT'\n");
    }
      
    _getch();
    return 0;
}