/* 查找一个集合中元素的最大值,规定该集合只有一个最大值
   其他所有值都相同*/
import java.util.ArrayList;
import java.util.List;

class Helper {
    //compare可以比较[a,b]和[c,d]中该集合元素和的大小
    //若[a,b]大返回1,相同返回0,否则返回-1
    public int compare(int a, int b, int c, int d, List<Integer> arr) {
        int ret1 = 0;
        int ret2 = 0;
        for (int i = a, j = c; i <= b; i++) {
            ret1 += arr.get(i);
            ret2 += arr.get(j);
        }
        if (ret1 > ret2) {
            return 1;
        } else if (ret1 < ret2) {
            return -1;
        } else {
            return 0;
        }
    }
}
class Solution {
    public int getMaxElementIndex(List<Integer> arr, Helper helper) {
        int start = 0;
        int end = arr.size() - 1;
        while (start != end)
        {
            int m1 = (start + end) / 2;
            int m2 = (start + end + 1) / 2;
            if (helper.compare(start, m1, m2, end, arr) == 1)
            {
                end = m1;
            }
            else
            {
                start = m2;
            }
        }

        return start;
    }
}

public class Example01 {
    public static void main(String[] args) {
        List<Integer> arr = new ArrayList<>();
        int i = 0;
        for (i = 0; i < 8; i++) {
            arr.add(3);
        }
        arr.add(3, 5);
        Solution s = new Solution();
        Helper h = new Helper();
        int ret = s.getMaxElementIndex(arr, h);
        System.out.println(ret);
    }
}