#include<stdio.h>
#include<stdlib.h>

main (){
	int h1, m1;
	int h2, m2;
	int h3, m3;
	
	while (true){
		
		printf("ORE: ");
	    scanf("%d", &h1);
	    printf("MINUTI: ");
	    scanf("%d", &m1);
	
	    printf("ORE2: ");
	    scanf("%d", &h2);
	    printf("MINUTI2: ");
	    scanf("%d", &m2);
	    
		if(h1 <= 24 and h2 <= 24 and m1 <= 60 and m2 <=60){
			if (h1 > h2) {
	            h3 = h1 - h2;
	        }
	        else {
	 	        h3 = h2 - h1;
	        }
	
	        if (m1 > m2) {
		        m3 = m1 - m2;
	        }
	        else {
		        m3 = m2- m1;
	        }
	        break;
		}
		else {
			printf("Le ore devono essere sotto il 24 e i minuti sotto 60\n");
		}
	}
	
	printf("%d", h3);
	printf(":");
	printf("%d", m3);
}