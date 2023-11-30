# [level unrated] 빈 배열에 추가, 삭제하기 - 181860 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181860) 

### 성능 요약

메모리: 3.63 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 11월 4일 23:32:3

### 문제 설명

<p>아무 원소도 들어있지 않은 빈 배열 X가 있습니다. 길이가 같은 정수 배열 <code>arr</code>과 boolean 배열 <code>flag</code>가 매개변수로 주어질 때, <code>flag</code>를 차례대로 순회하며 <code>flag[i]</code>가 true라면 X의 뒤에 <code>arr[i]</code>를 <code>arr[i]</code> × 2 번 추가하고, <code>flag[i]</code>가 false라면 X에서 마지막 <code>arr[i]</code>개의 원소를 제거한 뒤 X를 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>arr</code>의 길이 = <code>flag</code>의 길이 ≤ 100</li>
<li><code>arr</code>의 모든 원소는 1 이상 9 이하의 정수입니다.</li>
<li>현재 X의 길이보다 더 많은 원소를 빼는 입력은 주어지지 않습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>arr</th>
<th>flag</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[3, 2, 4, 1, 3]</td>
<td>[true, false, true, false, false]</td>
<td>[3, 3, 3, 3, 4, 4, 4, 4]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번에서 X의 변화를 표로 나타내면 다음과 같습니다</p>
<table class="table">
        <thead><tr>
<th>i</th>
<th>flag[i]</th>
<th>arr[i]</th>
<th>X</th>
</tr>
</thead>
        <tbody><tr>
<td></td>
<td></td>
<td></td>
<td>[]</td>
</tr>
<tr>
<td>0</td>
<td>true</td>
<td>3</td>
<td>[3, 3, 3, 3, 3, 3]</td>
</tr>
<tr>
<td>1</td>
<td>false</td>
<td>2</td>
<td>[3, 3, 3, 3]</td>
</tr>
<tr>
<td>2</td>
<td>true</td>
<td>4</td>
<td>[3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4]</td>
</tr>
<tr>
<td>3</td>
<td>false</td>
<td>1</td>
<td>[3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4]</td>
</tr>
<tr>
<td>4</td>
<td>false</td>
<td>3</td>
<td>[3, 3, 3, 3, 4, 4, 4, 4]</td>
</tr>
</tbody>
      </table>
<p>따라서 [3, 3, 3, 3, 4, 4, 4, 4]를 return 합니다.</p></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges