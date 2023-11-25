# [level unrated] 가까운 1 찾기 - 181898 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181898) 

### 성능 요약

메모리: 4.14 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 6일 23:6:40

### 문제 설명

<p>정수 배열 <code>arr</code>가 주어집니다. 이때 <code>arr</code>의 원소는 1 또는 0입니다. 정수 <code>idx</code>가 주어졌을 때, <code>idx</code>보다 크면서 배열의 값이 1인 가장 작은 인덱스를 찾아서 반환하는 solution 함수를 완성해 주세요.</p>

<p>단, 만약 그러한 인덱스가 없다면 -1을 반환합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>3 ≤ <code>arr</code>의 길이 ≤ 100'000

<ul>
<li><code>arr</code>의 원소는 전부 1 또는 0입니다. </li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>idx</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[0, 0, 0, 1]</td>
<td>1</td>
<td>3</td>
</tr>
<tr>
<td>[1, 0, 0, 1, 0, 0]</td>
<td>4</td>
<td>-1</td>
</tr>
<tr>
<td>[1, 1, 1, 1, 0]</td>
<td>3</td>
<td>3</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>1보다 크면서 원소가 1인 가장 작은 인덱스는 3입니다. 따라서 3을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>4번 인덱스 이후에 1은 등장하지 않습니다. 따라서 -1을 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>3번 인덱스의 값이 1입니다. 따라서 3을 return 합니다. </li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges