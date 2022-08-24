// ccf-csp 202206-3

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> opt_in_list;  // 用于存储操作清单中的操作
vector<string> resource_type_in_list;  // 资源种类清单
vector<string> resource_name_in_list;  // 资源名称清单
vector<string> obj_in_list_user;  // 授权对象清单：用户
vector<string> obj_in_list_group;  // 授权对象清单：用户组

int main() {
    ios::sync_with_stdio(false);

    int n{}, m{}, q{};
    cin >> n >> m >> q;
    /*
     * 角色数量 n
     * 角色关联量 m
     * 查询操作数量 q
     */
    while (n--) {
        string id;
        cin >> id;  // 角色名称

        int nv{};
        cin >> nv;  // 操作清单中的操作数量

        for (int i{}; i < nv; ++i) {
            string opt;  // 操作名字
            cin >> opt;
            opt_in_list.push_back(opt);  // 存储起来
        }

        int no{};
        cin >> no;  // 资源种类清单中包含的资源种类数量

        for (int i{}; i < no; ++i) {
            string resource_type;
            cin >> resource_type;
            resource_type_in_list.push_back(resource_type);
        }

        int nn{};
        cin >> nn;  // 资源名称清单中包含的资源名称的数量

        for (int i{}; i < nn; ++i) {
            string resource_name;
            cin >> resource_name;
            resource_name_in_list.push_back(resource_name);
        }
    }

    while (m--) {
        string name;
        cin >> name;  // 角色关联的角色名称

        int ns{};
        cin >> ns;  // 授权清单中包含的授权对象的数量

        for (int i{}; i < ns; ++i) {
            cin.ignore();
            char group_or_user;
            cin >> group_or_user;
            clog << "用户还是用户组：" << group_or_user << endl;
            if (group_or_user == 'g') {
                // 如果是用户组
                string obj;
                cin >> obj;
                obj_in_list_group.push_back(obj);
            } else {
                // 如果是用户
                string obj;
                cin >> obj;
                clog << "输入的用户名：" << obj << endl;
                obj_in_list_user.push_back(obj);
            }
        }
    }

    // 接下来是 q 行待授权行为
    while (q--) {
        string username;
        cin >> username;  // 执行操作的用户名称

        int ng{};
        cin >> ng;  // 用户所属用户组的数量

        vector<string> user_in_which_group;  // 该用户在哪些用户组里
        for (int i{}; i < ng; ++i) {
            string which_group;
            cin >> which_group;
            user_in_which_group.push_back(which_group);
        }

        string opt_name, res_type_name, res_name_name;
        cin >> opt_name;  // 待查操作的名称
        cin >> res_type_name;  // 被操作的资源种类
        cin >> res_name_name;  // 被操作的资源名称

        // 输出部分
        bool have_group{false};  // 用户是否在存在的用户组里，或者该名字是否为一个存在的用户组
        bool have_command{false};  // 用户的操作是否在操作清单里
        bool have_resource{false};  // 用户要的资源是否在资源种类清单里

        for (int i{}; i < (int) obj_in_list_group.size(); ++i) {
            if (username == obj_in_list_group.at(i)) {
                // 是一个用户组
                have_group = true;
                break;
            }
        }
        for (int i{}; i < (int) obj_in_list_user.size(); ++i) {
            if (username == obj_in_list_user.at(i)) {
                // 是一个存在的用户
                have_group = true;
                break;
            }
        }
        // 看看用户组里面有没有
        for (int i{}; i < (int) obj_in_list_group.size(); ++i) {
            for (int j{}; j < (int) user_in_which_group.size(); ++j) {
                if (obj_in_list_group.at(i) == user_in_which_group.at(j)) {
                    // 在用户组中
                    have_group = true;
                    goto level_0;
                }
            }
        }
        level_0:
        if (have_group) {
            clog << "=)" << endl;
        }

        for (int i{}; i < (int) opt_in_list.size(); ++i) {
            if (opt_name == opt_in_list.at(i)) {
                // 有存在的操作
                have_command = true;
                break;
            }
        }

        for (int i{}; i < (int) resource_type_in_list.size(); ++i) {
            if (res_type_name == resource_type_in_list.at(i)) {
                // 有存在的资源
                have_resource = true;
                break;
            }
        }

        // 判断
        clog << "=====情况=====" << endl;
        clog << have_group << " " << have_command << " " << have_resource << endl;
        if (have_group and have_command and have_resource) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    // 测试部分
    clog << "=====OPT IN LIST=====" << endl;
    for (int i{}; i < (int) opt_in_list.size(); ++i) {
        clog << opt_in_list.at(i) << endl;
    }
    clog << "=====RESOURCE TYPE IN LIST=====" << endl;
    for (int i{}; i < (int) resource_type_in_list.size(); ++i) {
        clog << resource_type_in_list.at(i) << endl;
    }
    clog << "=====RESOURCE NAME IN LIST=====" << endl;
    for (int i{}; i < (int) resource_name_in_list.size(); ++i) {
        clog << resource_name_in_list.at(i) << endl;
    }
    clog << "=====OBJ IN LIST USER=====" << endl;
    for (int i{}; i < (int) obj_in_list_user.size(); ++i) {
        clog << obj_in_list_user.at(i) << endl;
    }
    clog << "=====OBJ IN LIST GROUP=====" << endl;
    for (int i{}; i < (int) obj_in_list_group.size(); ++i) {
        clog << obj_in_list_group.at(i) << endl;
    }

    return 0;
}
