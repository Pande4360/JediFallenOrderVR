#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsCameraConditional.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsCameraConditionalExpression : public RsCameraConditional {
    private: char pad_28[0x20]; public:
    _Script_SwGame::RsCameraConditional*& get_A();
    void* get_Operator();
    _Script_SwGame::RsCameraConditional*& get_B();
    bool get_bAllowEarlyOut();
    void set_bAllowEarlyOut(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
