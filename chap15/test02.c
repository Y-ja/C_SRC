#include <stdio.h>
#include <stdlib.h>

// 구조체 정의
struct book {
    char title[100];
    char author[100];
    int page;
    int price;
};

// 책 정보를 출력하는 함수
void print_book(const struct book *b) {
    printf("\n도서명: %s", b->title);
    printf("저자: %s", b->author);
    printf("페이지 수: %d\n", b->page);
    printf("가격: %d\n", b->price);
}

int main(void) {
    struct book b;

    // 책 정보 입력받기
    printf("제목: ");
    fgets(b.title, sizeof(b.title), stdin);

    printf("저자: ");
    fgets(b.author, sizeof(b.author), stdin);

    printf("페이지 수: ");
    scanf("%d", &b.page);

    printf("가격: ");
    scanf("%d", &b.price);

    // 책 정보 출력하기
    print_book(&b);

    return 0;
}