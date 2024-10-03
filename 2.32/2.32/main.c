#include <stdio.h>
int main()
{
    double bmi, wegiht, height;
    printf("請輸入體重(KG) 身高(M)");
    scanf(" %lf %lf", &wegiht, &height);
 
    bmi = wegiht / (height * height);
    printf("%.2f,", bmi);
    if (bmi < 18.5) {
        printf(" 過輕(Underweight)\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf(" 正常(Normal)\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("過重(Overweight)\n");
    }
    else {
        printf("肥胖(Obese)\n");
    }

    


}

