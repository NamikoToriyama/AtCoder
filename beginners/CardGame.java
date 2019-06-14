package beginners;

import java.util.*;

public class CardGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // スペース区切りの整数の入力
        int n = sc.nextInt();
        List<Integer> list = new ArrayList<>();
        int alice = 0;
        int bob = 0;

        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            list.add(a);
        }
        Collections.sort(list);
        //System.out.println(list);
        int i = n - 1;
        while(i >= 0) {
            alice += list.get(i);
            i--;
            if(i < 0){
                break;
            } else {
                bob += list.get(i);
                i--;
            }
        }
        int result = alice - bob;
        sc.close();
       
        // 出力
        System.out.println(result);

    }
}
