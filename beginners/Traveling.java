import java.util.*;

public class Traveling {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // スペース区切りの整数の入力
        int N = sc.nextInt();
        int bar[];
        List<int[]> list = new ArrayList<>();
        boolean flag = true;

        for (int i = 0; i < N; i++) {
            bar = new int[3];
            bar[0] = sc.nextInt();
            bar[1] = sc.nextInt();
            bar[2] = sc.nextInt();
            list.add(bar);
        }
        sc.close();
        if (N == 1) {// N = 1の時
            int foo[] = new int[3];
            foo = list.get(0);
            if (((foo[0] + foo[1] + foo[2]) % 2) != 0) {// 偶奇の一致
                flag = false;
            }
            if (foo[0] < foo[1] + foo[2]) {
                flag = false;
            }
        } else { // Nが１以外の時
            for (int i = 0; i < N - 1; i++) {
                int foo[] = new int[3];
                int next[] = new int[3];
                foo = list.get(i);
                next = list.get(i + 1);

                if ((((foo[0] + foo[1] + foo[2]) % 2) != 0) || (((next[0] + next[1] + next[2]) % 2) != 0)) {// 偶奇の一致
                    flag = false;
                    break;
                }
                if (Math.abs(next[0] - foo[0]) < (Math.abs(next[1] - foo[1]) + Math.abs(next[2] - foo[2]))) { // 移動距離の計算
                    flag = false;
                    break;
                }

            }
        }

        if (flag == true) {
            // 出力
            System.out.println("Yes");
        } else {
            // 出力
            System.out.println("No");
        }
    }
}
