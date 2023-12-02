# [level unrated] 그림 확대 - 181836 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181836) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.02 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 6일 22:54:48

### 문제 설명

<p>직사각형 형태의 그림 파일이 있고, 이 그림 파일은 1 × 1 크기의 정사각형 크기의 픽셀로 이루어져 있습니다. 이 그림 파일을 나타낸 문자열 배열 <code>picture</code>과 정수 <code>k</code>가 매개변수로 주어질 때, 이 그림 파일을 가로 세로로 <code>k</code>배 늘린 그림 파일을 나타내도록 문자열 배열을 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>picture</code>의 길이 ≤ 20</li>
<li>1 ≤ <code>picture</code>의 원소의 길이 ≤ 20</li>
<li>모든 <code>picture</code>의 원소의 길이는 같습니다.</li>
<li><code>picture</code>의 원소는 '.'과 'x'로 이루어져 있습니다.</li>
<li>1 ≤ <code>k</code> ≤ 10</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>picture</th>
<th>k</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[".xx...xx.", "x..x.x..x", "x...x...x", ".x.....x.", "..x...x..", "...x.x...", "....x...."]</td>
<td>2</td>
<td>["..xxxx......xxxx..", "..xxxx......xxxx..", "xx....xx..xx....xx", "xx....xx..xx....xx", "xx......xx......xx", "xx......xx......xx", "..xx..........xx..", "..xx..........xx..", "....xx......xx....", "....xx......xx....", "......xx..xx......", "......xx..xx......", "........xx........", "........xx........"]</td>
</tr>
<tr>
<td>["x.x", ".x.", "x.x"]</td>
<td>3</td>
<td>["xxx...xxx", "xxx...xxx", "xxx...xxx", "...xxx...", "...xxx...", "...xxx...", "xxx...xxx", "xxx...xxx", "xxx...xxx"]</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><p>예제 1번의 <code>picture</code>는 다음과 같습니다.</p>
<div class="highlight"><pre class="codehilite"><code>.xx...xx.
x..x.x..x
x...x...x
.x.....x.
..x...x..
...x.x...
....x....
</code></pre></div>
<p>이를 가로 세로로 <code>k</code>배, 즉 2배 확대하면 그림 파일은 다음과 같습니다.</p>
<div class="highlight"><pre class="codehilite"><code>..xxxx......xxxx..
..xxxx......xxxx..
xx....xx..xx....xx
xx....xx..xx....xx
xx......xx......xx
xx......xx......xx
..xx..........xx..
..xx..........xx..
....xx......xx....
....xx......xx....
......xx..xx......
......xx..xx......
........xx........
........xx........
</code></pre></div>
<p>따라서 ["..xxxx......xxxx..", "..xxxx......xxxx..", "xx....xx..xx....xx", "xx....xx..xx....xx", "xx......xx......xx", "xx......xx......xx", "..xx..........xx..", "..xx..........xx..", "....xx......xx....", "....xx......xx....", "......xx..xx......", "......xx..xx......", "........xx........", "........xx........"]를 return 합니다.</p></li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><p>예제 2번의 <code>picture</code>는 다음과 같습니다.</p>
<div class="highlight"><pre class="codehilite"><code>x.x
.x.
x.x
</code></pre></div>
<p>이를 가로 세로로 <code>k</code>배, 즉 3배 확대하면 그림 파일은 다음과 같습니다.</p>
<div class="highlight"><pre class="codehilite"><code>xxx...xxx
xxx...xxx
xxx...xxx
...xxx...
...xxx...
...xxx...
xxx...xxx
xxx...xxx
xxx...xxx
</code></pre></div>
<p>따라서 ["xxx...xxx", "xxx...xxx", "xxx...xxx", "...xxx...", "...xxx...", "...xxx...", "xxx...xxx", "xxx...xxx", "xxx...xxx"]를 return 합니다.</p></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges