#include<stdio.h>
#include "ogrenci.h"

int main(){
int secim;
do{
  printf("\n---OGRENCI YONETIM SISTEMI---\n");
  printf("1.Ogrenci ekle\n");
  printf("2.Ogrenci listele\n");
  printf("0.Cikis\n");
  printf("seciminiz:");
  scanf("%d",&secim);
  
  switch(secim){
  case 1:
    ogrenciEkle();
    break;
  case 2:
    ogrenciListele();
    break;
  case 0:
    printf("programdan cikiliyor\n");
    break;
  default:
    printf("gecersiz secim\n");
   }
}while(secim!=0);

return 0;

}