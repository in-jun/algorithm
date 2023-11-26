# [level unrated] 왼쪽 오른쪽 - 181890 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181890) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 17:18:45

### 문제 설명

<p>문자열 리스트 <code>str_list</code>에는 "u", "d", "l", "r" 네 개의 문자열이 여러 개 저장되어 있습니다. <code>str_list</code>에서 "l"과 "r" 중 먼저 나오는 문자열이 "l"이라면 해당 문자열을 기준으로 왼쪽에 있는 문자열들을 순서대로 담은 리스트를, 먼저 나오는 문자열이 "r"이라면 해당 문자열을 기준으로 오른쪽에 있는 문자열들을 순서대로 담은 리스트를 return하도록 solution 함수를 완성해주세요. "l"이나 "r"이 없다면 빈 리스트를 return합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>str_list</code>의 길이 ≤ 20</li>
<li><code>str_list</code>는 "u", "d", "l", "r" 네 개의 문자열로 이루어져 있습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>str_list</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>["u", "u", "l", "r"]</td>
<td>["u", "u"]</td>
</tr>
<tr>
<td>["l"]</td>
<td>[]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>"r"보다 "l"이 먼저 나왔기 때문에 "l"의 왼쪽에 있는 문자열들을 담은 리스트인 ["u", "u"]를 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>"l"의 왼쪽에 문자열이 없기 때문에 빈 리스트를 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges