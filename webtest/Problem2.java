
// encoding utf-8
// tested with : jdk6 <- please replace with your environment
//

import java.io.*;
import java.util.Arrays;

public class Problem2 {

    public static void main(String[] args) throws Exception {
        // 標準入力
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String line;
        // EOFで終わる
        while ((line = br.readLine()) != null) {
            // スペース区切りで配列に入れていく
            String[] str = line.split(" ", 0);
            String[] hoge = new String[str.length];
            int j = 0;
            for (int i = 0; i < str.length; i++) {
                // str[i] の中身が hoge の配列の中に入っているかを確認
                if (Arrays.asList(hoge).contains(str[i])) {
                    continue;
                } else {
                    hoge[j] = str[i];
                    j++;
                }
            }
            for (int i = 0; i < j-1; i++) {
                System.out.print(hoge[i] + " ");
            }
            // 改行する
            System.out.println(hoge[j-1]);
        }
    }

}
