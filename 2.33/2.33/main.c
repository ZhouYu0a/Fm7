#include <stdio.h>

int main() {
    // �ŧi�ܼ�
    double total_distance, fuel_price, fuel_efficiency;
    double parking_fee, toll_fee, total_cost;
    double fuel_used, fuel_cost;

    // ��J�@��Ѫ��`���{��
    printf("�п�J�@��Ѫ��`���{�ơ]�����^�G");
    scanf("%lf", &total_distance);

    printf("�п�J�T�o�C���ɪ�����G");
    scanf("%lf", &fuel_price);

    // ��J�C���ɡ]�Υ[�ڡ^���p�h�֤���
    printf("�п�J�����C���ɯ��p�h�֤����G");
    scanf("%lf", &fuel_efficiency);

    // ��J�@�Ѫ������O
    printf("�п�J�@�Ѫ������O�G");
    scanf("%lf", &parking_fee);

    // ��J�@�Ѫ��q��O�]�L���O�^
    printf("�п�J�@�Ѫ��q��O�G");
    scanf("%lf", &toll_fee);
    fuel_used = total_distance / fuel_efficiency;
    fuel_cost = fuel_used * fuel_price;
    total_cost = fuel_cost + parking_fee + toll_fee;
    printf("\n--- ���G ---\n");
    printf("�U�o���Ӷq�G%.2f ���ɡ]�Υ[�ڡ^\n", fuel_used);
    printf("�U�o�O�ΡG%.2f ��\n", fuel_cost);
    printf("�@�Ѫ������O�G%.2f ��\n", parking_fee);
    printf("�@�Ѫ��q��O�G%.2f ��\n", toll_fee);
    printf("�@�Ѷ}���h�u�@���`��O�G%.2f ��\n", total_cost);

    return 0;
}