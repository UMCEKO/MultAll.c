#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayilar[100],i,toplam,carpim,kez;
	printf("Lutfen kac sayiyi toplamak istediginizi giriniz:");
	toplam=0;
	carpim=1;
	scanf("%d",&kez);
	for(i=0;i<kez;i++){
		printf("Lutfen toplayacaginiz %d. sayiyi giriniz:",i+1);
		scanf("%d",&sayilar[i]);
	}
	for(i=0;i<kez;i++){
		toplam=toplam+sayilar[i];
	}
	for(i=0;i<kez;i++){
		carpim=carpim*sayilar[i];
	}
	printf("Sayilarin Toplami: %d\nSayilarin Ortalamasi: %d\nSayilarin Carpimi: %d",toplam,toplam/kez,carpim);
	
	return 0;
}
