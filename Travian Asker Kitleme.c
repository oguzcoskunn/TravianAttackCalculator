#include <stdio.h>
#include <stdlib.h>


int main()

{
    system("color A");
    float x1,x2,y1,y2,mesafe,hiz,saniyedehiz,sure,sonuc,saniye,varissaniye,saniyebirfazla,varissaniye2;
    printf(" Senin Koyun Koordinatlari\n");
    printf("  X: ");
    scanf("%f",&x1);
    printf("  Y: ");
    scanf("%f",&y1);

    printf(" Dusman Koyun Koordinatlari\n");
    printf("  X: ");
    scanf("%f",&x2);
    printf("  Y: ");
    scanf("%f",&y2);

    float a,b;

    a=x1-x2;
    b=y1-y2;
    mesafe=sqrt(pow(a,2)+pow(b,2));

    printf("\n\n Dusmanin Yolladigi En Yavas Askerin Hizi:");
    scanf("%f",&hiz);

   saniyedehiz=hiz/3600;
   sure=mesafe/saniyedehiz;

   int saat,dakika1,dakika2;

   saat=sure/3600;
   dakika1=sure/60;
   dakika2=dakika1%60;

    while(sure>60)
        {
            saniye=sure-60;
            sure=saniye;
        }

    printf("\n\n************************************\n");
    printf("Dusmanin Geri Donus Suresi: %d:%d:%0.f\n",saat,dakika2,saniye);
    printf("************************************\n");

     int saldirdigisaat,saldirdigidakika,saldirdigisaniye,varissaat,varisdakika,ekdakika,eksaat;

    printf("\n\n Saldirinin Sana Vardigi (Saat/Dakika/Saniye Ayri Ayri Gir)\n------------------------\n -Saat: ");
    scanf("%d",&saldirdigisaat);

    printf(" -Dakika: ");
    scanf("%d",&saldirdigidakika);

    printf(" -Saniye: ");
    scanf("%d",&saldirdigisaniye);

    varissaniye=(saniye+saldirdigisaniye);

      while(varissaniye>60)
        {
            varissaniye2=varissaniye-60;
            varissaniye=varissaniye2;
        }

    saniyebirfazla=varissaniye+1;
    ekdakika=(saniye+saldirdigisaniye)/60;
    varisdakika=(dakika2+saldirdigidakika+ekdakika)%60;
    eksaat=(dakika2+saldirdigidakika+ekdakika)/60;
    varissaat=(saldirdigisaat+saat+eksaat)%24;


    printf("\n\n*****************************************\n");
    printf("Askerleri Kitleyecegin Tam Saat: %d:%d:%0.f\n",varissaat,varisdakika,saniyebirfazla);
    printf("*****************************************\n\n");
    printf("(Kapatmak icin Herhangi bir Tusa Bas...)\n");

    getch();

    return 0;
    }
