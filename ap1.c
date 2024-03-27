#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("[----- [Gahyun KIM] [2020045070] -----]\n");
int list[5]; //5개의 정수 배열
int *plist[5] = {NULL,}; //정수에 대한 5개의 포인터 배열
plist[0] = (int *)malloc(sizeof(int)); //plist[0]에 정수형 사이즈만큼의 메모리 할당
list[0] = 1; //list 배열 첫번째 자리에 1을 대입
list[1] = 100; //list의 두번째 자리에 100을 대입
*plist[0] = 200; //포인터 변수 plist[0]이 가리키는 실제 값을 200으로 변경
printf("list[0] = %d\n", list[0]); //list[0]에 저장된 실제 값 출력 : 1
printf("&list[0] = %p\n", &list[0]);  //list[0]의 주소 출력 : 0061FF0C
printf("list = %p\n", list); //list의 값 즉, 배열의 시작주소 출력 : 0061FF0C
printf("&list = %p\n", &list); //배열의 주소 출력 : 0061FF0C
printf("----------------------------------------\n\n");
printf("list[1] = %d\n", list[1]);//list[1]에 저장된 값 출력 : 100
printf("&list[1] = %p\n", &list[1]); //list[1]의 주소 출력 : 0061FF10 : list[0]에서 4 bytes를 더한 주소
printf("*(list+1) = %d\n", *(list + 1));//(list+1)에 저장된 주소가 가리키는 값 : 100
                                        //배열의 시작 주소(list의 주소)에서 4bytes 더한 메모리에 저장된 값 : 100
printf("list+1 = %p\n", list+1); //list+1의 주소 : list의 주소에서 4 bytes 더한 주소 
printf("----------------------------------------\n\n");
printf("*plist[0] = %d\n", *plist[0]); //plist[0]에 저장된 주소가 가리키는 값 : 200
printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소
printf("&plist = %p\n", &plist);  //plist 배열의 주소 즉, plist[0]의 주소
printf("plist = %p\n", plist);  //배열의 이름=배열의 시작주소 / plist배열의 시작 주소, plist[0]의 주소
printf("plist[0] = %p\n", plist[0]); //plist[0]의 값 위에서 할당한 메모리의 주소 값 출력
printf("plist[1] = %p\n", plist[1]); //plist[1]의 값, NULL값
printf("plist[2] = %p\n", plist[2]); //plist[2]의 값, NULL값
printf("plist[3] = %p\n", plist[3]); //plist[3]의 값, NULL값
printf("plist[4] = %p\n", plist[4]); //plist[4]의 값, NULL값
free(plist[0]); //할당된 plist[0] 값 해제
}
