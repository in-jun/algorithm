# [level unrated] 수열과 구간 쿼리 4 - 181922 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181922) 

### 성능 요약

메모리: 4.12 MB, 시간: 0.38 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 23:42:57

### 문제 설명

<p>정수 배열 <code>arr</code>와 2차원 정수 배열 <code>queries</code>이 주어집니다. <code>queries</code>의 원소는 각각 하나의 <code>query</code>를 나타내며, <code>[s, e, k]</code> 꼴입니다.</p>

<p>각 <code>query</code>마다 순서대로 <code>s</code> ≤ <code>i</code> ≤ <code>e</code>인 모든 <code>i</code>에 대해 <code>i</code>가 <code>k</code>의 배수이면 <code>arr[i]</code>에 1을 더합니다.</p>

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
<li>0 ≤ <code>k</code> ≤ 5</li>
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
<td>[0, 1, 2, 4, 3]</td>
<td>[[0, 4, 1],[0, 3, 2],[0, 3, 3]]</td>
<td>[3, 2, 4, 6, 4]</td>
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
<th>arr</th>
</tr>
</thead>
        <tbody><tr>
<td>[0, 1, 2, 4, 3]</td>
</tr>
<tr>
<td>[1, 2, 3, 5, 4]</td>
</tr>
<tr>
<td>[2, 2, 4, 5, 4]</td>
</tr>
<tr>
<td>[3, 2, 4, 6, 4]</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서 [3, 2, 4, 6, 4]를 return 합니다.</li>
</ul>

<hr>

<p>※ 2023년 04월 27일 입출력 예 설명이 수정되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges