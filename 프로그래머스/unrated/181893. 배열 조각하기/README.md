# [level unrated] 배열 조각하기 - 181893 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181893) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.03 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 0:13:17

### 문제 설명

<p>정수 배열 <code>arr</code>와 <code>query</code>가 주어집니다.</p>

<p><code>query</code>를 순회하면서 다음 작업을 반복합니다.</p>

<ul>
<li>짝수 인덱스에서는 <code>arr</code>에서 <code>query[i]</code>번 인덱스를 제외하고 배열의 <code>query[i]</code>번 인덱스 뒷부분을 잘라서 버립니다.</li>
<li>홀수 인덱스에서는 <code>arr</code>에서 <code>query[i]</code>번 인덱스는 제외하고 배열의 <code>query[i]</code>번 인덱스 앞부분을 잘라서 버립니다.</li>
</ul>

<p>위 작업을 마친 후 남은 <code>arr</code>의 부분 배열을 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>5 ≤ <code>arr</code>의 길이 ≤ 100,000

<ul>
<li>0 ≤ <code>arr</code>의 원소 ≤ 100</li>
</ul></li>
<li>1 ≤ <code>query</code>의 길이 &lt; min(50, <code>arr</code>의 길이 / 2)

<ul>
<li><code>query</code>의 각 원소는 0보다 크거나 같고 남아있는 <code>arr</code>의 길이 보다 작습니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>query</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[0, 1, 2, 3, 4, 5]</td>
<td>[4, 1, 2]</td>
<td>[1, 2, 3]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>이번에 매번 처리할 <code>query</code>의 값과 처리 전후의 <code>arr</code>의 상태를 표로 나타내면 다음과 같습니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>query의 값</th>
<th>query 처리 전</th>
<th>query 처리 후</th>
<th>비고</th>
</tr>
</thead>
        <tbody><tr>
<td>4</td>
<td>[0, 1, 2, 3, 4, 5]</td>
<td>[0, 1, 2, 3, 4]</td>
<td>0번 인덱스의 쿼리이므로 뒷부분을 자른다.</td>
</tr>
<tr>
<td>1</td>
<td>[0, 1, 2, 3, 4]</td>
<td>[1, 2, 3, 4]</td>
<td>1번 인덱스의 쿼리이므로 앞부분을 자른다.</td>
</tr>
<tr>
<td>2</td>
<td>[1, 2, 3, 4]</td>
<td>[1, 2, 3]</td>
<td>2번 인덱스의 쿼리이므로 뒷부분을 자른다.</td>
</tr>
</tbody>
      </table>
<ul>
<li>따라서 [1, 2, 3]을 return 합니다.</li>
</ul>

<hr>

<p>※2023년 04월 24일 지문과 테스트 케이스가 수정되었습니다. 기존에 제출한 코드가 통과하지 못할 수 있습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges