# [level unrated] 문자열 묶기 - 181855 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181855) 

### 성능 요약

메모리: 15 MB, 시간: 6.82 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 6일 18:41:3

### 문제 설명

<p>문자열 배열 <code>strArr</code>이 주어집니다. <code>strArr</code>의 원소들을 길이가 같은 문자열들끼리 그룹으로 묶었을 때 가장 개수가 많은 그룹의 크기를 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>strArr</code>의 길이 ≤ 100,000

<ul>
<li>1 ≤ <code>strArr</code>의 원소의 길이 ≤ 30</li>
<li><code>strArr</code>의 원소들은 알파벳 소문자로 이루어진 문자열입니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>strArr</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["a","bc","d","efg","hi"]</td>
<td>2</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p><strong>입출력 예 #1</strong></p>

<ul>
<li>각 문자열들을 길이에 맞게 그룹으로 묶으면 다음과 같습니다.</li>
</ul>
<table class="table">
        <thead><tr>
<th>문자열 길이</th>
<th>문자열 목록</th>
<th>개수</th>
</tr>
</thead>
        <tbody><tr>
<td>1</td>
<td>["a","d"]</td>
<td>2</td>
</tr>
<tr>
<td>2</td>
<td>["bc","hi"]</td>
<td>2</td>
</tr>
<tr>
<td>3</td>
<td>["efg"]</td>
<td>1</td>
</tr>
</tbody>
      </table>
<ul>
<li>개수의 최댓값은 2이므로 2를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges