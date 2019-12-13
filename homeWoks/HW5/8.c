#include <stdio.h>

int main(){
	int n ;
	int x , y;
	int end , head ;

	scanf("%d",&n);

	if( n != 0 )
		scanf(" (%d, %d)" , &head , &end) ;
	int i; 
	for(i = 1 ; i<n ; i++){
		scanf(" (%d, %d)" , &x , &y) ;
		if( head < x ) head = x;
		if( end > y ) end = y;
	}
	
	if(end >= head)
		printf("(%d, %d)" ,head, end );

	return 0;

}

