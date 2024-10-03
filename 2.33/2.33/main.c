#include <stdio.h>

int main() {
    // 宣告變數
    double total_distance, fuel_price, fuel_efficiency;
    double parking_fee, toll_fee, total_cost;
    double fuel_used, fuel_cost;

    // 輸入一整天的總里程數
    printf("請輸入一整天的總里程數（公里）：");
    scanf("%lf", &total_distance);

    printf("請輸入汽油每公升的價格：");
    scanf("%lf", &fuel_price);

    // 輸入每公升（或加侖）能行駛多少公里
    printf("請輸入平均每公升能行駛多少公里：");
    scanf("%lf", &fuel_efficiency);

    // 輸入一天的停車費
    printf("請輸入一天的停車費：");
    scanf("%lf", &parking_fee);

    // 輸入一天的通行費（過路費）
    printf("請輸入一天的通行費：");
    scanf("%lf", &toll_fee);
    fuel_used = total_distance / fuel_efficiency;
    fuel_cost = fuel_used * fuel_price;
    total_cost = fuel_cost + parking_fee + toll_fee;
    printf("\n--- 結果 ---\n");
    printf("燃油消耗量：%.2f 公升（或加侖）\n", fuel_used);
    printf("燃油費用：%.2f 元\n", fuel_cost);
    printf("一天的停車費：%.2f 元\n", parking_fee);
    printf("一天的通行費：%.2f 元\n", toll_fee);
    printf("一天開車去工作的總花費：%.2f 元\n", total_cost);

    return 0;
}