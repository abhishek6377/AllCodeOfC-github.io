#include<stdio.h>
int main(){
	int d;
	printf("Enter days ");
	scanf("%d",&d);
	switch(d){
		case 31:
			printf("january,March,May ,July,August,October,Deccember");
			break;
			case 28:
				printf("febuary");
				break;
				case 29:
					printf("leap year february");
					break;
					case 30:
						printf("April,June ,September,November");
						break;
						default:
							printf("Same day of all month");
	}
	return 0;
}
