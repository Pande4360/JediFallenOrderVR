#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BlackboardKeySelector {
    private: char pad_0[0x28]; public:
    void* get_AllowedTypes();
    void* get_SelectedKeyName();
    void* get_SelectedKeyType();
    void* get_SelectedKeyID();
    bool get_bNoneIsAllowedValue();
    void set_bNoneIsAllowedValue(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
