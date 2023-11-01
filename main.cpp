using namespace std;
#include <iostream>
#define MIN 100
#define MAX 999
int main() {
/*
 * 12.1 Viết chương trình tính tổng từ 1 - 100
 * */
//    int tong = 0;
//    for(int i=0; i <= 100; i++){
//        tong += i;
//    }
//    cout << "Tổng từ 1 - 100: " << tong << endl;
//    return 0;

/*
 * 12.2 Viết chương trình tính nhập vào sô tự nhiên n. Tính tổng các số chia hết cho 3 nhỏ n
 * */
//    int n, tong = 0;
//    cout << "Nhập n: ";
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        if(i % 3 == 0){
//            tong += i;
//        }
//    }
//    cout << "Tổng là: " << tong <<  endl;
//    return 0;

/*
 * 12.3 Viết chương trình in ra 100 số Fibonacci
 * */
//    int n1 = 0, n2 = 1, n3 = 1;
//    for (int i = 0; i < 100; i++){
//        cout << n3 << " ";
//        n3 = n1 + n2;
//        n1 = n2;
//        n2 = n3;
//    }
//    return 0;

/*
 * 12.4 Viết chương trình nhập vào số n kiểm tra có phải là số Polinom không
 * */
//    int n, mod, n2 = 0;
//    cout << "Nhập n: ";
//    cin >> n;
//    int number = n;
//    for (; n > 0;){
//        mod = n % 10;
//        n2 = n2 * 10 + mod;
//        n = n / 10;
//    }
//    cout << n2 << endl;
//    if (n2 == number){
//        cout << "Đây là số polinom!";
//    }else {
//        cout << "Đây không phải là số polinom!";
//    }
//    return 0;

/*
 * 12.5 Viết chương trình liệt kê các số 100 - 999 có tổng các chữ số chia hết cho 3
 * */
   for(int i = 100; i <= 999; i++){
       int mod, tong = 0, n = i;
       for (;n > 0;) {
           mod = n % 10;
           tong += mod;
           n = n / 10;
       }
       if(tong % 3 == 0){
           cout << i << " ";
       }
   }
    return 0;
}

