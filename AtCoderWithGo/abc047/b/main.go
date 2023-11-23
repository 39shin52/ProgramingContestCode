package main

import "fmt"

func main() {
	var w, h, n int
	fmt.Scan(&w, &h, &n)
	x := make([]int, 0)
	y := make([]int, 0)
	a := make([]int, 0)

	for i := 0; i < n; i++ {
		var s, t, v int
		fmt.Scan(&s, &t, &v)
		x = append(x, s)
		y = append(y, t)
		a = append(a, v)
	}

	maxx := w
	maxy := h
	minx := 0
	miny := 0

	for j := 0; j < n; j++ {
		if a[j] == 1 {
			minx = max(minx, x[j])
		} else if a[j] == 2 {
			maxx = min(maxx, x[j])
		} else if a[j] == 3 {
			miny = max(miny, y[j])
		} else if a[j] == 4 {
			maxy = min(maxy, y[j])
		}
	}

	dx := max(0, maxx-minx)
	dy := max(0, maxy-miny)

	fmt.Println(dx * dy)
}

func max(a, b int) int {
	if a > b {
		return a
	} else {
		return b
	}
}

func min(a, b int) int {
	if a > b {
		return b
	} else {
		return a
	}
}
