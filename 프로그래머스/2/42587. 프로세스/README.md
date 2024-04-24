# [level 2] 프로세스 - 42587 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/42587) 

### 성능 요약

메모리: 4.16 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 스택／큐

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 04월 24일 21:48:49

### 문제 설명

<p>운영체제의 역할 중 하나는 컴퓨터 시스템의 자원을 효율적으로 관리하는 것입니다. 이 문제에서는 운영체제가 다음 규칙에 따라 프로세스를 관리할 경우 특정 프로세스가 몇 번째로 실행되는지 알아내면 됩니다.</p>
<div class="highlight"><pre class="codehilite"><code>1. 실행 대기 큐(Queue)에서 대기중인 프로세스 하나를 꺼냅니다.
2. 큐에 대기중인 프로세스 중 우선순위가 더 높은 프로세스가 있다면 방금 꺼낸 프로세스를 다시 큐에 넣습니다.
3. 만약 그런 프로세스가 없다면 방금 꺼낸 프로세스를 실행합니다.
  3.1 한 번 실행한 프로세스는 다시 큐에 넣지 않고 그대로 종료됩니다.
</code></pre></div>
<p>예를 들어 프로세스 4개 [A, B, C, D]가 순서대로 실행 대기 큐에 들어있고, 우선순위가 [2, 1, 3, 2]라면 [C, D, A, B] 순으로 실행하게 됩니다. </p>

<p>현재 실행 대기 큐(Queue)에 있는 프로세스의 중요도가 순서대로 담긴 배열 <code>priorities</code>와, 몇 번째로 실행되는지 알고싶은 프로세스의 위치를 알려주는 <code>location</code>이 매개변수로 주어질 때, 해당 프로세스가 몇 번째로 실행되는지 return 하도록 solution 함수를 작성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>priorities</code>의 길이는 1 이상 100 이하입니다.

<ul>
<li><code>priorities</code>의 원소는 1 이상 9 이하의 정수입니다.</li>
<li><code>priorities</code>의 원소는 우선순위를 나타내며 숫자가 클 수록 우선순위가 높습니다.</li>
</ul></li>
<li><code>location</code>은 0 이상 (대기 큐에 있는 프로세스 수 - 1) 이하의 값을 가집니다.

<ul>
<li><code>priorities</code>의 가장 앞에 있으면 0, 두 번째에 있으면 1 … 과 같이 표현합니다.</li>
</ul></li>
</ul>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>priorities</th>
<th>location</th>
<th>return</th>
</tr>
</thead>
        <tbody><tr>
<td>[2, 1, 3, 2]</td>
<td>2</td>
<td>1</td>
</tr>
<tr>
<td>[1, 1, 9, 1, 1, 1]</td>
<td>0</td>
<td>5</td>
</tr>
</tbody>
      </table>
<h5>입출력 예 설명</h5>

<p>예제 #1</p>

<p>문제에 나온 예와 같습니다.</p>

<p>예제 #2</p>

<p>6개의 프로세스 [A, B, C, D, E, F]가 대기 큐에 있고 중요도가 [1, 1, 9, 1, 1, 1] 이므로 [C, D, E, F, A, B] 순으로 실행됩니다. 따라서 A는 5번째로 실행됩니다.</p>

<hr>

<p>※ 공지 - 2023년 4월 21일 문제 지문이 리뉴얼되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges