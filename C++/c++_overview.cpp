#include <cstdio>

int main() {
    char name[100];
    char department;
    int score;
    int score2; 
    double calculate average;
    printf("Please input your name....");
    scanf("%s", &name);
    getchar();
    printf("Please select your department....(a:CS b:Bio c:Math)");
    scanf("%c", &department);
    printf("Please input your score on test 1....)");
    scanf("%d", &score);
    printf("Please input your score2 on test 1....)");
    scanf("%d", &score2);
    printf("+---------------------+----------+------+------+-------+");
    printf("|        Name         |Department|Test 1|Test 2|Average|");
    printf("+---------------------+----------+------+------+-------+");
    printf("%s" , &name);
    printf("%c", &department);
    printf("%d", &score);
    printf("%d", &score2);

    return 0;
}
