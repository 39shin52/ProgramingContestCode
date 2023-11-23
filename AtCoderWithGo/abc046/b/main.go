package main

import (
	"fmt"
	"math"
)

func main() {
	var n, k int
	fmt.Scan(&n, &k)

	fmt.Println(int(math.Pow(float64(k-1), float64(n-1)) * float64(k)))
}
