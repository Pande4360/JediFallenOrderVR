#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BehaviorTreeManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    int32_t& get_MaxDebuggerSteps();
    void* get_LoadedTemplates();
    void* get_ActiveComponents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
