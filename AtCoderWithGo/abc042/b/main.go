package main

import (
	"fmt"
	"sort"
)

func main() {
	var n, l int
	fmt.Scan(&n, &l)
	sn := make([]string, 0)
	for i := 0; i < n; i++ {
		var s string
		fmt.Scan(&s)
		sn = append(sn, s)
	}

	// string型のスライスのソート
	sort.Strings(sn)

	for _, v := range sn {
		fmt.Print(v)
	}
	fmt.Println("")
}
