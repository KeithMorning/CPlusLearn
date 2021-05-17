#include <iostream>
#include <string>
#include <vector>

//字符串，向量，数组
using std::cin; using std::cout;using std::endl;
using std::string;
using std::vector;
using std::begin;using std::end;

vector<string> mySplit(string a,char spli);
vector<int> readNum(char spli);
void calculateHT(vector<int> rs);
void exampleIter();

int main() {

    //计算首尾数组之和
    /*
    vector<int> rs = readNum(',');
    calculateHT(rs);
     */
    exampleIter();

    return 0;
}




void calculateHT(vector<int> rs){
    int size = rs.size();
    for(int i = 0,j = size-1;i<j;i++,j--){
        int sum = rs[i] + rs[j];
        cout << sum << endl;
    }

}

// 输入一组数组，放到向量里
vector<int> readNum(char spli){
    string tmp;
    cin >> tmp;

    vector<int> rs;
    auto rst = mySplit(tmp,spli);
    for(auto c : rst){
        rs.push_back(std::stoi(c));
    }

    return rs;
}

vector<string> mySplit(string a,char spli){
    vector<string> rs;
    string tmp = "";
    for(auto c:a){
        if(c==spli){
            if(tmp != "")
                rs.push_back(tmp);
            tmp = "";
            continue;
        }
        tmp = tmp + c;
    }
    if(tmp != ""){
        rs.push_back(tmp);
    }

    return rs;
}

//迭代器
//迭代器得到的是一个引用，并不是第一个值，通过 *解引用
void exampleIter(){
   string s("some string!");
   if(s.begin() != s.end()){
       auto it = s.begin();
       *it = toupper(*it);

   }
   cout << s << endl;

   //test
   for(auto it = s.begin();it != s.end() && !isspace(*it);++it){
       *it = toupper(*it);
   }
   cout << s << endl;

   //类型
   vector<int>::iterator it; //读写
   string::iterator it2;
   vector<int>::const_iterator it3; //readonly
   string::const_iterator it4;

   vector<int> v;
   const vector<int> cv;
   auto iter1 = v.begin(); //readwrite
   auto iter2 = cv.begin(); //readonly
   auto iter3 = v.cbegin(); //readonly

   vector<string> tmp5 = {"a","ab","abc"};
   auto it5 = tmp5.begin();
   for(auto itc = it5;itc != tmp5.end();++itc){
       cout << "size is " << itc->size() << endl;
   }

   vector<int> vc32 = {1,23,10,2,44,33,9};
   for(auto it = vc32.begin();it!=vc32.end();++it){
       *it = 2 * (*it);
   }

   for(auto i :vc32){
       cout << i << endl;
   }


   vector<int> a{1,2,3,4,5,6};
   auto start = a.begin();
   auto end = a.end();
   auto mid = start + (end - start) / 2;
   int target = 3;
    while (mid != end && *mid != target){
        if(target < *mid){
            end = mid;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << *mid << endl;

    int excise[3] = {199,299,399};
    auto excise_cp = excise;
    cout << excise_cp[1] << endl;

    int ia[] = {10,20,30,30};
    decltype(ia) ia3 = {11,21,31,-1};
    ia3[2] = 22;
    cout << ia3[2] << endl;

    int *beg  = begin(ia3);
    int *last = std::end(ia3);
    while(beg != last && *beg > 0){
        ++beg;
    }
    cout << *beg << endl;

    int iia[] = {0,2,4,6,8};
    int *p = &iia[2]; // 从第三个开始

    int j_152 = p[1];
    int k_153 = p[-2];
    cout << "j " << j_152 << " k " << k_153 << endl; // j 6 k 0


    int int_array[] = {1,2,3,4,5,6};
    vector<int> int_vector_array(begin(int_array),std::end(int_array));
    auto v_begin = int_vector_array.begin();
    while (v_begin != int_vector_array.end()){
        cout << *v_begin << endl;
        v_begin++;
    }

    int ar_size = int_vector_array.size();
    int int_array_cp[ar_size];
    for(int i = 0; i < ar_size; i++){
        int_array_cp[i] = int_vector_array[i];
    }

    cout << "int copy from vector is" << endl;
    for(int i = 0;i<ar_size;i++){
        cout << int_array_cp[i] <<endl;
    }



}
