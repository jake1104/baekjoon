#include <iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int N;
    std::cin>>N;
    std::cin.ignore();
    constexpr int BUFFER_SIZE=1<<20;
    char buffer[BUFFER_SIZE];
    int read_size=std::cin.read(buffer,BUFFER_SIZE).gcount();
    long long sum=0;
    int count=0,num=0;
    for (int i=0;i<read_size;++i){
        if (buffer[i]>='0'&&buffer[i]<='9'){
            num=num*10+(buffer[i]-'0');
        } else {
            sum += num;
            num = 0;
            ++count;
        }
    }
    std::cout<<count<<'\n'<<sum<<'\n';
    return 0;
}
