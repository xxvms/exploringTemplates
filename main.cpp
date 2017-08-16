#include <iostream>
template <typename T>
class HoldVarTypeT{
private:
    T value;
public:
    HoldVarTypeT() = default;
    void SetValue(const T& newValue) { value = newValue; }
    T& GetValue() { return value; }

};

int main() {
    HoldVarTypeT<char*> holdStr;
    holdStr.SetValue("sample string");

    std::cout << "the value of stored is: " << holdStr.GetValue() << '\n';
    return 0;
}