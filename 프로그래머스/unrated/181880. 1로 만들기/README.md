# [level unrated] 1로 만들기 - 181880 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181880) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 20:13:3

### 문제 설명

<p>정수가 있을 때, 짝수라면 반으로 나누고, 홀수라면 1을 뺀 뒤 반으로 나누면, 마지막엔 1이 됩니다. 예를 들어 10이 있다면 다음과 같은 과정으로 1이 됩니다.</p>

<ul>
<li>10 / 2 = 5</li>
<li>(5 - 1) / 2 = 4</li>
<li>4 / 2 = 2</li>
<li>2 / 2 = 1</li>
</ul>

<p>위와 같이 4번의 나누기 연산으로 1이 되었습니다. </p>

<p>정수들이 담긴 리스트 <code>num_list</code>가 주어질 때, <code>num_list</code>의 모든 원소를 1로 만들기 위해서 필요한 나누기 연산의 횟수를 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>3 ≤ <code>num_list</code>의 길이 ≤ 15</li>
<li>1 ≤ <code>num_list</code>의 원소 ≤ 30</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>num_list</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[12, 4, 15, 1, 14]</td>
<td>11</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>12는 3번, 4는 2번, 15는 3번, 1은 0번, 14는 3번의 연산이 필요하기 때문에 총 11번의 연산이 필요합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges