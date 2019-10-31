#include <stdio.h>
int main()
{
int nuas,nuts,nakhir;
printf("======================\n");
printf("\nmasukkan nilai uas:");
scanf("%d",&nuas);
printf("\nmasukkan nilai uts:");
scanf("%d",&nuts);
nakhir = (nuts * 0.40) + (nuas * 0.60);
printf("\nnilai akhir adalah = %d\n",nakhir);

    if(nuts >=80){
        printf("Anda lulus");
    if(nakhir >= 85){
        printf("\nanda mendapat huruf A");
    }
    else if (nakhir >=70){
        printf("\nanda mendapat huruf B");
    }
    }
    else if(nuts<70){
        printf("\nanda tidak lulus");
    if (nakhir >=60){
        printf("\nanda mendapat huruf C");
    }
    else if (nakhir >=50){
        printf("\nanda mendapat huruf D");
    }
    else{
    printf("\nanda mendapat huruf E");
    }
    }
    else {
        printf("\nAnda Tidak Terdaftar");
    }
}
