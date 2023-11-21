package main

import "fmt"

func main() {
	var w string
	fmt.Scan(&w)
	m := make(map[string]int)

	for i := 0; i < len(w); i++ {
		m[string(w[i])] += 1
	}

	for _, v := range m {
		if v%2 != 0 {
			fmt.Println("No")
			return
		}
	}

	fmt.Println("Yes")
}
