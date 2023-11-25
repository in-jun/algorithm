# [level unrated] 리스트 자르기 - 181897 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181897) 

### 성능 요약

메모리: 4.14 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 6일 23:16:43

### 문제 설명

<p>정수 <code>n</code>과 정수 3개가 담긴 리스트 <code>slicer</code> 그리고 정수 여러 개가 담긴 리스트 <code>num_list</code>가 주어집니다. <code>slicer</code>에 담긴 정수를 차례대로 a, b, c라고 할 때, <code>n</code>에 따라 다음과 같이 <code>num_list</code>를 슬라이싱 하려고 합니다.</p>

<ul>
<li><code>n = 1</code> : <code>num_list</code>의 0번 인덱스부터 <code>b</code>번 인덱스까지</li>
<li><code>n = 2</code> : <code>num_list</code>의 <code>a</code>번 인덱스부터 마지막 인덱스까지</li>
<li><code>n = 3</code> : <code>num_list</code>의 <code>a</code>번 인덱스부터 <code>b</code>번 인덱스까지</li>
<li><code>n = 4</code> : <code>num_list</code>의 <code>a</code>번 인덱스부터 <code>b</code>번 인덱스까지 <code>c</code> 간격으로</li>
</ul>

<p>올바르게 슬라이싱한 리스트를 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>n</code> 은 1, 2, 3, 4 중 하나입니다.</li>
<li><code>slicer</code>의 길이 = 3</li>
<li><p><code>slicer</code>에 담긴 정수를 차례대로 a, b, c라고 할 때</p>

<ul>
<li>0 ≤ a ≤ b ≤ <code>num_list</code>의 길이 - 1 </li>
<li>1 ≤ c ≤ 3</li>
</ul></li>
<li><p>5 ≤ <code>num_list</code>의 길이 ≤ 30</p></li>
<li><p>0 ≤ <code>num_list</code>의 원소 ≤ 100</p></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>n</th>
<th>slicer</th>
<th>num_list</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td>[1, 5, 2]</td>
<td>[1, 2, 3, 4, 5, 6, 7, 8, 9]</td>
<td>[2, 3, 4, 5, 6]</td>
</tr>
<tr>
<td>4</td>
<td>[1, 5, 2]</td>
<td>[1, 2, 3, 4, 5, 6, 7, 8, 9]</td>
<td>[2, 4, 6]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>[1, 2, 3, 4, 5, 6, 7, 8, 9]에서 1번 인덱스부터 5번 인덱스까지 자른 리스트는 [2, 3, 4, 5, 6]입니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>[1, 2, 3, 4, 5, 6, 7, 8, 9]에서 1번 인덱스부터 5번 인덱스까지 2개 간격으로 자른 리스트는 [2, 4, 6]입니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges