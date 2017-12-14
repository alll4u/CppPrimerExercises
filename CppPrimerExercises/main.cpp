#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <fstream>
/*
 * @ No      :9.26
 * @ brief   :单迭代器erase删除list元素
 *
 */

using namespace std;

int main(int argc, char *argv[])
{
    int ia[]={0,2,2,2,1,1,2,3,5,8,13,21,55,89};
    vector<int> vec(ia, end(ia));
    list<int> lst(ia, end(ia));
    forward_list<int> flst(ia, end(ia));
//    for(int i=0;i<11;i++){
//        vec.push_back(ia[i]);
//        lst.push_back(ia[i]);
//    }
    for(auto iter=vec.begin();iter<vec.end();)
    {
        if(*iter%2==0){
            iter=vec.erase(iter);
        }
        else{
            iter++;
        }
    }
    for(auto iter=lst.begin();iter!=lst.end();)
    {
        if(*iter%2){
            iter=lst.erase(iter);
        }
        else {
            iter++;
        }
    }
    for(auto e:lst){
        cout << e << endl;
    }
    vector<int> v = {1,2,3,4};
    auto begin = v.begin();
    while(begin != v.end()){
//        ++begin;
        begin = v.insert(begin, 42);
        begin+=2;
    }
    for(auto e:v){
        cout << e << endl;
    }
    ofstream fs;
    fs.open("/Users/fei/results.txt");
    vector<int> a;

    for(int i;i<10000;i++){
        a.push_back(i);
        fs << "a.size:" << a.size() <<" a.capacity:" << a.capacity() << endl;
    }
    fs.close();

    string str = "abcde through thru";
    string str2 = string{str.begin(), str.begin()+3};
    cout << str2 << endl;
    string oldVal = "thru";
    string newVal = "through";
//    for(auto beg=str.begin();distance(beg, str.end())>=distance(oldVal.begin(), oldVal.end());){
//        if(string{beg, beg+oldVal.size()} == oldVal){
//            beg = str.erase(beg, beg+oldVal.size());
//            beg = str.insert(beg, newVal.cbegin(), newVal.cend());
//            advance(beg, newVal.size());
//        }
//        else
//            beg++;
//    }
    for(int i=0;str.size()-i>=oldVal.size();){
        if(str.substr(i, oldVal.size())==oldVal){
            str.replace(i, oldVal.size(), newVal);
        }
        i++;
    }
    cout << str << endl;
    return 0;
}