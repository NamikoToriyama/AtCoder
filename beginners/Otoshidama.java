import java.util.*;

public class Otoshidama {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // スペース区切りの整数の入力
        int N = sc.nextInt();
        int Y = sc.nextInt();
        sc.close();
        int x = -1;
        int y = -1;
        int z = -1;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int tmp = (Y - 5000 * i - 1000 * j);
                if (((tmp % 10000) == 0) && tmp >= 0 ) {
                    if ((tmp / 10000) == (N - i - j)) {
                        x = N - i - j;
                        y = i;
                        z = j;
                    }
                } else if (((tmp % 5000) == 0) && tmp >= 0 ) { // 5000円台の時
                    if ((tmp / 5000) == (N - i - j)) {
                        x = N - i - j - 1;
                        y = i + 1;
                        z = j;
                    }
                } else if (((tmp % 1000) == 0) && tmp >= 0 ) { // 1000円台の時
                    if ((tmp / 1000) == (N - i - j)) {
                        x = N - i - j - 1;
                        y = i;
                        z = j + 1;
                    }
                } 
            }
        }

        // 出力
        System.out.println(x+" "+y+" "+z);

    }
}
