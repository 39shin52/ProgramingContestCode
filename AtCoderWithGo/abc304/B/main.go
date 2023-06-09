package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	switch {
	case n >= 1000 && n <= 9999:
		fmt.Println((n / 10) * 10)
	case n >= 10000 && n <= 99999:
		fmt.Println((n / 100) * 100)
	case n >= 100000 && n <= 999999:
		fmt.Println((n / 1000) * 1000)
	case n >= 1000000 && n <= 9999999:
		fmt.Println((n / 10000) * 10000)
	case n >= 10000000 && n <= 99999999:
		fmt.Println((n / 100000) * 100000)
	case n >= 100000000 && n <= 999999999:
		fmt.Println((n / 1000000) * 1000000)
	default:
		fmt.Println("err!")
	}
}
