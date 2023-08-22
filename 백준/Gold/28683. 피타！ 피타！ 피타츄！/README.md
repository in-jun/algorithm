# [Gold V] 피타! 피타! 피타츄! - 28683 

[문제 링크](https://www.acmicpc.net/problem/28683) 

### 성능 요약

메모리: 2032 KB, 시간: 16 ms

### 분류

브루트포스 알고리즘, 기하학, 수학, 정수론, 피타고라스 정리

### 문제 설명

<p>포켓몬스터를 좋아하는 종우는 포켓몬스터를 연구하다가 포켓몬스터가 상당히 수학적이고 코딩과 밀접한 관련이 있는 게임이라는 것을 알게 되었다. 모든 이동은 유클리드 공간에 평행하게 이동하며, 데미지 및 급소 공격 등 수학적인 계산이 상당히 복잡하다. 또한 포켓몬스터 시리즈 역시 처음 발매된 시리즈의 이름부터 레드, 그린, 블루의 RGB이며, 블랙, 화이트 시리즈는 흑백이고, X, Y 시리즈는 미지수의 변수 이름이기도 하다. 심지어 아예 알고리즘의 이름을 따서 포켓몬스터 DP 시리즈도 있을 정도이다!</p>

<p>종우는 포켓몬들에게도 이러한 것이 숨겨져 있으리라 생각하고 피카츄도 사실 “피타츄”에서 유래되었다는 가설을 생각하게 되었다. 그래서 피카츄를 자세히 보던 중, 초기 피카츄의 꼬리가 직각이 많다는 것을 알아내었다! 피타고라스의 정리를 생각하던 종우는 문득 다음과 같은 의문이 들었다.</p>

<p>적어도 한 변의 길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 104.6%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msqrt><mjx-sqrt><mjx-surd><mjx-mo class="mjx-n"><mjx-c class="mjx-c221A"></mjx-c></mjx-mo></mjx-surd><mjx-box style="padding-top: 0.281em;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-box></mjx-sqrt></mjx-msqrt></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msqrt><mi>n</mi></msqrt></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$\sqrt{n}$</span></mjx-container>인 서로 다른 모양의 직각삼각형 중 적어도 두 변의 길이가 정수인 직각삼각형은 몇 개일까? 합동이 아닌 삼각형을 서로 다른 모양의 삼각형이라고 한다.</p>

<p>종우를 도와 문제를 풀어보자.</p>

### 입력 

 <p>직각삼각형이 포함해야 하는 변의 길이의 제곱을 나타내는 정수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 104.6%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-texatom size="s" texclass="ORD"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msup><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><mi>n</mi><mo>≤</mo><msup><mn>10</mn><mrow data-mjx-texclass="ORD"><mn>12</mn></mrow></msup><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n(1\le n\le10^{12})$</span></mjx-container>이 주어진다.</p>

### 출력 

 <p>조건을 만족하는 직각삼각형의 개수를 출력한다.</p>

<p>만약 그러한 삼각형이 무한히 존재한다면, <span style="color:#e74c3c;"><code>-1</code></span>을 출력한다.</p>

