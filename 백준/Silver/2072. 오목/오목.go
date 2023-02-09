package main

import "fmt"

var board = [361]int{0}
var order int = 0

func main() {
	var max int
	var x, y [101]int
	fmt.Scanf("%d", &max)
	for i := 0; i < max; i++ {
		fmt.Scanf("%d %d", &x[i], &y[i])
	}

	for i := 0; i < max; i++ {
		if victory(x[i], y[i]) {
			fmt.Printf("%d", i+1)
			return
		}
	}
	fmt.Printf("-1")
}

func victory(x, y int) bool {
	index := (x - 1) + (19 * (y - 1))
	if order%2 == 0 {
		board[index] = 1
	} else {
		board[index] = 2
	}
	order++
	for j := 0; j < 360; j++ {
		if board[j] != 0 {
			cases := 0
			for i := 1; i <= 4; i++ {
				count := 1
				switch i {
				case 1:
					cases = 19
				case 2:
					cases = 1

				case 3:
					cases = 20

				case 4:
					cases = 18
				}

				for i := 1; i <= 6; i++ {
					if (0 <= (cases*i)+j && (cases*i)+j <= 360) && board[(cases*i)+j] == board[j] {
						count++
					} else {
						break
					}
				}
				for i := -1; i >= -6; i-- {
					if (0 <= (cases*i)+j && (cases*i)+j <= 360) && board[(cases*i)+j] == board[j] {
						count++
					} else {
						break
					}
				}
				if count == 5 {
					return true
				}
			}
		}
	}
	return false
}
