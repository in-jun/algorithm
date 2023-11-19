# [level unrated] 콜라츠 수열 만들기 - 181919 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181919) 

### 성능 요약

메모리: 4.13 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 1일 0:15:33

### 문제 설명

<p>모든 자연수 <code>x</code>에 대해서 현재 값이 <code>x</code>이면 <code>x</code>가 짝수일 때는 2로 나누고, <code>x</code>가 홀수일 때는 <code>3 * x + 1</code>로 바꾸는 계산을 계속해서 반복하면 언젠가는 반드시  <code>x</code>가 1이 되는지 묻는 문제를 콜라츠 문제라고 부릅니다.</p>

<p>그리고 위 과정에서 거쳐간 모든 수를 기록한 수열을 콜라츠 수열이라고 부릅니다.</p>

<p>계산 결과 1,000 보다 작거나 같은 수에 대해서는 전부 언젠가 1에 도달한다는 것이 알려져 있습니다. </p>

<p>임의의 1,000 보다 작거나 같은 양의 정수 <code>n</code>이 주어질 때 초기값이 <code>n</code>인 콜라츠 수열을 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>n</code> ≤ 1,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>10</td>
<td>[10, 5, 16, 8, 4, 2, 1]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>순서대로 연산한 결과를 표로 만들면 다음과 같습니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>연산 횟수</th>
<th>x</th>
<th>홀짝 여부</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>10</td>
<td>짝수</td>
</tr>
<tr>
<td>1</td>
<td>5</td>
<td>홀수</td>
</tr>
<tr>
<td>2</td>
<td>16</td>
<td>짝수</td>
</tr>
<tr>
<td>3</td>
<td>8</td>
<td>짝수</td>
</tr>
<tr>
<td>4</td>
<td>4</td>
<td>짝수</td>
</tr>
<tr>
<td>5</td>
<td>2</td>
<td>짝수</td>
</tr>
<tr>
<td>6</td>
<td>1</td>
<td>홀수</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서 [10, 5, 16, 8, 4, 2, 1]을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges