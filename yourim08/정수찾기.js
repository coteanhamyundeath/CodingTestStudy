function solution(num_list, n) {
    var answer = num_list.find((e) => e==n) ? 1 : 0;
    return answer;
}