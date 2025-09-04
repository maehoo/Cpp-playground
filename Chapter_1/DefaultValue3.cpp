#include <iostream>

int boxvolume(int length, int width =1, int height =1);

int main(void)
{
    std::cout << "[3,3,3] : " << boxvolume(3,3,3) << std::endl;
    std::cout << "[5,5,D] : " << boxvolume(5,5) << std::endl;
    std::cout << "[7,D,D] : " << boxvolume(7) << std::endl;
    //std::cout << "[D,D,D] : " << boxvolume() << std::endl;
    return 0;    
}

int boxvolume(int length, int width, int height)
{
    return length * width * height;
}
//모든 매개변수에 디폴트 값이 지정된 것이 아니기 때문에, 인자를 전달하지 않는 형태의 함수 (10행) 호출은 컴파일 에러로 이어진다.
