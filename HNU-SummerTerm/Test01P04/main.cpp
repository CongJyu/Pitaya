// 测试 1 问题 4

#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

struct people {
    char id[19];                  /* 身份证号码 */
    int social;                     /* 社保缴纳月数 */
    int area;                       /* 现有住房面积 */
    char date[11];              /* 申报日期 */
};

people *getMess(int &n);

struct human {
    string name;  //姓名
    int months;    //居住时长 月份
    int S;            //居住面积
    int time;        //提交申请的时间

    int rank;        //在买房的人中排名多少
    int has_house;  //是否能够买房
    int remain;        //到达该人时还有多少房

    human() {
        has_house = 1;  //默认能够买房
    }
};

bool cmp(human a, human b) {
    if (a.has_house != b.has_house) {
        return a.has_house > b.has_house;
    }  //不能买房的在后面
    if (a.S == 0 && b.S == 0)   //面积相等
    {
        if (a.months != b.months) {
            return a.months > b.months;
        }    //先比较居住月份
        else {
            return a.time < b.time;
        }    //最后比较提交购买的时间
    }
    if (a.S != b.S) {
        return a.S < b.S;
    }   //比较居住面积，小的优先
    else {
        return a.time < b.time;        //先提交申请的优先
    }
}


int main() {
    people *person;          /* 指向所有报名人的基本资料首地址，通过调用函数getMess获取 */
    int n;                            /* n为报名人数，通过调用函数getMess获取 */
    person = getMess(n);
    int no_house = 0;          //绝对无法买房的人数
    human *h = new human[n];
    for (int i = 0; i < n; i++) {
        h[i].name = person[i].id;      //身份证
        //cout<<h[i].name;
        h[i].months = person[i].social;  //月数
        h[i].S = person[i].area;
        if (h[i].S == 0 && h[i].months <= 24) {   //无法买房的人
            h[i].has_house = 0;
            no_house++;
        }
        string temp = person[i].date;
        h[i].time = (temp[0] - '0') * 10 * 30 + (temp[1] - '0') * 30 +
                    (temp[3] - '0') * 10 + (temp[4] - '0') +
                    (temp[6] - '0') * 1000 * 365 + (temp[7] - '0') * 100 * 365 + (temp[8] - '0') * 10 * 365 +
                    (temp[9] - '0') * 365;

    }
    sort(&h[0], &h[n], cmp);    //.....sort导致运行时错误！！！！！
    // for(int i=0;i<n;i++) cout<<h[i].name <<" "<<h[i].months  << " "<<h[i].S << " " <<h[i].time  <<" "<<h[i].rank <<endl;
    //-输入环节 -
    int m;
    int T;
    cin >> m >> T;
    int num = n - no_house;
    for (int i = 0; i < num; i++)       //处理排位问题以及能否买房问题
    {
        h[i].rank = i + 1;
        if (i > 0) {                                          // 全都要比较！！！！
            if (h[i].S == 0 && h[i - 1].S == 0) {
                if (h[i].months == h[i - 1].months && h[i].time == h[i - 1].time) {
                    h[i].rank = h[i - 1].rank;
                }
            } else if (h[i].S == h[i - 1].S && h[i].S != 0 && h[i - 1].S != 0) {
                if (h[i].time == h[i - 1].time) {
                    h[i].rank = h[i - 1].rank;
                }
            }
        }
    }
    for (int i = 0; i < num; i++) { h[i].remain = m - i; }   //每个人的剩余可选房数
    while (T--) {
        string a_name;
        cin >> a_name;
        int pos = 0;
        for (int i = 0; i < n; i++) {
            if (h[i].name == a_name)     //以后 if，else后面统统加 {   }  ！！！！！
            {
                pos = i;
                break;
            }
        }
        //- 判断输出 -/
        if (h[pos].has_house == 0) {    //绝对没法买房的刚性需求户
            cout << "Sorry" << '\n';
        } else {
            int num_house = 0;
            int num_same_rank = -1;
            for (int i = pos; i < num; i++) {           //往下找相同位次的
                if (h[i].rank != h[pos].rank) break;
                else {
                    num_same_rank++;
                }
            }
            for (int i = pos; i >= 0; i--) {           //往上找相同位次的
                if (h[i].rank == h[pos].rank) {
                    num_house = h[i].remain;
                    num_same_rank++;
                } else break;
            }
            if (num_same_rank == 1) {                        //该位次只有一个人
                if (num_house <= 0) cout << "Sorry" << '\n';
                else cout << h[pos].rank << '\n';
            } else {
                if (num_house <= 0) cout << "Sorry" << '\n';
                else if (num_house >= num_same_rank) {           //如果房子足够
                    cout << h[pos].rank << " " << h[pos].rank + num_same_rank - 1 << '\n';
                } else {
                    cout << num_house << "/" << num_same_rank << '\n';
                }
            }
        }
    }
    return 0;
}



//- 读入信息，得到人数n -/

people *getMess(int &n)            /* 将文件数据读入内存 */

{

    FILE *fp;

    fp = fopen("house.bin", "rb");


    fseek(fp, -1 * (long) sizeof(int), 2);

    fread(&n, sizeof(int), 1, fp);

    rewind(fp);

    people *tmp = new people[n];

    fread(tmp, sizeof(people), n, fp);


    fclose(fp);

    return tmp;

}
