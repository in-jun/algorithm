# [level 1] [PCCE 기출문제] 9번 / 이웃한 칸 - 250125 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/250125) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > PCCE 기출문제

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 27일 19:02:07

### 문제 설명

<p>각 칸마다 색이 칠해진 2차원 격자 보드판이 있습니다. 그중 한 칸을 골랐을 때, 위, 아래, 왼쪽, 오른쪽 칸 중 같은 색깔로 칠해진 칸의 개수를 구하려고 합니다.</p>

<p>보드의 각 칸에 칠해진 색깔 이름이 담긴 이차원 문자열 리스트 <code>board</code>와 고른 칸의 위치를 나타내는 두 정수 <code>h</code>, <code>w</code>가 주어질 때 <code>board[h][w]</code>와 이웃한 칸들 중 같은 색으로 칠해져 있는 칸의 개수를 return 하도록 solution 함수를 완성해 주세요.</p>

<p>이웃한 칸들 중 몇 개의 칸이 같은 색으로 색칠되어 있는지 확인하는 과정은 다음과 같습니다.</p>
<div class="highlight"><pre class="codehilite"><code>1. 정수를 저장할 변수 n을 만들고 board의 길이를 저장합니다.
2. 같은 색으로 색칠된 칸의 개수를 저장할 변수 count를 만들고 0을 저장합니다.
3. h와 w의 변화량을 저장할 정수 리스트 dh, dw를 만들고 각각 [0, 1, -1, 0], [1, 0, 0, -1]을 저장합니다.
4. 반복문을 이용해 i 값을 0부터 3까지 1 씩 증가시키며 아래 작업을 반복합니다.
    4-1. 체크할 칸의 h, w 좌표를 나타내는 변수 h_check, w_check를 만들고 각각 h + dh[i], w + dw[i]를 저장합니다.
    4-2. h_check가 0 이상 n 미만이고 w_check가 0 이상 n 미만이라면 다음을 수행합니다.
        4-2-a. board[h][w]와 board[h_check][w_check]의 값이 동일하다면 count의 값을 1 증가시킵니다.
5. count의 값을 return합니다.
</code></pre></div>
<ul>
<li>위의 의사코드와 작동방식이 다른 코드를 작성해도 상관없습니다.</li>
</ul>

<hr>

<h4>제한사항</h4>

<ul>
<li>1 ≤ <code>board</code>의 길이 ≤ 7

<ul>
<li><code>board</code>의 길이와 <code>board[n]</code>의 길이는 동일합니다.</li>
</ul></li>
<li>0 ≤ <code>h</code>, <code>w</code> &lt; <code>board</code>의 길이</li>
<li>1 ≤ <code>board[h][w]</code>의 길이 ≤ 10

<ul>
<li><code>board[h][w]</code>는 영어 소문자로만 이루어져 있습니다.</li>
</ul></li>
</ul>

<hr>

<h4>입출력 예</h4>
<table class="table">
        <thead><tr>
<th>board</th>
<th>h</th>
<th>w</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[["blue", "red", "orange", "red"], ["red", "red", "blue", "orange"], ["blue", "orange", "red", "red"], ["orange", "orange", "red", "blue"]]</td>
<td>1</td>
<td>1</td>
<td>2</td>
</tr>
<tr>
<td>[["yellow", "green", "blue"], ["blue", "green", "yellow"], ["yellow", "blue", "blue"]]</td>
<td>0</td>
<td>1</td>
<td>1</td>
</tr>
</tbody>
      </table>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li>주어진 보드를 나타내면 아래 그림과 같고, <code>board[1][1]</code>의 인접한 칸들은 화살표가 가리키는 칸들입니다. 따라서 <code>board[1][1]</code> 주변의 "red" 칸은 총 2개입니다.</li>
</ul>

<p><img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/cb8c0433-a307-4184-b224-6185c87dfc07/9-1.jpg" title="" alt="9-1.jpg"></p>

<p>입출력 예 #2</p>

<ul>
<li>주어진 보드를 나타내면 아래 그림과 같고, <code>board[0][1]</code>의 인접한 칸들은 화살표가 가리키는 칸들입니다. 따라서 <code>board[0][1]</code> 주변의 "green"칸은 총 1개입니다.</li>
</ul>

<p><img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/a9fdec91-df64-4240-82b3-c63d9555e689/9-2.jpg" title="" alt="9-2.jpg"></p>

<hr>

<ul>
<li>cpp를 응시하는 경우 리스트는 배열과 동일한 의미이니 풀이에 참고해주세요.

<ul>
<li>ex) 번호가 담긴 정수 <u><strong>리스트</strong></u> <code>numbers</code>가 주어집니다. =&gt; 번호가 담긴 정수 <u><strong>배열</strong></u> <code>numbers</code>가 주어집니다.</li>
</ul></li>
<li>java를 응시하는 경우 리스트는 배열, 함수는 메소드와 동일한 의미이니 풀이에 참고해주세요.

<ul>
<li>ex) solution <u><strong>함수</strong></u>가 올바르게 작동하도록 한 줄을 수정해 주세요. =&gt; solution <u><strong>메소드</strong></u>가 올바르게 작동하도록 한 줄을 수정해 주세요.</li>
</ul></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges