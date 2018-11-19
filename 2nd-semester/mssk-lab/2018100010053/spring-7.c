#include <stdio.h>

int main() {
    int first, second, third;
    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);

    if (((first*first) == ((second*second) + (third*third)))) {
        printf("Yes\n");
    } else if (((second*second) == ((first*first) + (third*third)))) {
        printf("Yes\n");
    } else if (((third*third) == ((second*second) + (first*first)))) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
