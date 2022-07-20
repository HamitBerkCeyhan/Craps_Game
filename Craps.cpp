#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int a,b,toplam,puan,kilit=0;
	srand(time(NULL));
	a=rand()%6+1;
    b=rand()%6+1;
    toplam=a+b;
    printf("Zarlar toplami: %d\n",toplam);
    
    if(toplam==7 || toplam==11){
    	printf("Tebrikler Kazandiniz...");
	}
	if(toplam==2 || toplam==3 || toplam==12){
		printf("Kaybettiniz...");
	}
	else{
		puan=toplam;
	    printf("Puaniniz: %d\n", puan);
	    while(1){
	    printf("Yeni zar atmak icin ENTER tusuna basiniz.");
	    getchar();
	a=rand()%6+1;
    b=rand()%6+1;
    toplam=a+b;
    printf("toplam: %d\n",toplam);
    if(toplam==7){
    	printf("Kaybettiniz...");
    	break;
    }
	if(toplam==puan){
    	printf("Tebrikler Kazandiniz...");
    	break;
	   }
	}
}
}

