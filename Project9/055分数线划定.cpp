﻿
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct student
{
    int no;
    int score;
} stu[5000];
bool operator<(student a, student b)
{
    if (a.score != b.score)
        return a.score > b.score;
    return a.no < b.no;
}
int main()
{
    int score, num = 0;
    int n, m, want;
    cin >> n >> m;
    want = floor(m * 1.5);
    for (int i = 0; i < n; i++) {
        cin >> stu[i].no >> stu[i].score;
    }
    stable_sort(stu, stu + n);
    score = stu[want - 1].score;
    num = want;
    for (int i = want; i < n; i++) { // 处理重分
        if (stu[i].score == stu[want - 1].score) {
            num++;
        }
    }
    cout << score << " " << num << endl;
    for (int i = 0; i < num; i++)
        cout << stu[i].no << " " << stu[i].score << endl;
    return 0;
}

//  c8b7b6f55e03afe64fda635b8b9b28b3778e7b4155d639498c9c28cd067cf79a

//	A市对所有报名的选手进行了笔试，笔试分数达到面试分数线的选手方可进入面试。
//	面试分数线根据计划录取人数的150%划定，即如果计划录取m名志愿者，则面试分数线为排名第m*150%（向下取整）名的选手的分数，
//	而最终进入面试的选手为笔试成绩不低于面试分数线的所有选手。
//	现在就请你编写程序划定面试分数线，并输出所有进入面试的选手的报名号和笔试成绩。
//输入
//第一行，两个整数n，m（5 ≤ n ≤ 5000，3 ≤ m ≤ n），中间用一个空格隔开，其中n 表示报名参加笔试的选手总数，m 表示计划录取的志愿者人数。输入数据保证m * 150 % 向下取整后小于等于n。
//第二行到第 n + 1 行，每行包括两个整数，中间用一个空格隔开，分别是选手的报名号k（1000 ≤ k ≤ 9999）和该选手的笔试成绩s（1 ≤ s ≤ 100）。数据保证选手的报名号各不相同。
//输出
//第一行，有两个整数，用一个空格隔开，第一个整数表示面试分数线；第二个整数为进入面试的选手的实际人数。
//从第二行开始，每行包含两个整数，中间用一个空格隔开，分别表示进入面试的选手的报名号和笔试成绩，按照笔试成绩从高到低输出，如果成绩相同，则按报名号由小到大的顺序输出。