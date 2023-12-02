# [level unrated] 무작위로 K개의 수 뽑기 - 181858 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181858) 

### 성능 요약

메모리: 4.27 MB, 시간: 0.33 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 6일 17:32:32

### 문제 설명

<p>랜덤으로 서로 다른 k개의 수를 저장한 배열을 만드려고 합니다. 적절한 방법이 떠오르지 않기 때문에 일정한 범위 내에서 무작위로 수를 뽑은 후, 지금까지 나온적이 없는 수이면 배열 맨 뒤에 추가하는 방식으로 만들기로 합니다.</p>

<p>이미 어떤 수가 무작위로 주어질지 알고 있다고 가정하고, 실제 만들어질 길이 <code>k</code>의 배열을 예상해봅시다.</p>

<p>정수 배열 <code>arr</code>가 주어집니다. 문제에서의 무작위의 수는 <code>arr</code>에 저장된 순서대로 주어질 예정이라고 했을 때, 완성될 배열을 return 하는 solution 함수를 완성해 주세요.</p>

<p>단, 완성될 배열의 길이가 <code>k</code>보다 작으면 나머지 값을 전부 -1로 채워서 return 합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 ≤ 100,000

<ul>
<li>0 ≤ <code>arr</code>의 원소 ≤ 100,000</li>
</ul></li>
<li>1 ≤ <code>k</code> ≤ 1,000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>k</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[0, 1, 1, 2, 2, 3]</td>
<td>3</td>
<td>[0, 1, 2]</td>
</tr>
<tr>
<td>[0, 1, 1, 1, 1]</td>
<td>4</td>
<td>[0, 1, -1, -1]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>앞에서부터 서로 다른 <code>k</code>개의 수를 골라내면 [0, 1, 2]가 됩니다. 따라서 [0, 1, 2]를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>서로 다른 수의 개수가 2개 뿐이므로 서로 다른 수들을 앞에서부터 차례대로 저장한 [0, 1]에서 이후 2개의 인덱스를 -1로 채워넣은 [0, 1, -1, -1]을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges