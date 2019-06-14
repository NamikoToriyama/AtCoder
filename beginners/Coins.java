package beginners;

import java.util.*;

public class Coins {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // スペース区切りの整数の入力
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int n = sc.nextInt();
        int counter = 0;
        sc.close();

        for (int hun = b; hun >= 0; hun--) {
            for (int fiv = c; fiv >= 0; fiv--) {
                int cul = n - 100 * hun - 50 * fiv;
                    if ((cul % 500) == 0) {
                        if((( cul / 500) <= a) && cul >= 0){
                        counter++;
                        //int fi = (n - 100 * hun - 50 * fiv) / 500;
                        //System.out.println("fih:"+fi+"hun"+hun+"fiv"+fiv);
                        }
                    }
            }
        }

        // 出力
        System.out.println(counter);

    }
}
