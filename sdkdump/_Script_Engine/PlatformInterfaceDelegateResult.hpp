#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlatformInterfaceDelegateResult {
    private: char pad_0[0x38]; public:
    bool get_bSuccessful();
    void set_bSuccessful(bool value);
    void* get_Data();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
