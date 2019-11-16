// encoding utf-8
// tested with : jdk6 <- please replace with your environment
//

import java.io.*;

public class Practice2 {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String line = br.readLine();
        int inputNum = Integer.parseInt(line);

        for (int i = 0; i < inputNum; i++ ) {
            line = br.readLine();
            System.out.println("Hello, " + line);
        }
    }

}
