#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int); //sum1 함수 선언 (배열을 인수로 받음)
float sum2(float *list, int); //sum2 함수 선언 (포인터를 인수로 받음)
float sum3(int n, float *list); //sum3 함수 선언 (포인터와 정수를 인수로 받음)
float input[MAX_SIZE], answer; //input 배열 선언, answer 변수 선언
int i; //i 변수 선언
void main(void)
{
printf("[----- [Gahyun KIM] [2020045070] -----]\n");
for(i=0; i < MAX_SIZE; i++) //i=0부터 MAX_SIZE까지 i++ 반복
input[i] = i; //input[i]=i로 초기화
/* for checking call by reference */
printf("--------------------------------------\n");
printf(" sum1(input, MAX_SIZE) \n"); // 
printf("--------------------------------------\n");
printf("input \t= %p\n", input);
answer = sum1(input, MAX_SIZE); //answer = sum1의 결과
printf("The sum is: %f\n\n", answer);
printf("--------------------------------------\n");
printf(" sum2(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);
answer = sum2(input, MAX_SIZE); //answer=sum2의 결과
printf("The sum is: %f\n\n", answer);
printf("--------------------------------------\n");
printf(" sum3(MAX_SIZE, input) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input); 
answer = sum3(MAX_SIZE, input); //answer = sum1의 결과
printf("The sum is: %f\n\n", answer);
}
float sum1(float list[], int n) {
printf("list \t= %p\n", list); //list 배열의 시작 주소 출력
printf("&list \t= %p\n\n", &list); //list 배열의 주소 출력
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
    tempsum += list[i]; //tempsum에 list 배열의 값들 저장하여 더함
return tempsum;
}
float sum2(float *list, int n) { //포인터를 인수로 받음
printf("list \t= %p\n", list); //list 배열의 시작 주소 출력
printf("&list \t= %p\n\n", &list); //list 배열의 주소 출력
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += *(list + i); //포인터를 통해 배열의 값들 저장하여 더함
return tempsum;
}
/* stack variable reuse test */ //스택 변수 재사용 테스트
float sum3(int n, float *list) {
printf("list \t= %p\n", list);
printf("&list \t= %p\n\n", &list);
int i;
float tempsum = 0;
for(i = 0; i < n; i++) //n까지 반복
tempsum += *(list + i); //list에 i를 더한 위치에 있는 값을 tempsum에 저장하여 더함
return tempsum;
}
