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
/*
     * @ No      :leetcode 575
     * @ brief   :come with the main func part leetcode 575
     *
     */
//using PAIR = pair<int, int>;
//bool cmp_by_value(const PAIR& lhs, const PAIR& rhs) {
//  return lhs.first > rhs.first;
//}
//struct CmpByValue {
//    bool operator()(const PAIR& lhs, const PAIR& rhs) {
//        return lhs.first < rhs.first;
//    }
//};
int calculateDuel(int p1, int p2, int p1_armor=0, int p2_armor=0){
//    bool flag=true;
//    while(p1>0 && p2>0){
//        if(flag)
//            p2-=p1;
//        else{
//            p1-=p2;
//        }
//        flag=!flag;
//    }
//    p1=p1<0?0:p1;
//    p2=p2<0?0:p2;
//    cout << "p1:"<<p1<<endl;
//    cout << "p2:"<<p2<<endl;

    bool flag=true;
    int hp1 = p1+p1_armor;
    int hp2 = p2+p2_armor;
    while(p1>0 && p2>0){

        if(flag){
            if(p1<p2_armor)
                p2_armor-=p1;
            else{
                p2_armor=0;
                p2=hp2-p1;
            }
        }
        else{
            if(p2<p1_armor)
                p1_armor-=p2;
            else{
                p1_armor=0;
                p1=hp1-p2;
            }
        }
        flag=!flag;
        hp1 = p1+p1_armor;
        hp2 = p2+p2_armor;
    }
    p1=p1<0?0:p1;
    p2=p2<0?0:p2;
    cout << "p1:"<<p1<<endl;
    cout << "p2:"<<p2<<endl;
    return 0;
}
void Func(char str_arg[100]){
    printf("%d/n", sizeof(str_arg));
}
/*
     * @ No      :cpp Primer 13.7
     * @ brief   :shallow copy
     *
     */
class Point{
public:
    Point(int _x, int _y):x(_x),y(_y){};
    Point(const Point &p){
        x=p.x;
        y=p.y;
    }
    ~Point()=delete;
public:
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    Point *source = new Point(10, 20);
    Point *dest = source;
    dest->x = 111;
    cout << source->x << endl;
    delete dest;
//    vector<vector<int>> a = {{1,2},{3,4}};
//    a.push_back({1,333,33});
//    vector<vector<int>> b(a.size(), vector<int>(a[0].size(), 0));
//    for(auto e:b){
//        for(auto ele:e)
//            cout << ele << endl;
//    }
//    char a[5] = {'a','c'};
//    char *s = "hello world";
//    for(int i=0;i<sizeof(s)-1;i++){
//        a[i]=*(s+i);
//    }
//    printf("%s",a);
    /*
     * @ No      :leetcode 575
     * @ brief   :EZ problem;
     *            wasting time;
     *            but learn how to rewrite func in sort
     * @ warning : the following answers are WRONG!
     *
     */
//    map<int, int> test = {{1,2},{2,2},{3,2}};
//    vector<pair<int, int>> vec;
//    int sum=0;
//    for(auto e:test){
//        vec.push_back(make_pair(e.second, e.first));
//        //sum the amount of candies
//        sum += e.second;
//    }
//    cout << "sum:"<<sum<<endl;
//    //sort by candies quantities
//    sort(vec.begin(), vec.end(), CmpByValue());
//    int sister_get=0;
//    int i=0;
//    while(sister_get <= sum/2){
//        cout << "temp:"<<sister_get <<" i:"<<i<< endl;
//        sister_get += vec[i++].first;
//    }
//    cout << "sister can obtain :" << i << endl;
////    sort(test.begin(), test.end(), [](pair<int, int> a, pair<int, int> b){return a.second > b.second;});
//    for(auto e:vec){
//        cout << e.first << ":" << e.second << endl;
//    }


    /*
     * @ No      :google adcanced learning path
     * @ brief   :Compression and Decompression
     *
     */
//    string s = "2[3[a]c[b]]";
//    stack<char> stk;
//    for(int i=0;(i<s.size());i++){
//        if(s[i]!=']'){
//            stk.push(s[i]);
//        }
//        else {
//            //pop this all elements
//            stack<char> temp_stk;
//            while(stk.top()!='['){
//                temp_stk.push(stk.top());
//                cout << stk.top();
//                stk.pop();
//            }
//            stk.pop();
//            cout << endl;
//            //count times
//            int times = 1;

//            if(!stk.empty()){
//                char temp_times = stk.top();
//                if(temp_times>'0' && temp_times<'9'){
//                    stk.pop();
//                    times = temp_times-'0';
//                }
//            }
//            //part_string
//            string part_s;
//            while(!temp_stk.empty()){
//                part_s.push_back(temp_stk.top());
//                temp_stk.pop();
//            }
//            //times the string
//            for(int j=0;j<times;j++){
//                for(int k=0;k<part_s.size();k++){
//                    stk.push(part_s[k]);
//                }
//            }
//        }
//    }

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
