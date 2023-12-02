# [level unrated] 전국 대회 선발 고사 - 181851 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181851) 

### 성능 요약

메모리: 4.2 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2023년 12월 6일 20:57:43

### 문제 설명

<p>0번부터 n - 1번까지 n명의 학생 중 3명을 선발하는 전국 대회 선발 고사를 보았습니다. 등수가 높은 3명을 선발해야 하지만, 개인 사정으로 전국 대회에 참여하지 못하는 학생들이 있어 참여가 가능한 학생 중 등수가 높은 3명을 선발하기로 했습니다.</p>

<p>각 학생들의 선발 고사 등수를 담은 정수 배열 <code>rank</code>와 전국 대회 참여 가능 여부가 담긴 boolean 배열 <code>attendance</code>가 매개변수로 주어집니다. 전국 대회에 선발된 학생 번호들을 등수가 높은 순서대로 각각 a, b, c번이라고 할 때 10000 × a + 100 × b + c를 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>3 ≤ <code>rank</code>의 길이 = <code>attendance</code>의 길이 ≤ 100</li>
<li><code>rank[i]</code>는 <code>i</code>번 학생의 선발 고사 등수를 의미합니다.</li>
<li><code>rank</code>의 원소는 1부터 n까지의 정수로 모두 서로 다릅니다.</li>
<li><code>attendance[i]</code>는 <code>i</code>번 학생의 전국 대회 참석 가능 여부를 나타냅니다.

<ul>
<li><code>attendance[i]</code>가 true라면 참석 가능, false면 참석 불가능을 의미합니다.</li>
</ul></li>
<li><code>attendance</code>의 원소 중 적어도 3개는 true입니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>rank</th>
<th>attendance</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[3, 7, 2, 5, 4, 6, 1]</td>
<td>[false, true, true, true, true, false, false]</td>
<td>20403</td>
</tr>
<tr>
<td>[1, 2, 3]</td>
<td>[true, true, true]</td>
<td>102</td>
</tr>
<tr>
<td>[6, 1, 5, 2, 3, 4]</td>
<td>[true, false, true, false, false, true]</td>
<td>50200</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번에서 1등은 6번 학생이지만 전국 대회에 참석 불가능하므로 넘어갑니다. 2등은 2번 학생이고 전국 대회에 참석 가능하므로 1순위로 선발됩니다. 3등은 0번 학생이고 전국 대회에 참석 불가능 하므로 넘어갑니다. 4등과 5등은 각각 4번, 3번 학생이고 두 학생 모두 전국 대회에 참석 가능하므로 각각 2순위, 3순위로 선발됩니다. 3명을 선발하였으므로 6등과 7등은 확인하지 않아도 됩니다. 따라서 10000 × 2 + 100 × 4 + 3 = 20403을 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번에서 1, 2, 3등은 각각 0번, 1번, 2번 학생이고 세 학생 모두 전국 대회에 참석 가능하므로 각각 1순위, 2순위, 3순위로 선발됩니다. 따라서 10000 × 0 + 100 × 1 + 2 = 102를 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>예제 3번에서 1, 2, 3등은 각각 1번, 3번, 4번 학생이지만 세 학생 모두 전국 대회에 참석 불가능합니다. 다음으로 4, 5, 6등은 각각 5번, 2번, 0번 학생이고 세 학생 모두 전국 대회에 참석 가능하므로 각각 1순위, 2순위, 3순위로 선발됩니다. 따라서 10000 × 5 + 100 × 2 + 0 = 50200을 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges