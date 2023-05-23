#include <stdio.h>
int main() {
    int i,age,babyage=0,schoolage=0,adultage=0;
    printf("Enter the age of 20 persons\n");
    for (i=1;i<=20;i++) {
        printf("%d Person age", i);
        scanf("%d", &age);
        if(age>=0&&age<=2) {
            babyage++;
        } else if(age>=3&&age<=18) {
            schoolage++;
        } else{
            adultage++;
        }
    }
    printf("%d persons are in baby age\n",babyage);
    printf("%d persons are in school age\n",schoolage);
    printf("%d persons are in adult age\n",adultage);
    return 0;
}
