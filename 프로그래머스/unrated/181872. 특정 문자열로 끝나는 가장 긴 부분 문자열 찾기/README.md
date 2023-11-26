# [level unrated] 특정 문자열로 끝나는 가장 긴 부분 문자열 찾기 - 181872 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181872) 

### 성능 요약

메모리: 4.14 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 21:23:32

### 문제 설명

<p>문자열 <code>myString</code>과 <code>pat</code>가 주어집니다. <code>myString</code>의 부분 문자열중 <code>pat</code>로 끝나는 가장 긴 부분 문자열을 찾아서 return 하는 solution 함수를 완성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>5 ≤ <code>myString</code> ≤ 20</li>
<li>1 ≤ <code>pat</code> ≤ 5

<ul>
<li><code>pat</code>은 반드시 <code>myString</code>의 부분 문자열로 주어집니다.</li>
</ul></li>
<li><code>myString</code>과 <code>pat</code>에 등장하는 알파벳은 대문자와 소문자를 구분합니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>myString</th>
<th>pat</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"AbCdEFG"</td>
<td>"dE"</td>
<td>"AbCdE"</td>
</tr>
<tr>
<td>"AAAAaaaa"</td>
<td>"a"</td>
<td>"AAAAaaaa"</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>"AbCdEFG"에서 "dE"는 한 번 등장하며 처음부터 해당 위치까지 잘라내면 "AbCdE"가 됩니다. 따라서 이 문자열이 "dE"로 끝나는 가장 긴 문자열이며, "AbCdE"를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>"AAAAaaaa"에서 "a"는 총 네 번 등장하며 이 중 가장 마지막에 있는 위치까지 잘라내면 "AAAAaaaa"가 됩니다. 따라서 이 문자열이 "a"로 끝나는 가장 긴 문자열이며, "AAAAaaaa"를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges