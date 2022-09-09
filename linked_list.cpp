#include <bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node *next;
    node *prev;

};

void workWith(node* crnt){
    node* crnt_node = crnt;
    while(crnt_node!= NULL){
        cout<<crnt_node->next<<" ";
        crnt_node = crnt_node->next;
    }

}
int main(){
    vector<node> list;

}