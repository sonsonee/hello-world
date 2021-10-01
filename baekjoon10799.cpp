#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int s = 0;
    int ans = 0;
    bool right = false; // ���� ��ȣ�� ������ ��ȣ������
    for(char ch : str){
        if(ch == '(') {
            s += 1;
            right = false;
        }
        else if(ch == ')'){
            if(!right){   // �ٷ� ���� '('�̸� ����
                if(s == 1){    // �踷��� ���� ���ܸ� ���� ��
                    s -= 1;
                }
                else{          // �踷��� ����
                    s -= 1;
                    ans += s;
                }
                right = true;
            }
            else{    // �踷��� ��
                s -= 1;
                ans += 1;
                right = true;
            }
        }
    }
    cout << ans;
    return 0;
}
