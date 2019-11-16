
// encoding utf-8
// tested with : jdk6 <- please replace with your environment
//

import java.io.*;

public class Problem3 {

    public static void main(String[] args) throws Exception {
        // 標準入力
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String line = br.readLine();
        int num = Integer.parseInt(line);
        for (int k = 0; k < num; k++) {
            line = br.readLine();
            String a = "";
            // 文字を数値に変換する
            int inputNum = Integer.parseInt(line);

            while (inputNum > 26) {
                // 後ろのアルファベットから求めていく
                if(inputNum % 26 == 0){ // 26で割り切れてしまった時
                    a += convertToString(26);
                    inputNum--;// 桁下がり
                } else {
                    a += convertToString(inputNum % 26);
                }
                inputNum /= 26;
            }
            // 26以下の場合の分
            a += convertToString(inputNum);

            // 後ろの数から文字を出力
            for (int i = a.length() - 1; 0 <= i; i--) {
                System.out.print(a.charAt(i));
            }
            System.out.println();

        }
    }

    // convertToString ... 数値を規則のアルファベットに変える関数
    public static String convertToString(int num) {
        char c = 'A';
        c += num - 1;
        // System.out.println("debug" + String.valueOf(c));
        return String.valueOf(c);
    }

}
