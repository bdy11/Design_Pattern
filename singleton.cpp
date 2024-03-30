#include <iostream>

class Singleton {
public:
    // 静态成员函数，用于获取单例实例
    static Singleton& getInstance() {
        // 使用静态局部变量确保线程安全性
        static Singleton instance;
        return instance;
    }

    // 其他成员函数
    void doSomething() {
        std::cout << "Singleton instance is doing something." << std::endl;
    }

private:
    // 私有化构造函数和拷贝构造函数以防止外部创建多个实例和复制实例
    Singleton() {}
    Singleton(const Singleton&);
};

int main() {
    // 获取单例实例
    Singleton& instance = Singleton::getInstance();

    // 调用单例实例的成员函数
    instance.doSomething();

    return 0;
}