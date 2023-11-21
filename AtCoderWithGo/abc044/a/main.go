package main

import "fmt"

func main() {
	var n, k, x, y int
	fmt.Scan(&n, &k, &x, &y)
	sum := 0

	for i := 0; i < n; i++ {
		if i == k {
			break
		}
		sum += x
	}

	if n-k > 0 {
		for j := 0; j < n-k; j++ {
			sum += y
		}
	}

	fmt.Println(sum)
}
