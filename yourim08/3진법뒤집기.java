package yourim08;

class Solution {
    public int solution(int n) {
        // reverse 메소드를 사용하기 위해 StringBuffer 사용
        StringBuffer str = new StringBuffer(Integer.toString(n, 3)); 

        // Integer.parseInt() : n진법 -> 10진법
        // Integer.toString() : 10진법 -> n진법
        int answer = Integer.parseInt((str.reverse().toString()),3);
        return answer;
    }
}