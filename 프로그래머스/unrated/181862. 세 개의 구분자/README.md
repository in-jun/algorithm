# [level unrated] 세 개의 구분자 - 181862 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181862) 

### 성능 요약

메모리: 23.4 MB, 시간: 27.79 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 4일 17:14:29

### 문제 설명

<p>임의의 문자열이 주어졌을 때 문자 "a", "b", "c"를 구분자로 사용해 문자열을 나누고자 합니다.</p>

<p>예를 들어 주어진 문자열이 "baconlettucetomato"라면 나눠진 문자열 목록은 ["onlettu", "etom", "to"] 가 됩니다.</p>

<p>문자열 <code>myStr</code>이 주어졌을 때 위 예시와 같이 "a", "b", "c"를 사용해 나눠진 문자열을 순서대로 저장한 배열을 return 하는 solution 함수를 완성해 주세요.</p>

<p>단, 두 구분자 사이에 다른 문자가 없을 경우에는 아무것도 저장하지 않으며, return할 배열이 빈 배열이라면 ["EMPTY"]를 return 합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>myStr</code>의 길이 ≤ 1,000,000

<ul>
<li><code>myStr</code>은 알파벳 소문자로 이루어진 문자열 입니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>myStr</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"baconlettucetomato"</td>
<td>["onlettu", "etom", "to"]</td>
</tr>
<tr>
<td>"abcd"</td>
<td>["d"]</td>
</tr>
<tr>
<td>"cabab"</td>
<td>["EMPTY"]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>문제 설명의 예시와 같습니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>"c" 이전에는 "a", "b", "c" 이외의 문자가 없습니다.</li>
<li>"c" 이후에 문자열 "d"가 있으므로 "d"를 저장합니다.</li>
<li>따라서 ["d"]를 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>"a", "b", "c" 이외의 문자가 존재하지 않습니다. 따라서 저장할 문자열이 없습니다.</li>
<li>따라서 ["EMPTY"]를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges