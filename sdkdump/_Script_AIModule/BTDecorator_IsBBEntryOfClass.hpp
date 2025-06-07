#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTDecorator_BlackboardBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator_IsBBEntryOfClass : public BTDecorator_BlackboardBase {
    private: char pad_90[0x8]; public:
    void* get_TestClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
