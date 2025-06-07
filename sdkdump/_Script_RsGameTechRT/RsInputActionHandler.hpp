#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsInputActionHandler {
    private: char pad_0[0x100]; public:
    void* get_Class();
    void* get_OnActionFunction();
    void* get_RequiredNavStates();
    void* get_RequiredInputFlags();
    void* get_RequiredLoadoutFlags();
    void* get_RequiredUpgradeFlags();
    void* get_RequiredHeldInputActions();
    void* get_RequiredTagQuery();
    void* get_CustomCanPerformActionCheck();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
