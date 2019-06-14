package beginners;

import java.util.*;

public class KagamiMochi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // スペース区切りの整数の入力
        int n = sc.nextInt();
        int mochi_num = n;
        List<Integer> list = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            list.add(a);
        }
        sc.close();
        Collections.sort(list);

        for (int i = 0; i < n - 1; i++) {
            if (list.get(i) == list.get(i + 1)) {
                mochi_num--;
            }
        }

        // 出力
        System.out.println(mochi_num);

    }
}
