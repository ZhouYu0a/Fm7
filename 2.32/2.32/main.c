#include <stdio.h>
int main()
{
    double bmi, wegiht, height;
    printf("�п�J�魫(KG) ����(M)");
    scanf(" %lf %lf", &wegiht, &height);
 
    bmi = wegiht / (height * height);
    printf("%.2f,", bmi);
    if (bmi < 18.5) {
        printf(" �L��(Underweight)\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        printf(" ���`(Normal)\n");
    }
    else if (bmi >= 25 && bmi < 29.9) {
        printf("�L��(Overweight)\n");
    }
    else {
        printf("�έD(Obese)\n");
    }

    


}

