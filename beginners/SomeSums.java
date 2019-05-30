import java.util.*;

public class SomeSums {
    // ミス１ ３桁に対応できなかった
    // ミス２　最大値に対応してなかった
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // スペース区切りの整数の入力
        int n = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int result = 0;
        int sumDigits = 0;
        sc.close();

        for (int i = 1; i <= n; i++) {
            sumDigits = (i % 10) + (i % 100 / 10) + (i % 1000 / 100) + (i % 10000 / 1000) + (i / 10000); // (1の桁数) +
                                                                                                         // (10の桁数)
            if ((a <= sumDigits) && (sumDigits <= b)) {
                result += i;
                // System.out.println(i);
            }
        }
        // 出力
        System.out.println(result);

    }
}
