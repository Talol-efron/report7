#include <stdio.h>
const int SIZE = 6; //定数として配列のサイズを宣言
int scores[SIZE] = {100, 60, 70, 100, 90, 80};
int i,j,ans;
int result[SIZE] = {};

//scoresのprint用
void print_array(int array[], int size);
void print_array(int array[], int size)
{
    printf("scores =");
    for (i = 0; i < SIZE - 1; i++)
    {
        printf("%4d", scores[i]);
    }
    printf("%3d\n", scores[4]);
}
//並び替えた後にresultをprint出力をする
//バブルソート方式
void change_array(int num[], int size);
void change_array(int num[], int size) 
{
    for (i = 0; i < size; ++i) 
    {
        for (j = i + 1; j < SIZE; ++j)
        {
            if (num[i] < num[j])
            {
                ans = num[i];
                num[i] = num[j];
                num[j] = ans;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        result[i] = num[i]; 
    }

    printf("result =");
    for (i = 0; i < SIZE - 1; i++)
    {
        printf("%4d", result[i]);
    }
    printf("%3d\n", result[4]);
}

int main(){
    
    //処理コード
    print_array(scores,SIZE);
    
    change_array(scores,SIZE);
    return 0;
}

