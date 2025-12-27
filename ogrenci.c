#include<stdio.h>
#include "ogrenci.h"

void ogrenciEkle(){
   struct Ogrenci o;
   FILE*dosya=fopen("ogrenciler.txt","a");

   if(dosya==NULL){
      printf("dosya acilmadı\n");
      return;
      }
      
      printf("ogrenci no:");
      scanf("%d",&o.no);

      printf("ogrenci adi:");
      scanf("%s",o.ad);

      printf("Notu:");
      scanf("%f",&o.not);

      fprintf(dosya,"%d%s%.2f\n",o.no,o.ad,o.not);
      fclose(dosya);

      printf("ogrenci basarıyla eklendi.\n");
}
 
  void ogrenciListele(){
   struct Ogrenci o;
   FILE*dosya=fopen("ogrenciler.txt","r");

   ıf(dosya==NULL){
      printf("dosya bulunamadı\n");
      return;
   }
   while(fscanf(dosya,"%d%s%f",&o.no,o.ad,&o.not)!=EOF){
      printf("No:%d | Ad:%s | Not:%.2f\n",o.no,o.ad,o.not);
   }
   fclose(dosya);
}