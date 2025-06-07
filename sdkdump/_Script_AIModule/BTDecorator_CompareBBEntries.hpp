#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator_CompareBBEntries : public BTDecorator {
    private: char pad_68[0x58]; public:
    void* get_Operator();
    void* get_BlackboardKeyA();
    void* get_BlackboardKeyB();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
