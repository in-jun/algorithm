# [Silver V] 콰트로치즈피자 - 27964 

[문제 링크](https://www.acmicpc.net/problem/27964) 

### 성능 요약

메모리: 2028 KB, 시간: 0 ms

### 분류

자료 구조, 해시를 사용한 집합과 맵, 구현, 문자열

### 문제 설명

<p>치즈와 피자에 환장하는 비행씨는 매일같이 치즈피자를 사 먹다가 지갑이 거덜 나고 말았다. 만들어 먹는 것이 사 먹는 것보다 싸다는 것을 안 비행씨는 여러 가지 토핑을 가져와서 직접 피자를 만들어 먹기로 했다.  </p>

<p>콰트로치즈피자는 이름 그대로, 서로 다른 네 종류의 치즈가 토핑으로 들어가야 한다. 수많은 치즈피자를 먹어 온 비행씨는 토핑의 이름이 <span style="color:#e74c3c;"><code>Cheese</code></span>로 끝나면 이 토핑이 치즈라는 사실을 알고 있다. 비행씨가 가져온 토핑의 목록을 보고, 이 토핑의 일부 혹은 전부를 이용하여 콰트로치즈피자를 만들 수 있는지 답해 보자.</p>

### 입력 

 <p>첫 번째 줄에 토핑의 개수가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 104.6%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1$</span></mjx-container> 이상 <mjx-container class="MathJax" jax="CHTML" style="font-size: 104.6%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>100</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$100$</span></mjx-container> 이하의 정수로 주어진다.</p>

<p>두 번째 줄에는 한 줄로 구성된 토핑의 목록이 주어진다. 각 토핑들은 공백으로 구분되어 있으며, <mjx-container class="MathJax" jax="CHTML" style="font-size: 104.6%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1$</span></mjx-container>개 이상 <mjx-container class="MathJax" jax="CHTML" style="font-size: 104.6%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>100</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$100$</span></mjx-container>개 이하의 영문 대소문자로 구성되어 있다. 대소문자를 구분함에 유의하라.</p>

### 출력 

 <p>입력으로 주어진 토핑의 목록으로 콰트로치즈피자를 만들 수 있으면 <span style="color:#e74c3c;"><code>yummy</code></span>, 만들 수 없으면 <span style="color:#e74c3c;"><code>sad</code></span>를 출력하라.</p>

