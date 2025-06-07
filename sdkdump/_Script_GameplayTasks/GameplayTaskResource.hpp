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
struct GameplayTaskResource : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    int32_t& get_ManualResourceID();
    void* get_AutoResourceID();
    bool get_bManuallySetID();
    void set_bManuallySetID(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
