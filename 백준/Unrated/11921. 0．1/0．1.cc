#include <cstdio>
#include <iostream>
#include <vector>
int main() {
    while (std::getchar()!='\n');
    constexpr size_t bufferSize=1<<26;
    std::vector<char>buffer(bufferSize);
    size_t bytesRead=std::fread(buffer.data(),1,bufferSize,stdin);
    long long sum=0;
    int M=0;
    long long current=0;
    for(size_t i=0;i<bytesRead;++i){
        char c=buffer[i];
        if(c=='\n'){
            sum+=current;
            current=0;
            ++M;
        }else current=current*10+(c-'0');
    }
    if(current!=0){
        sum+=current;
        ++M;
    }
    std::cout<<M<<'\n'<<sum<<'\n';
    return 0;
}