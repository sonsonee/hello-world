#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int s = 0;
    int ans = 0;
    bool right = false; // 이전 괄호가 오른쪽 괄호였는지
    for(char ch : str){
        if(ch == '(') {
            s += 1;
            right = false;
        }
        else if(ch == ')'){
            if(!right){   // 바로 앞이 '('이면 절단
                if(s == 1){    // 쇠막대기 없이 절단만 있을 때
                    s -= 1;
                }
                else{          // 쇠막대기 절단
                    s -= 1;
                    ans += s;
                }
                right = true;
            }
            else{    // 쇠막대기 끝
                s -= 1;
                ans += 1;
                right = true;
            }
        }
    }
    cout << ans;
    return 0;
}
