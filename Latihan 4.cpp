#include <stdio.h>
#include <string.h>

int main()
{
char nim [10];
char nama [30];
int kehadiran, tugas, uts, uas;
float nilai_akhir;

strcpy(nim, "141150123");
strcpy(nama, "Achmad Solichin");
kehadiran = 100;
tugas = 90;
uts = 83;
uas = 86;
nilai_akhir =  (0.1 * kehadiran) + (0.2 * tugas) + (0.3 * uts) + (0.4 * uas);
printf("NIM \t : %s \n", nim);
printf("NAMA \t : %s \n", nama);
printf("KEHADIRAN \t : %i \n", kehadiran);
printf("TUGAS \t : %i \n", tugas);
printf("UTS \t : %i \n", uts);
printf("UAS \t : %i \n", uas);
printf("NILAI AKHIR \t: %.2f \n", nilai_akhir);

return 0;

}
