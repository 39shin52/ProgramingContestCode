package main

import "fmt"

func main() {
	var sa, sb, sc string
	fmt.Scan(&sa, &sb, &sc)
	a := make([]string, 0)
	b := make([]string, 0)
	c := make([]string, 0)

	for _, s := range sa {
		a = append(a, string(s))
	}
	for _, s := range sb {
		b = append(b, string(s))
	}
	for _, s := range sc {
		c = append(c, string(s))
	}

	x := a[0]
	a = a[1:]

	for {
		switch x {
		case "a":
			if len(a) == 0 {
				fmt.Println("A")
				return
			}
			x = a[0]
			a = a[1:]
		case "b":
			if len(b) == 0 {
				fmt.Println("B")
				return
			}
			x = b[0]
			b = b[1:]
		case "c":
			if len(c) == 0 {
				fmt.Println("C")
				return
			}
			x = c[0]
			c = c[1:]
		}
	}
}
