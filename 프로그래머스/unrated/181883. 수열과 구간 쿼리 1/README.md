# [level unrated] 수열과 구간 쿼리 1 - 181883 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181883) 

### 성능 요약

메모리: 3.87 MB, 시간: 0.21 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 19:6:56

### 문제 설명

<p>정수 배열 <code>arr</code>와 2차원 정수 배열 <code>queries</code>이 주어집니다. <code>queries</code>의 원소는 각각 하나의 <code>query</code>를 나타내며, <code>[s, e]</code> 꼴입니다.</p>

<p>각 <code>query</code>마다 순서대로 <code>s</code> ≤ <code>i</code> ≤ <code>e</code>인 모든 <code>i</code>에 대해 <code>arr[i]</code>에 1을 더합니다.</p>

<p>위 규칙에 따라 <code>queries</code>를 처리한 이후의 <code>arr</code>를 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 1,000

<ul>
<li>0 ≤ <code>arr</code>의 원소 ≤ 1,000,000</li>
</ul></li>
<li>1 ≤ <code>queries</code>의 길이 ≤ 1,000

<ul>
<li>0 ≤ <code>s</code> ≤ <code>e</code> &lt; <code>arr</code>의 길이</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>queries</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[0, 1, 2, 3, 4]</td>
<td>[[0, 1],[1, 2],[2, 3]]</td>
<td>[1, 3, 4, 4, 4]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>각 쿼리에 따라 <code>arr</code>가 다음과 같이 변합니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>i</th>
<th>queries[i]</th>
<th>arr</th>
</tr>
</thead>
        <tbody><tr>
<td>-</td>
<td>-</td>
<td>[0, 1, 2, 3, 4]</td>
</tr>
<tr>
<td>0</td>
<td>[0,1]</td>
<td>[1, 2, 2, 3, 4]</td>
</tr>
<tr>
<td>1</td>
<td>[1,2]</td>
<td>[1, 3, 3, 3, 4]</td>
</tr>
<tr>
<td>2</td>
<td>[2,3]</td>
<td>[1, 3, 4, 4, 4]</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서 [1, 3, 4, 4, 4]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges