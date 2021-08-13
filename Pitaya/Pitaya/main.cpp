//
//  main.cpp
//  Pitaya
//
//  Created by ChenRain on 2021/8/13.
//

#include <iostream>
#include <stdlib.h>

int main()
{
    using namespace std;
    
    cout << "欢迎参加 Pitaya 测试项目！\n我们不会收集你的个人信息。" << endl;
    int opt;
    cout << "请选择你想参加的测试：" << endl;
    cout << "1 我适合做你的 npy 吗？" << endl;
    cout << "2 我的 MBTI 性格是什么？" << endl;
    cout << "请选择：";
    cin >> opt;
    cout << endl;
    if (opt == 1)
    {
        cout << endl << endl;
        
        //  npy test
        //  Title
        cout << "欢迎参与 NPY 测试！你适合做 ccy 的女朋友吗？" << endl;
        cout << "这是 Pitaya 试验项目的测试之一，仅供参考，我不会收集你的个人信息。";
        cout << endl;
        char name[30];
        cout << "同学，请输入名字拼音缩写开始测试：" << endl;
        cin >> name;
        cout << "你好，" << name << "！" << endl;
        cout << "可能会有很多无厘头的问题。\n请在选项中选一个你认为最符合自己的选项。填入数字。";
        cout << endl << endl;
        int ans;
        int yes = 0;

        //  confirm cyz
        string nameconfirm;
        cout << "再次确认你的名字的拼音缩写：" << endl;
        cin >> nameconfirm;
        if (nameconfirm == "cyz")
        {
            yes = 1000;
        }
        else
        {
            yes = 0;
        }
        cout << "请输入你的高考考号(10位数字)：" << endl;
        string num;
        cin >> num;
        if (num == "**********")
        {
            yes = yes + 1000;
        }
        else
        {
            yes = 0;
        }
        
        //  is cyz?
        if (yes == 2000)
        {
            cout << "嗯，非常合适喔！";
            cout << endl;
            cout << "你觉得呢？";
            cin >> ans;
            exit(100);
        }
        else
        {
            //  q1
            cout << "你的生理性别是：" << endl;
            cout << "1 女" << endl;
            cout << "2 男" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                yes++;
            }
            else
            {
                yes = -500;
            }
            cout << endl;
        
            //  q2
            cout << "你认为你自己是：" << endl;
            cout << "1 女生" << endl;
            cout << "2 男生" << endl;
            cout << "3 非二元性别" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                yes++;
            }
            else
            {
                yes = yes;
            }
            cout << endl;
        
            //  q3
            cout << "你觉得我认为自己是一个：" << endl;
            cout << "1 女生" << endl;
            cout << "2 男生" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                yes++;
            }
            else
            {
                yes = yes;
            }
            cout << endl;
            
            //  q4
            cout << "下面这些活动，你比较喜欢哪个？" << endl;
            cout << "1 舞蹈" << endl;
            cout << "2 绘画" << endl;
            cout << "3 唱歌" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                yes++;
            }
            else
            {
                yes = yes;
            }
            cout << endl;
        
            //  q5
            cout << "如果你的男朋友穿女装，你会：" << endl;
            cout << "1 支持" << endl;
            cout << "2 反对" << endl;
            cout << "3 无所谓" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                yes++;
            }
            else if (ans == 2)
            {
                yes = yes;
            }
            else
            {
                yes++;
            }
            cout << endl;
        
            //  q6
            cout << "你喜欢去博物馆吗？" << endl;
            cout << "1 喜欢" << endl;
            cout << "2 无感" << endl;
            cout << "3 不喜欢" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                yes++;
            }
            else if (ans == 2)
            {
                yes = yes;
            }
            else
            {
                yes = yes;
            }
            cout << endl;
            
            //  q7
            cout << "当你想叫醒我但是发现叫不醒的时候，你会：" << endl;
            cout << "1 放弃" << endl;
            cout << "2 用嘴咬" << endl;
            cout << "3 用手掐" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                yes = yes;
            }
            else
            {
                yes++;
            }
            cout << endl;
            
            //  q8
            cout << "下面这些，你比较喜欢哪一样？" << endl;
            cout << "1 汽水" << endl;
            cout << "2 咖啡" << endl;
            cout << "3 奶茶" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                yes = yes;
            }
            else if (ans == 2)
            {
                yes++;
            }
            else
            {
                yes++;
            }
            
            //  q9
            cout << "你跑800米最快需要多长时间呢？" << endl;
            cout << "1 3分15秒以内" << endl;
            cout << "2 3分45秒以内" << endl;
            cout << "3 4分钟以内" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                yes++;
            }
            else if (ans == 2)
            {
                yes = yes;
            }
            else
            {
                yes = yes;
            }
            
            //  q10
            cout << "你是不是喜欢穿裙子呢？";
            cout << "1 裙子是什么" << endl;
            cout << "2 是的" << endl;
            cout << "3 不是" << endl;
            cout << "4 无所谓" << endl;
            cout << "选择：";
            cin >> ans;
            if (ans == 1)
            {
                cout << "你是认真的吗？";
                yes = yes;
            }
            else if (ans == 2)
            {
                yes++;
            }
            else if (ans == 4)
            {
                yes = yes;
            }
            else
            {
                yes--;
            }
            
            cout << "好了，" << nameconfirm << "，来看看结果。";
            cout << endl;
            
            //  calculate
            if (yes >= 9)
            {
                cout << "嗯，比较合适。";
                cout << endl;
                cout << "你觉得呢？" << endl;
                cout << "回答：";
                cin >> ans;
                exit(101);
            }
            else if (yes < 9)
            {
                cout << "嗯，恐怕不太合适喔。";
                cout << endl;
                cout << "你觉得呢？" << endl;
                cout << "回答：";
                cin >> ans;
                exit(102);
            }
            //  return
            return 0;
        }
    }
    else
    {
        cout << endl << endl;
        
        //  mbti test
        int E = 0;
        int I = 0;
        int S = 0;
        int N = 0;
        int T = 0;
        int F = 0;
        int J = 0;
        int P = 0;
        
        //  Title
        cout << "欢迎参与 MBTI 性格测试！" << endl;
        cout << "这是 Pitaya 试验项目的测试之一，仅供参考，不会收集个人信息。" << endl;
        char name[50];
        cout << "输入您的名字开始测试：" << endl;
        cin.getline(name, 50);
        cout << "你好，" << name << "！" << endl;
        cout << "请在问题给出的两个选项中选一个你认为最符合自己的选项。1 或者 2。";
        cout << endl << endl;
        int ans;
        
        //  q1
        cout << "问题01" << endl;
        cout << "当你要外出一整天时，你会：" << endl;
        cout << "1 计划你要做什么和什么时候做" << endl;
        cout << "2 说去就去" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q2
        cout << "问题02" << endl;
        cout << "你认为自己是一个：" << endl;
        cout << "1 较为随性所致的人" << endl;
        cout << "2 较为有条理的人" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q3
        cout << "问题03" << endl;
        cout << "假如你是一位老师，你会选教：" << endl;
        cout << "1 以事实为主的课程" << endl;
        cout << "2 以理论为主的课程" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q4
        cout << "问题04" << endl;
        cout << "你通常：" << endl;
        cout << "1 与人容易混熟" << endl;
        cout << "2 比较沉静或矜持" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            E++;
        else
            I++;
        cout << endl;
        
        //  q5
        cout << "问题05" << endl;
        cout << "一般来说，你和哪些人容易合得来？" << endl;
        cout << "1 与富于想象力的人" << endl;
        cout << "2 现实的人" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q6
        cout << "问题06" << endl;
        cout << "你是否经常让：" << endl;
        cout << "1 你的情感支配你的理智" << endl;
        cout << "2 你的理智主宰你的情感" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        //  q7
        cout << "问题07" << endl;
        cout << "处理许多事情上，你会喜欢" << endl;
        cout << "1 凭兴所致行事" << endl;
        cout << "2 按照计划行事" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q8
        cout << "问题08" << endl;
        cout << "你是否" << endl;
        cout << "1 容易让人了解" << endl;
        cout << "2 难于让人了解" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            E++;
        else
            I++;
        cout << endl;
        
        //  q9
        cout << "问题09" << endl;
        cout << "按程序表做事" << endl;
        cout << "1 合你心意" << endl;
        cout << "2 让你感到束缚" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q10
        cout << "问题10" << endl;
        cout << "当你有一份特别的任务，你会" << endl;
        cout << "1 开始前小心组织计划" << endl;
        cout << "2 边做边找需做什么" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q11
        cout << "问题11" << endl;
        cout << "在大多数情况下，你会选择" << endl;
        cout << "1 顺其自然" << endl;
        cout << "2 按程序表做事" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q12
        cout << "问题12" << endl;
        cout << "大多数人会说你是一个" << endl;
        cout << "1 重视自我隐私的人" << endl;
        cout << "2 非常坦率开放的人" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q13
        cout << "问题13" << endl;
        cout << "你宁愿被认为是一个" << endl;
        cout << "1 实事求是的人" << endl;
        cout << "2 机灵的人" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q14
        cout << "问题14" << endl;
        cout << "在一大群人中，通常是" << endl;
        cout << "1 你介绍大家认识" << endl;
        cout << "2 别人介绍你" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            E++;
        else
            I++;
        cout << endl;
        
        //  q15
        cout << "问题15" << endl;
        cout << "你会跟哪些人做朋友？" << endl;
        cout << "1 经常提出新主意的" << endl;
        cout << "2 脚踏实地的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q16
        cout << "问题16" << endl;
        cout << "你比较喜欢" << endl;
        cout << "1 坐观事情发展才做计划" << endl;
        cout << "2 很早就做计划" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q17
        cout << "问题17" << endl;
        cout << "你喜欢花很多时间" << endl;
        cout << "1 一个人独处" << endl;
        cout << "2 和别人一起" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q18
        cout << "问题18" << endl;
        cout << "与很多人一起会" << endl;
        cout << "1 令你活力倍增" << endl;
        cout << "2 令你心力交瘁" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            E++;
        else
            I++;
        cout << endl;
        
        //  q19
        cout << "问题19" << endl;
        cout << "你倾向" << endl;
        cout << "1 重视情感多于逻辑" << endl;
        cout << "2 重视逻辑多于情感" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q20
        cout << "问题20" << endl;
        cout << "你比价喜欢" << endl;
        cout << "1 很早便把约会、社交聚集等事情安排妥当" << endl;
        cout << "2 无拘无束，看当时有什么好玩就做什么" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q21
        cout << "问题21" << endl;
        cout << "计划一个旅程时，你比较喜欢" << endl;
        cout << "1 大部分的时间都是跟着当天的感觉行事" << endl;
        cout << "2 事先知道大部分日子会做什么" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q22
        cout << "问题22" << endl;
        cout << "在社交聚会中" << endl;
        cout << "1 有时感到郁闷" << endl;
        cout << "2 常常乐在其中" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q23
        cout << "问题23" << endl;
        cout << "你通常" << endl;
        cout << "1 和别人容易混熟" << endl;
        cout << "2 趋向自处一隅" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            E++;
        else
            I++;
        cout << endl;
        
        //  q24
        cout << "问题24" << endl;
        cout << "哪些人会更吸引你？" << endl;
        cout << "1 一个思想敏捷及非常聪颖的人" << endl;
        cout << "2 实事求是，具丰富常识的人" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q25
        cout << "问题25" << endl;
        cout << "在日常工作中，你会" << endl;
        cout << "1 颇为喜欢迫使你分秒必争的突发" << endl;
        cout << "2 通常预先计划，以免在压力下工作" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q26
        cout << "问题26" << endl;
        cout << "你认为别人一般" << endl;
        cout << "1 要花很长的时间才认识你" << endl;
        cout << "2 用很短的时间便认识你" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q27
        cout << "问题27" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 注重隐私" << endl;
        cout << "2 坦率开放" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q28
        cout << "问题28" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 预先安排" << endl;
        cout << "2 无计划的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q29
        cout << "问题29" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 抽象" << endl;
        cout << "2 具体" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q30
        cout << "问题30" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 温柔" << endl;
        cout << "2 坚定" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q31
        cout << "问题31" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 思考" << endl;
        cout << "2 感受" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q32
        cout << "问题32" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 事实" << endl;
        cout << "2 意念" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q33
        cout << "问题33" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 冲动" << endl;
        cout << "2 决定" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q34
        cout << "问题34" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 热衷" << endl;
        cout << "2 文静" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            E++;
        else
            I++;
        cout << endl;
        
        //  q35
        cout << "问题35" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 文静" << endl;
        cout << "2 外向" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q36
        cout << "问题36" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 有系统" << endl;
        cout << "2 随意" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q37
        cout << "问题37" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 理论" << endl;
        cout << "2 肯定" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q38
        cout << "问题38" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 敏感" << endl;
        cout << "2 公正" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q39
        cout << "问题39" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 令人信服" << endl;
        cout << "2 感人的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q40
        cout << "问题40" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 声明" << endl;
        cout << "2 概念" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q41
        cout << "问题41" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 不受约束" << endl;
        cout << "2 预先安排" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q42
        cout << "问题42" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 矜持" << endl;
        cout << "2 健谈" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q43
        cout << "问题43" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 有条不紊" << endl;
        cout << "2 不拘小节" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q44
        cout << "问题44" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 意念" << endl;
        cout << "2 实况" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q45
        cout << "问题45" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 同情怜悯" << endl;
        cout << "2 远见" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q46
        cout << "问题46" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 利益" << endl;
        cout << "2 祝福" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q47
        cout << "问题47" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 务实的" << endl;
        cout << "2 理论的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q48
        cout << "问题48" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 朋友不多" << endl;
        cout << "2 朋友众多" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q49
        cout << "问题49" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 有系统" << endl;
        cout << "2 即兴" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q50
        cout << "问题50" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 富想像的" << endl;
        cout << "2 就事论事" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q51
        cout << "问题51" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 亲切的" << endl;
        cout << "2 客观的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q52
        cout << "问题52" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 客观的" << endl;
        cout << "2 热情的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q53
        cout << "问题53" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 建造" << endl;
        cout << "2 发明" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q54
        cout << "问题54" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 文静" << endl;
        cout << "2 合群" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q55
        cout << "问题55" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 理论" << endl;
        cout << "2 事实" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q56
        cout << "问题56" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 同情" << endl;
        cout << "2 逻辑" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q57
        cout << "问题57" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 具分析力" << endl;
        cout << "2 多愁善感" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q58
        cout << "问题58" << endl;
        cout << "哪个词语更符合你心意？" << endl;
        cout << "1 合情合理" << endl;
        cout << "2 令人着迷" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q59
        cout << "问题59" << endl;
        cout << "当你要在一个星期内完成一个大项目，你在开始的时候会" << endl;
        cout << "1 把要做的工作依次列出" << endl;
        cout << "2 马上动工" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q60
        cout << "问题60" << endl;
        cout << "在社交场合中，你会经常感到" << endl;
        cout << "1 与某些人很难打开话匣和保持对话" << endl;
        cout << "2 与多数人都能从容地长谈" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q61
        cout << "问题61" << endl;
        cout << "要做许多人都做的事，你比较喜欢" << endl;
        cout << "1 按照一般认可的方法去做" << endl;
        cout << "2 自己构想方法" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q62
        cout << "问题62" << endl;
        cout << "你刚认识的朋友能否说出你的兴趣" << endl;
        cout << "1 马上可以" << endl;
        cout << "2 要等他们真正了解你之后才可以" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            E++;
        else
            I++;
        cout << endl;
        
        //  q63
        cout << "问题63" << endl;
        cout << "你通常较喜欢的科目是：" << endl;
        cout << "1 讲授概念和原则的" << endl;
        cout << "2 讲授事实和数据的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q64
        cout << "问题64" << endl;
        cout << "哪个是较高的赞誉" << endl;
        cout << "1 一贯感性的人" << endl;
        cout << "2 一贯理性的人" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q65
        cout << "问题65" << endl;
        cout << "你认为按照程序表做事" << endl;
        cout << "1 有时是需要的，但你不太喜欢这样做" << endl;
        cout << "2 大多数情况是有帮助的，而且是你喜欢做的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q66
        cout << "问题66" << endl;
        cout << "和一群人在一起，你通常会选：" << endl;
        cout << "1 跟你很熟悉的个别人说话" << endl;
        cout << "2 参与大伙的谈话" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q67
        cout << "问题67" << endl;
        cout << "在社交聚会上，你会" << endl;
        cout << "1 是多说话的一个" << endl;
        cout << "2 让别人多说话" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            E++;
        else
            I++;
        cout << endl;
        
        //  q68
        cout << "问题68" << endl;
        cout << "把周末期间要完成的事列成清单，这个主意会" << endl;
        cout << "1 合你意" << endl;
        cout << "2 使你提不起劲" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q69
        cout << "问题69" << endl;
        cout << "哪个是较高的赞誉？" << endl;
        cout << "1 能干的" << endl;
        cout << "2 富有同情心的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q70
        cout << "问题70" << endl;
        cout << "你通常喜欢" << endl;
        cout << "1 事先安排好你的社交约会" << endl;
        cout << "2 随兴之所至做事" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            J++;
        else
            P++;
        cout << endl;
        
        //  q71
        cout << "问题71" << endl;
        cout << "总的来说，你要做一个大型作业时，你会选" << endl;
        cout << "1 边做边想该做什么" << endl;
        cout << "2 首先把工作按步细分" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q72
        cout << "问题72" << endl;
        cout << "你是否能滔滔不绝地与人聊天" << endl;
        cout << "1 只限于跟你有共同兴趣的人" << endl;
        cout << "2 几乎跟所有人都可以" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            I++;
        else
            E++;
        cout << endl;
        
        //  q73
        cout << "问题73" << endl;
        cout << "你会：" << endl;
        cout << "1 跟随一些证明有效的方法" << endl;
        cout << "2 分析还有什么毛病，及分析尚未解决的难题" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q74
        cout << "问题74" << endl;
        cout << "为乐趣而阅读时，你会" << endl;
        cout << "1 喜欢新奇或创新的表达方式" << endl;
        cout << "2 喜欢作者直话直说" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q75
        cout << "问题75" << endl;
        cout << "你宁愿替哪一位上司或老师工作？" << endl;
        cout << "1 天性纯良，但常常前后不一的" << endl;
        cout << "2 言辞尖锐但永远合乎逻辑的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            N++;
        cout << endl;
        
        //  q76
        cout << "问题76" << endl;
        cout << "你做事情多数是" << endl;
        cout << "1 按当天心情去做" << endl;
        cout << "2 按拟好的程序表去做" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            P++;
        else
            J++;
        cout << endl;
        
        //  q77
        cout << "问题77" << endl;
        cout << "你是否" << endl;
        cout << "1 可以和任何人按需求从容地交谈" << endl;
        cout << "2 只有对某些人和在某种情况下才能畅所欲言" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            E++;
        else
            I++;
        cout << endl;
        
        //  78
        cout << "问题78" << endl;
        cout << "要做决定时，你认为比较重要的是" << endl;
        cout << "1 据事实衡量" << endl;
        cout << "2 考虑他人的感受或意见" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q79
        cout << "问题79" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 想象的" << endl;
        cout << "2 真实的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q80
        cout << "问题80" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 仁慈慷慨的" << endl;
        cout << "2 意志坚定的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q81
        cout << "问题81" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 公正的" << endl;
        cout << "2 有关怀心" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q82
        cout << "问题82" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 制作" << endl;
        cout << "2 设计" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q83
        cout << "问题83" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 可能性" << endl;
        cout << "2 必然性" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q84
        cout << "问题84" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 温柔" << endl;
        cout << "2 力量" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q85
        cout << "问题85" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 实际" << endl;
        cout << "2 多愁善感" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //      q86
        cout << "问题86" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 制造" << endl;
        cout << "2 创造" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q87
        cout << "问题87" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 新颖的" << endl;
        cout << "2 已知的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            N++;
        else
            S++;
        cout << endl;
        
        //  q88
        cout << "问题88" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 同情" << endl;
        cout << "2 分析" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q89
        cout << "问题89" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 坚持己见" << endl;
        cout << "2 温柔有爱心" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q90
        cout << "问题90" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 具体的" << endl;
        cout << "2 抽象的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
        
        //  q91
        cout << "问题91" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 全心投入" << endl;
        cout << "2 有决心的" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            F++;
        else
            T++;
        cout << endl;
        
        //  q92
        cout << "问题92" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 能干" << endl;
        cout << "2 仁慈" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            T++;
        else
            F++;
        cout << endl;
        
        //  q93
        cout << "问题93" << endl;
        cout << "下面一对词语中，哪一个更符合你心意？" << endl;
        cout << "1 实际" << endl;
        cout << "2 创新" << endl;
        cout << "我选择：";
        cin >> ans;
        if (ans == 1)
            S++;
        else
            N++;
        cout << endl;
            
        //  Calculate the output
        cout << endl << name << "，你已经完成了 MBTI 性格测试，";
        cout << endl << "你的测试结果为：";
        if (E <= I)
            cout << "I";
        else
            cout << "E";
        if (S <= N)
            cout << "N";
        else
            cout << "S";
        if (T <= F)
            cout << "F";
        else
            cout << "T";
        if (J <= P)
            cout << "P";
        else
            cout << "J";
        cout << endl;
        cout << "退出程序将会把结果数据全部抹去。";
        cout << endl;
        //  Return
        return 0;
    }
    
    return 0;
}
