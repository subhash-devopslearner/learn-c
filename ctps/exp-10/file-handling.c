#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rno;
    char name[20];
    float cgpa;
};

int main() {
    struct Student s;
    FILE *fpw, *fpa, *fpr;
    int n, rno, flag = 0;
    char ch;

    do {
        flag = 0;
        printf("\nEnter your choice\n");
        printf("1.W\n2.R\n3.A\n4.S\n5.D\n6.E\n");
        scanf("%d", &n);

        switch (n) {
        case 1:
            fpw = fopen("StudRec.dat", "wb");
            if (fpw == NULL) {
                printf("File open error\n");
                break;
            }
            printf("Enter roll no, name and CGPA (rno,name,cgpa)\n");
            scanf("%d,%19[^,],%f", &s.rno, s.name, &s.cgpa);
            fwrite(&s, sizeof(s), 1, fpw);
            fclose(fpw);
            printf("One record written...\n");
            break;

        case 3:
            fpa = fopen("StudRec.dat", "ab");
            if (fpa == NULL) {
                printf("File open error\n");
                break;
            }
            printf("Enter roll no, name and CGPA (rno,name,cgpa)\n");
            scanf("%d,%19[^,],%f", &s.rno, s.name, &s.cgpa);
            fwrite(&s, sizeof(s), 1, fpa);
            fclose(fpa);
            printf("One record appended...\n");
            break;

        case 2:
            fpr = fopen("StudRec.dat", "rb");
            if (fpr == NULL) {
                printf("File not found\n");
                break;
            }
            while (fread(&s, sizeof(s), 1, fpr) == 1)
                printf("%d %s %.2f\n", s.rno, s.name, s.cgpa);
            fclose(fpr);
            break;

        case 4:
            fpr = fopen("StudRec.dat", "rb");
            if (fpr == NULL) {
                printf("File not found\n");
                break;
            }
            printf("Enter Roll No to Search\n");
            scanf("%d", &rno);

            while (fread(&s, sizeof(s), 1, fpr) == 1) {
                if (rno == s.rno) {
                    printf("%d %s %.2f\n", s.rno, s.name, s.cgpa);
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                printf("Roll No not found\n");
            fclose(fpr);
            break;

        case 5:
            fpr = fopen("StudRec.dat", "rb");
            fpw = fopen("StudRecDel.dat", "wb");
            if (fpr == NULL || fpw == NULL) {
                printf("File error\n");
                break;
            }

            printf("Enter Roll No to Delete\n");
            scanf("%d", &rno);

            while (fread(&s, sizeof(s), 1, fpr) == 1) {
                if (rno == s.rno) {
                    flag = 1;
                } else {
                    fwrite(&s, sizeof(s), 1, fpw);
                }
            }

            fclose(fpr);
            fclose(fpw);

            if (flag) {
                remove("StudRec.dat");
                rename("StudRecDel.dat", "StudRec.dat");
                printf("Record deleted\n");
            } else {
                remove("StudRecDel.dat");
                printf("Record not found\n");
            }
            break;

        case 6:
            exit(0);
        }

        printf("Do you want to continue [y/n]: ");
        getchar();          // clear buffer
        ch = getchar();

    } while (ch == 'y' || ch == 'Y');

    return 0;
}
