package beginners;

import java.util.*;

public class Placing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // スペース区切りの整数の入力
        int a = sc.nextInt();
        int result = 0;
        sc.close();

        for (int i = 0; i < 3; i++) {
            if (a % 10 == 1) {
                result++;
            }
            a /= 10;
        }
        // 出力
        System.out.println(result);

    }
}
