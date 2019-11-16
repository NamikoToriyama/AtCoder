// encoding utf-8
// tested with : jdk6 <- please replace with your environment
//

import java.io.*;

public class Problem1 {

    public static void main(String[] args) throws Exception {
        // 標準入力
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String line;
        int num=0;
        int sum = 0;
        // EOFで終わる
        while((line = br.readLine())!=null){
            for(int i=0; i<line.length();i++){
                char c = line.charAt(i);
                if(c < '0' || c > '9'){
                    sum += num;
                    num = 0;

                } else { // charが数値の場合
                    num *= 10;
                    num = num + (c - '0');
                }
            }
            sum += num;
            System.out.println(sum);
            // 次のために初期化
            num=0;
            sum = 0;
        }
    }

}
