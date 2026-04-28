/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 3
 *   Hari dan Tanggal    : Selasa, 28 April 2026
 *   Nama (NIM)          : Hufnagel Ruben Lenard Situmorang (13224015)
 *   Nama File           : soal1.c
 *   Deskripsi           : 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Petugas{
    char nama[100];
    int id;
    char shift[10];
    int skor;
} Petugas;

int main(){
    int n;
    scanf("%d",&n);

    Petugas listpetugas[n];
    
    for (int i=0;i<n;i++){
        scanf("%s %d %s %d",&listpetugas[i].nama,&listpetugas[i].id,&listpetugas[i].shift,&listpetugas[i].skor);
    }

    int x=-1, y=-1, z=-1;
    int sementara = -1;
    int id_sementara = 1001; 

    for (int i =0;i<n;i++){
        if (strcmp(listpetugas[i].shift,"PAGI")==0){
            if (listpetugas[i].skor>sementara){
                x = i;
                sementara = listpetugas[i].skor;
                id_sementara = listpetugas[i].id;
            }
            else if (listpetugas[i].skor==sementara){
                if (listpetugas[i].id<id_sementara){
                    x = i;
                    sementara = listpetugas[i].skor;
                    id_sementara = listpetugas[i].id;
                }
            }
        }
    }

    sementara = -1;
    id_sementara = 1001;

    for (int i =0;i<n;i++){
        if (strcmp(listpetugas[i].shift,"SIANG")==0){
            if (listpetugas[i].skor>sementara){
                y = i;
                sementara = listpetugas[i].skor;
                id_sementara = listpetugas[i].id;
            }
            else if (listpetugas[i].skor==sementara){
                if (listpetugas[i].id<id_sementara){
                    y = i;
                    sementara = listpetugas[i].skor;
                    id_sementara = listpetugas[i].id;
                }
            }
        }
    }

    sementara = -1;
    id_sementara = 1001;
    for (int i =0;i<n;i++){
        if (strcmp(listpetugas[i].shift,"MALAM")==0){
            if (listpetugas[i].skor>sementara){
                z = i;
                sementara = listpetugas[i].skor;
                id_sementara = listpetugas[i].id;
            }
            else if (listpetugas[i].skor==sementara){
                if (listpetugas[i].id<id_sementara){
                    z = i;
                    sementara = listpetugas[i].skor;
                    id_sementara = listpetugas[i].id;
                }
            }
        }
    }

    if (x!=-1){
        printf("PAGI %s %d %d\n",listpetugas[x].nama, listpetugas[x].id, listpetugas[x].skor);
    }
    else{
        printf("PAGI -\n");
    }
    if (y!=-1){
        printf("SIANG %s %d %d\n",listpetugas[y].nama, listpetugas[y].id, listpetugas[y].skor);
    }
    else{
        printf("SIANG -\n");
    }
    if (z!=-1){
        printf("MALAM %s %d %d",listpetugas[z].nama, listpetugas[z].id, listpetugas[z].skor);
    }
    else{
        printf("MALAM -");
    }
    return 0;
}
