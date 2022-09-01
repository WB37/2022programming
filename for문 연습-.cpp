#include <stdio.h>

func1(){
	printf("\n[예제]=============\n");

}

func2(){

}

func3(){
	
}


main(){
	
	int no; //문제 번호 
	while(1){
		printf("몇번문제?:");
		scanf("%d" , &no);
		printf("%d번문제\n" , no);
		switch(no){
			case 1:	func1();break;
			case 2: func2();break;
			case 3:	func3();break;
			default:
				printf("잘못입력\n");
				return 0;
		}
	}
}
