/*正確答案應該是將第六行的else if 改成if

這樣就能確保在開始打印數字之後，即使後面有多個 0，仍能正常打印非零數字*/

/* 
N = 54321, output = 12345

N=10011, output = 11001

N=1 ,should output 1
*/
void solution(int N) {

    int enable_print = N % 10;

    while (N > 0) {

        if (enable_print == 0 && N % 10 != 0) {

            enable_print = 1;

        }

        if (enable_print == 1) { // 修改此行

            cout << N % 10;

        }

        N = N / 10;

    }

}

