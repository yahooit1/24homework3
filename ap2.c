#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [Gahyun KIM] [2020045070] -----]\n");
int list[5]; //5개의 정수 배열
int *plist[5]; //정수에 대한 5개의 포인터 배열
list[0] = 10; //list[0]을 10으로 초기화
list[1] = 11; //list[1]을 11으로 초기화
plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 정수형 사이즈만큼의 메모리 할당
printf("list[0] \t= %d\n", list[0]);  //list[0]의 값 출력 : 10
printf("list \t\t= %p\n", list); //list의 주소 출력 : list배열의 시작주소 출력 
printf("&list[0] \t= %p\n", &list[0]);  //list[0]의 주소 출력 
printf("list + 0 \t= %p\n", list+0); //list+0 = &(list[0]) :list + (0 *4 bytes)
printf("list + 1 \t= %p\n", list+1); //list+1 = &(list[1]) :list + (1 *4 bytes)
printf("list + 2 \t= %p\n", list+2); //list+2 = &(list[2]) :list + (2 * 4 bytes)
printf("list + 3 \t= %p\n", list+3); //list+3 = &(list[3]) :list + (3 * 4 bytes)
printf("list + 4 \t= %p\n", list+4); //list+4 = &(list[4]) :list + (4 * 4 bytes)
printf("&list[4] \t= %p\n", &list[4]); //list[4]의 주소 list[0]+(4*4bytes)
free(plist[0]);//plist[0] 할당 해제
}

