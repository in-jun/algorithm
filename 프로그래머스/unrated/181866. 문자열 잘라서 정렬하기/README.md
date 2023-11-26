# [level unrated] 문자열 잘라서 정렬하기 - 181866 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181866) 

### 성능 요약

메모리: 6.41 MB, 시간: 6.55 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 0일 22:57:2

### 문제 설명

<p>문자열 <code>myString</code>이 주어집니다. "x"를 기준으로 해당 문자열을 잘라내 배열을 만든 후 사전순으로 정렬한 배열을 return 하는 solution 함수를 완성해 주세요.</p>

<p>단, 빈 문자열은 반환할 배열에 넣지 않습니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>myString</code> ≤ 100,000

<ul>
<li><code>myString</code>은 알파벳 소문자로 이루어진 문자열입니다.</li>
</ul></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>myString</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>"axbxcxdx"</td>
<td>["a","b","c","d"]</td>
</tr>
<tr>
<td>"dxccxbbbxaaaa"</td>
<td>["aaaa","bbb","cc","d"]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>myString</code>을 "x"를 기준으로 자른 배열은 ["a","b","c","d"]이며, 이 배열은 이미 사전순으로 정렬된 상태입니다. 따라서 해당 배열을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>myString</code>을 "x"를 기준으로 자른 배열은 ["d","cc","bbb","aaaa"]이며, 이 배열을 사전순으로 정렬하면 ["aaaa","bbb","cc","d"]입니다. 따라서 해당 배열을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges