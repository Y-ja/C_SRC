#include <stdio.h>

struct cracker
{
	int price;
	int kcal;
};

int main(void)
{
	struct cracker basasak;
	
	printf("바사삭의 가격과 열량을 입력하세요 : ");
	scanf("%d%d", &basasak.price, &basasak.kcal);

	printf("바사삭의 가격 : %d원\n", basasak.price);
	printf("바사삭의 열량 : %dkcal", basasak.kcal);
    
    return 0;
}