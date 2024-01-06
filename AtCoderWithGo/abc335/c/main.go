package main

import (
	"fmt"
	"strconv"
)

// 全ノードの座標を管理しておく必要はなかったみたい
// 頭のノードがいた場所だけ記録しておく必要があった

type dra struct {
	x int
	y int
}

func main() {
	var n, q int
	fmt.Scan(&n, &q)
	dragon := make([]dra, 0)
	for i := 0; i < n; i++ {
		dragon = append(dragon, dra{i, 0})
	}

	for i := 0; i < q; i++ {
		var q1 int
		var q2 string
		fmt.Scan(&q1, &q2)
		if q1 == 1 {
			dragon = query1(q2, dragon)
		} else if q1 == 2 {
			query2(q2, dragon)
		}
	}
}

func query1(c string, dragon []dra) []dra {
	switch c {
	case "R":
		for i := 0; i < len(dragon); i++ {
			if i == 0 {
				dragon[i].x += 1
			} else {
				dragon[i].x = dragon[i-1].x
				dragon[i].y = dragon[i-1].y
			}
		}
	case "L":
		for i := 0; i < len(dragon); i++ {
			if i == 0 {
				dragon[i].x -= 1
			} else {
				dragon[i].x = dragon[i-1].x
				dragon[i].y = dragon[i-1].y
			}
		}
	case "U":
		for i := 0; i < len(dragon); i++ {
			if i == 0 {
				dragon[i].y += 1
			} else {
				dragon[i].x = dragon[i-1].x
				dragon[i].y = dragon[i-1].y
			}
		}
	case "D":
		for i := 0; i < len(dragon); i++ {
			if i == 0 {
				dragon[i].y -= 1
			} else {
				dragon[i].x = dragon[i-1].x
				dragon[i].y = dragon[i-1].y
			}
		}
	}

	return dragon
}

func query2(c string, dra []dra) {
	i, _ := strconv.Atoi(c)
	fmt.Println("i: ", i)
	fmt.Println(dra[i-1].x, dra[i-1].y)
}
