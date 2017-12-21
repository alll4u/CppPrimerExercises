#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <fstream>
#include <string>
#include <map>
#include <sales_data.h>
#include <stack>
/*
 * @ No      :9.26
 * @ brief   :单迭代器erase删除list元素
 *
 */

using namespace std;
void process(shared_ptr<int> ptr){
    cout << "inside the process function:" << ptr.use_count() << endl;
}
constexpr char* trans(){
    return "abc";
}

int main(int argc, char *argv[])
{
    /*
     * @ No      :google adcanced learning path
     * @ brief   :Compression and Decompression
     *
     */
    string s = "2[3[a]c[b]]";
    stack<char> stk;
    for(int i=0;(i<s.size());i++){
        if(s[i]!=']'){
            stk.push(s[i]);
        }
        else {
            //pop this all elements
            stack<char> temp_stk;
            while(stk.top()!='['){
                temp_stk.push(stk.top());
                cout << stk.top();
                stk.pop();
            }
            stk.pop();
            cout << endl;
            //count times
            int times = 1;

            if(!stk.empty()){
                char temp_times = stk.top();
                if(temp_times>'0' && temp_times<'9'){
                    stk.pop();
                    times = temp_times-'0';
                }
            }
            //part_string
            string part_s;
            while(!temp_stk.empty()){
                part_s.push_back(temp_stk.top());
                temp_stk.pop();
            }
            //times the string
            for(int j=0;j<times;j++){
                for(int k=0;k<part_s.size();k++){
                    stk.push(part_s[k]);
                }
            }
        }
    }

//    string s = "2[3[a]b]";
//    stack<char> stk;
//    stack<int> fore_idx;
//    for(int i=0;i<s.size();i++){

//        if(s[i]!=']'){
//            stk.push(s[i]);
//            if(s[i]=='[')
//                fore_idx.push(i);
//        }
//        else {
//            //take out the '[' idx
//            int temp_idx = fore_idx.top();
//            fore_idx.pop();
//            //pop this all elements
//            for(int j=0;j<i-temp_idx;j++)
//                stk.pop();
//            //times the string
//            int times = 1;
//            char temp_times = stk.top();
//            if(temp_times>'0' && temp_times<'9'){
//                stk.pop();
//                times = temp_times-'0';
//            }
//            string part_s;
//            for(int j=0;j<times;j++)
//                part_s.append(string(s, temp_idx+1, i-temp_idx-1));
//            for(int j=0;j<part_s.size();j++)
//                stk.push(part_s[j]);
//        }
//    }

//    string a = "2";
//    cout << (a[0]>'0'&&a[0]<'9');

    /*
     * @ No      :Page 264
     * @ brief   :desription
     *
     */
//    string null_book = "9-999-99999-9";
//    Sales_data item("123",123,333);
//    item.combine(null_book);
//    print(cout, item);
    /*
     * @ No      :7.11
     * @ brief   :struct constructor
     *
     */
//    Sales_data sd1("0xABCD");
//    print(cout, sd1);
//    Sales_data sd2;
//    print(cout, sd2);
//    Sales_data sd3("0xZXCV", 12, 100);
//    print(cout, sd3);
//    Sales_data sd4(cin);
//    print(cout, sd4);
    /*
     * @ No      :7.13
     * @ brief   :rewrite page 299
     *
     */

    /*
     * @ No      :7.2
     * @ brief   :desription
     *
     */
//    cout << "hello world"<<endl;
//    Sales_data total;
//    if(read(cin, total)){
//        Sales_data trans;
//        while(read(cin, trans)){
//            if(total.isbn()==trans.isbn())
//                total.combine(trans);
//            else{
//                print(cout, total);
//                total = trans;
//            }
//        }
//        print(cout, total);
//    }else{
//        cerr << "No data?" << endl;
//    }

    /*
     * @ No      :12.xx
     * @ brief   :shared_ptr
     *
     */
//    shared_ptr<int> p(new int(42));
//    cout << p.use_count() << endl;
//    int *q = p.get();
//    {
//        shared_ptr<int>(q);
//    }
//    int foo = *p;
//    cout << foo << endl;
//    process(shared_ptr<int>(p));
//    int *x = new int(1024);
////    process(x);
//    process(shared_ptr<int>(x));
//    int j=*x;

//    {
//        auto sp = make_shared<int>();
//        auto p = sp.get();
//        delete p;
//    }
    /*
     * @ No      :12.xx
     * @ brief   :unique_ptr
     *
     */
//    unique_ptr<int> up(new int(42));
//    unique_ptr<int> cpy_up = up;
//    int ix=1024,*pi=&ix,*pi2=new int(2048);
//    typedef unique_ptr<int> IntP;
////    IntP p0(ix);
//    IntP p1(pi);
//    IntP p2(pi2);
//    IntP p3(&ix);
//    IntP p4(new int(2048));
//    IntP p5(p2.get());


//    int ia[]={0,2,2,2,1,1,2,3,5,8,13,21,55,89};
//    vector<int> vec(ia, end(ia));
//    list<int> lst(ia, end(ia));
//    forward_list<int> flst(ia, end(ia));
////    for(int i=0;i<11;i++){
////        vec.push_back(ia[i]);
////        lst.push_back(ia[i]);
////    }
//    for(auto iter=vec.begin();iter<vec.end();)
//    {
//        if(*iter%2==0){
//            iter=vec.erase(iter);
//        }
//        else{
//            iter++;
//        }
//    }
//    for(auto iter=lst.begin();iter!=lst.end();)
//    {
//        if(*iter%2){
//            iter=lst.erase(iter);
//        }
//        else {
//            iter++;
//        }
//    }
//    for(auto e:lst){
//        cout << e << endl;
//    }
//    vector<int> v = {1,2,3,4};
//    auto begin = v.begin();
//    while(begin != v.end()){
////        ++begin;
//        begin = v.insert(begin, 42);
//        begin+=2;
//    }
//    for(auto e:v){
//        cout << e << endl;
//    }
//    ofstream fs;
//    fs.open("/Users/fei/results.txt");
//    vector<int> a;

//    for(int i;i<10000;i++){
//        a.push_back(i);
//        fs << "a.size:" << a.size() <<" a.capacity:" << a.capacity() << endl;
//    }
//    fs.close();

//    string str = "abcde through thru";
//    string str2 = string{str.begin(), str.begin()+3};
//    cout << str2 << endl;
//    string oldVal = "thru";
//    string newVal = "through";
//    for(auto beg=str.begin();distance(beg, str.end())>=distance(oldVal.begin(), oldVal.end());){
//        if(string{beg, beg+oldVal.size()} == oldVal){
//            beg = str.erase(beg, beg+oldVal.size());
//            beg = str.insert(beg, newVal.cbegin(), newVal.cend());
//            advance(beg, newVal.size());
//        }
//        else
//            beg++;
//    }
//    for(int i=0;str.size()-i>=oldVal.size();){
//        if(str.substr(i, oldVal.size())==oldVal){
//            str.replace(i, oldVal.size(), newVal);
//        }
//        i++;
//    }
//    cout << (string::npos== str.find("absdas"));
//    cout << str << endl;

//    ifstream in;
//    in.open("/Users/fei/letters.txt");
//    if(!in)
//        cout << "error" << endl;
//    size_t longest=0;
//    string longest_str;
//    for(string word;in>>word;){
//        if(word.find_first_not_of("aceimnorsuvwxz")==string::npos)
//            if(word.size()>longest)
//                longest_str=word;
//    }
//    cout << longest_str;
//    string test = "ab2c4d7c4e6";
//    string number{"1234567890"};
//    string character = "abcdefg";
//    vector<string> results;
//    cout << "numeric characters:"<<endl;
//    for(string::size_type pos=0;pos!=string::npos;++pos){
//        pos = pos=test.find_first_of(number,pos);
//        cout << "position: "<<pos<<endl;
//        cout << test[pos] << " ";
//    }

//    multimap<string, string> example={{"aaa", "bbb"},{"ddd","d"}};
//    multimap<string, string> family;
//    family.insert(example.begin(), example.end());
//    for(auto e:family){
//        cout << e.first << ":" << e.second<<endl;
//    }
//    map<int, string> m = {{1,"ss"}, {2, "sz"}};
//    using KeyType = std::map<int, std::string>::key_type;
//    cout << "type to subscript: "<<typeid(KeyType).name() << endl;
//    cout << "returned from the subscript operator: "<<typeid(decltype(m[1])).name() << endl;
//    vector<int> ss = {1,2,3,4};

    /*
     * @ No      :11.35
     * @ brief   :associative container INSERT v.s. subscript operations
     *
     */
//    map<int, int> tmp = {{111,111},{222,222}};
//    map<int, int> mp = {{1,2},{3,4},{5,6}};
//    auto c = mp.erase(mp.end());
//    cout << c->first << ":"<< c->second << endl;
////    auto d = mp.insert(tmp.begin(), tmp.end());
////    cout << d.first->second << ":"<< d.second << endl;
//    mp.insert({1,4});
//    mp[3]=5;
//    mp[3]=6;
//    for(auto e:mp)
//        cout << e.first << ":"<< e.second << endl;

    return 0;
}
