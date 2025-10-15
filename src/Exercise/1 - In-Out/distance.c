#include <stdio.h>

int main() {
    int distance;
    printf("กรอกระยะทางเป็นเมตร ที่มากกว่า 0: ");
    scanf("%d", &distance);

    if (distance < 1000) {
        printf("รถจักรยาน");
    } else if (distance >= 1000 ) {
        printf("รถโดยสาร");
    }

    return 0;
}
