# [level unrated] 조건에 맞게 수열 변환하기 2 - 181881 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181881) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 19:40:45

### 문제 설명

<p>정수 배열 <code>arr</code>가 주어집니다. <code>arr</code>의 각 원소에 대해 값이 50보다 크거나 같은 짝수라면 2로 나누고, 50보다 작은 홀수라면 2를 곱하고 다시 1을 더합니다.</p>

<p>이러한 작업을 <code>x</code>번 반복한 결과인 배열을 <code>arr(x)</code>라고 표현했을 때, <code>arr(x) = arr(x + 1)</code>인 <code>x</code>가 항상 존재합니다. 이러한 <code>x</code> 중 가장 작은 값을 return 하는 solution 함수를 완성해 주세요.</p>

<p>단, 두 배열에 대한 "="는 두 배열의 크기가 서로 같으며, 같은 인덱스의 원소가 각각 서로 같음을 의미합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 1,000,000

<ul>
<li>1 ≤ <code>arr</code>의 원소의 값 ≤ 100</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 2, 3, 100, 99, 98]</td>
<td>5</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>위 작업을 반복하면 다음과 같이 <code>arr</code>가 변합니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>반복 횟수</th>
<th>arr</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>[1, 2, 3, 100, 99, 98]</td>
</tr>
<tr>
<td>1</td>
<td>[3, 2, 7, 50, 99, 49]</td>
</tr>
<tr>
<td>2</td>
<td>[7, 2, 15, 25, 99, 99]</td>
</tr>
<tr>
<td>3</td>
<td>[15, 2, 31, 51, 99, 99]</td>
</tr>
<tr>
<td>4</td>
<td>[31, 2, 63, 51, 99, 99]</td>
</tr>
<tr>
<td>5</td>
<td>[63, 2, 63, 51, 99, 99]</td>
</tr>
<tr>
<td>6</td>
<td>[63, 2, 63, 51, 99, 99]</td>
</tr>
</tbody>
      </table>
<ul>
<li>이후로 <code>arr</code>가 변하지 않으며, <code>arr(5) = arr(6)</code>이므로 5를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges