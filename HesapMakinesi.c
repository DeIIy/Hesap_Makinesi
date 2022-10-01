#include<stdio.h>
#include<stdlib.h>

char slct, change = 'y';
int x=0, y=0, kontrol=0;
float process = 0.0;

void IslemSatiri();

int main() {
	
	while(1) {
		
		if(kontrol ==1) {
		
			printf("\nSayilari degistirmek istiyor musun ? (y/n) -->");
			scanf(" %c",&change);
		
		}
		
		kontrol = 1;
		
		switch(change) {
		
		case 'y':
				
				printf("\nBirinci sayiyi giriniz --> ");
				scanf("%d",&x);
				
				printf("\nIkinci sayiyi giriniz --> ");
				scanf("%d",&y);
				
				break;
				
		default:
				printf("Son girisiniz alinacaktir...");
		
		}
		
		printf("\nYapilacak islem cesidini giriniz(Cikmak icin [.]) -->");
		scanf(" %c",&slct);
		
		switch(slct) {
		
		case '+':
				process = x + y;
				IslemSatiri();
				break;
				
		case '-':
				process = x  - y;
				IslemSatiri();
				break;
				
		case '*':
				process = x * y;
				IslemSatiri();
				break;
				
		case '/':
				process = (float) x / y;
				IslemSatiri();
				break;
				
		case '.':
				exit(0);
				
		default:
				printf("Hatalı Islem! Lutfen Dort islemden giriniz...");
				
		
		}	
	
	}

	return 0;
}

void IslemSatiri() {
	printf("\n<-(%d %c %d = %.1f)->\n",x,slct,y,process);
}


