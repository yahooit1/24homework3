#include <stdio.h>
void print_one(int *ptr, int rows); //print_one 함수 선언
int main()
{
printf("[----- [Gahyun KIM] [2020045070] -----]\n");
int one[] = {0, 1, 2, 3, 4}; //정수형 배열에 0 1 2 3 4 저장
printf("one = %p\n", one); //배열 one의 시작 주소
printf("&one = %p\n", &one); //one의 주소
printf("&one[0] = %p\n", &one[0]); //one[0]의 주소
printf("\n");
printf("------------------------------------\n");
printf(" print_one(&one[0], 5) \n");
printf("------------------------------------\n");
print_one(&one[0], 5);
printf("------------------------------------\n");
printf(" print_one(one, 5) \n");
printf("------------------------------------\n");
print_one(one, 5); //print_one 함수 호출
return 0;
}
void print_one(int *ptr, int rows) //print_one 함수 구현
{/* print out a one-dimensional array using a pointer */ //1차원 배열을 포인터를 사용해 출력
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++) //행의 개수만큼 반복
printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr+i = &(ptr[i]) , ptr+i의 값 출력
printf("\n");
}