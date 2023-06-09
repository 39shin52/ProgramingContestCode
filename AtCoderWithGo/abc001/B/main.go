package main

import "fmt"

func main() {
	var m, vv int
	var flag bool
	fmt.Scan(&m)

	switch {
	case m >= 100 && m <= 5000:
		if m / 1000 > 0 {
			flag = false
		} else {
			flag = true
		}
		vv = m / 100
	case m >= 6000 && m <= 30000:
		vv = m / 1000 + 50
	case m >= 35000 && m <= 70000:
		vv = (m / 1000 - 30) / 5 + 80
	case m >= 70000:
		vv = 89
	default:
		vv = 0
	}

	if flag {
		fmt.Print("0")
	}

	fmt.Println(vv)
}