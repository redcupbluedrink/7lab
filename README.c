#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 1
const int N = (-33.5-(-4.5))/-0.5+1;
	int main() {
	int i, k, j; 
	float A[N], a = 2.14,  b = -4.21, c = 3.25, h = 0.5, xk =-4.5, x =-33.5; 	
	for (i = 0; i < N; i++) {
		A[i]= x*x*a*sin(x)+b*x+c;
		x += h;
	}
	for(i = 0 ; i < N - 1; i++) // ìåòîä ïóçûðüêà
    	for (i = 0; i < N; i++)
        	for (j = N - 1; j > i; j--)
            	if (A[j - 1] < A[j])
            	{
                	A[N] = A[j - 1]; 
                	A[j - 1] = A[j];
                	A[j] = A[N]; 
            	}

	for (i = 0; i < N; i++) 
		printf("A[%d]=%5f  ", i, A[i]);      
}
*/

/* 2
const int N = 15;
int random (int N) { return rand()%N; }
int main() {
  int i, j, A[N], a = 0, b = 10, k;
  for ( i = 0; i < N; i ++ )
		A[i] = random(b-a+1) + a;
for (i = 0; i < N; i++) {
	printf("%3d",A[i]);
	}
printf("\n");
for (i = 0; i < N; i++ ) {
	  k=0;
	  for (j=0; j<i;j++) {
	  	if (A[i]==A[j]) {
		  k+=1;
			}
		}
      if  (k==0) {
	  	printf("%3d",A[i]);
	  	}
	}
}
*/


/* 3
const int N = 20;
int random (int N) { return rand()%N; }
int main() {
  int i,k=0,B[k],A[N], a = -10, b = 10;
  for ( i = 0; i < N; i ++ ) {
  	A[i] = random(b-a+1) + a;
  	if (A[i]>0) {
  		B[k]=A[i];
	    k+=1;
	  }
	printf("%4d",A[i]);  
  }
  printf("\n");
  for (i=0; i<k; i++) 
  	printf("%4d",B[i]);
	
}
*/

/* 4
const int N = 20;
int random (int N) { return rand()%N; }
int main() { 
int i, j, tmp, C[N], D[N], E[N*2] , a = 0, b = 20, c = 0, d = 0;
for ( i = 0; i < N; i ++ ) { // C massiv
  	C[i] = random(b-a+1) + a;
  	printf("%4d",C[i]);
	}	 
	printf("\n");  	
	
for ( i = 0; i < N; i ++ ) { // D massiv
  	D[i] = random(b-a+1) + a;
    printf("%4d",D[i]);
	}		  
printf("\n"); 
	
for(i = 0 ; i < N - 1; i++) { // ñîðòèðîâêà C
       for(j = 0 ; j < N - i - 1 ; j++) {  
           if(C[j] > C[j+1]) {          
              tmp =C[j];
              C[j] = C[j+1] ;
              C[j+1] = tmp; 
           }
        }
    } 
for ( i = 0; i < N; i ++ ) printf("%4d",C[i]);   
	printf("\n"); 

 for(i = 0 ; i < N - 1; i++) { // ñîðòèðîâêà D
       for(j = 0 ; j < N - i - 1 ; j++) {  
           if(D[j] > D[j+1]) {          
              tmp =D[j];
              D[j] = D[j+1] ;
              D[j+1] = tmp; 
           }
        }
    }
for(i = 0 ; i < N ; i++) printf("%4d",D[i]);   
	printf("\n"); 
	
 for (i = 0; i < N*2;i++) { // îáúåäèíåíèå â E ñ ñîðòèðîâêîé 
 	if (C[c] <= D[d]){
 		E[i]=C[c];
	    c+=1;
	 }
    else if (D[d] <= C[c]){
    	E[i]=D[d];
		d+=1;
	}
printf("%4d",E[i]);
 }
}
*/
