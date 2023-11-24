# [level unrated] 배열 만들기 4 - 181918 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181918) 

### 성능 요약

메모리: 3.98 MB, 시간: 0.13 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 6일 0:41:2

### 문제 설명

<p>정수 배열 <code>arr</code>가 주어집니다. <code>arr</code>를 이용해 새로운 배열 <code>stk</code>를 만드려고 합니다.</p>

<p>변수 <code>i</code>를 만들어 초기값을 0으로 설정한 후 <code>i</code>가 <code>arr</code>의 길이보다 작으면 다음 작업을 반복합니다.</p>

<ul>
<li>만약 <code>stk</code>가 빈 배열이라면 <code>arr[i]</code>를 <code>stk</code>에 추가하고 <code>i</code>에 1을 더합니다.</li>
<li><code>stk</code>에 원소가 있고, <code>stk</code>의 마지막 원소가 <code>arr[i]</code>보다 작으면 <code>arr[i]</code>를 <code>stk</code>의 뒤에 추가하고 <code>i</code>에 1을 더합니다.</li>
<li><code>stk</code>에 원소가 있는데 <code>stk</code>의 마지막 원소가 <code>arr[i]</code>보다 크거나 같으면 <code>stk</code>의 마지막 원소를 <code>stk</code>에서 제거합니다.</li>
</ul>

<p>위 작업을 마친 후 만들어진 <code>stk</code>를 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 100,000

<ul>
<li>1 ≤ <code>arr</code>의 원소 ≤ 100,000</li>
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
<td>[1, 4, 2, 5, 3]</td>
<td>[1, 2, 3]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>각 작업을 마친 후에 배열의 변화를 나타내면 다음 표와 같습니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>i</th>
<th>arr[i]</th>
<th>stk</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>1</td>
<td>[]</td>
</tr>
<tr>
<td>1</td>
<td>4</td>
<td>[1]</td>
</tr>
<tr>
<td>2</td>
<td>2</td>
<td>[1, 4]</td>
</tr>
<tr>
<td>2</td>
<td>2</td>
<td>[1]</td>
</tr>
<tr>
<td>3</td>
<td>5</td>
<td>[1, 2]</td>
</tr>
<tr>
<td>4</td>
<td>3</td>
<td>[1, 2, 5]</td>
</tr>
<tr>
<td>4</td>
<td>3</td>
<td>[1, 2]</td>
</tr>
<tr>
<td>-</td>
<td>-</td>
<td>[1, 2, 3]</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서 [1, 2, 3]을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges