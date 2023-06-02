package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func read() string {
    sc.Scan()
    return sc.Text()
}

func main() {
    sc.Split(bufio.ScanWords) // スペース区切りの設定
    // sc.Split(bufio.ScanLines)    // 一行丸ごと読む設定
    n, _ := strconv.Atoi(read()) // int
		q, _ := strconv.Atoi(read())

    // map
    m := map[int]int{}
    for i := 0; i < q; i++ {
        s, _ := strconv.Atoi(read())
				t, _ := strconv.Atoi(read())
				m[s] = t
    }

    // 中身の確認用
    fmt.Println(n, m)
}