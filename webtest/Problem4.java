
// encoding utf-8
// tested with : jdk6 <- please replace with your environment
//

import java.io.*;

public class Problem4 {

    public static void main(String[] args) throws Exception {
        // 標準入力
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = br.readLine()) != null) {
            // スペース区切りで配列に入れていく
            String[] str = line.split(" ", 0);
            Integer[] c1 = makeStatus(str[0]);
            Integer[] c2 = makeStatus(str[1]);

            int gameCount = 0;
            // 各キャラのアタック力を定義
            int c1Attack = c2[1] - c1[2];
            int c2Attack = c1[1] - c2[2];

            // 負の値になる場合は0にする
            if (c1Attack < 0)
                c1Attack = 0;
            if (c2Attack < 0)
                c2Attack = 0;

            // どちらも攻撃力が0でない場合
            if (c1Attack != 0 || c2Attack != 0) {
                // どちらかのHPが0になるまで続ける
                while (c1[0] > 0 && c2[0] > 0) {
                    gameCount++;
                    c1[0] = c1[0] - c2[1] + c1[2];
                    c2[0] = c2[0] - c1[1] + c2[2];
                    // System.out.println("c1's HP : " + c1[0] + " c2's HP : " + c2[0]);
                }
            }
            if (c1[0] > c2[0]) { // 勝利した場合
                System.out.println("Win " + gameCount);
            } else if (c1[0] < c2[0]) {
                System.out.println("Lose " + gameCount);
            } else {
                System.out.println("Draw " + gameCount);
            }
        }
    }

    // makeStatus ... HP, Attack, Defence の順番に配列を入れていく関数
    public static Integer[] makeStatus(String str) {
        int num = 0, j = 0;
        Integer[] status = new Integer[3];
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if (c < '0' || c > '9') { // charが数値ではない場合
                status[j] = num;
                num = 0;
                j++;
            } else { // charが数値の場合
                num *= 10;
                num = num + (c - '0');
            }
        }
        status[j] = num;
        return status;
    }

}
