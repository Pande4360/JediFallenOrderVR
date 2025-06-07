#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTasks {
#pragma pack(push, 1)
struct GameplayTask : public _Script_CoreUObject::Object {
    private: char pad_28[0x40]; public:
    void* get_InstanceName();
    void* get_ResourceOverlapPolicy();
    _Script_GameplayTasks::GameplayTask*& get_ChildTask();
    static _Script_CoreUObject::Class* static_class();
    void ReadyForActivation();
    void EndTask();
}; // Size: 0x68
#pragma pack(pop)
}
