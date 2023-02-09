package main

import (
	"fmt"
)

func main() {
	var a int
	var b int
	for i := 0; ; i++ {
		a = 0
		b = 0
		fmt.Scanf("%d %d", &a, &b)
		if a == 0 && b == 0 {
			break
		}
		fmt.Printf("%d\n", a+b)
	}
}
