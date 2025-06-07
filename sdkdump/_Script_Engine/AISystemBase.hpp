#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AISystemBase : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    void* get_AISystemClassName();
    void* get_AISystemModuleName();
    bool get_bInstantiateAISystemOnClient();
    void set_bInstantiateAISystemOnClient(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
