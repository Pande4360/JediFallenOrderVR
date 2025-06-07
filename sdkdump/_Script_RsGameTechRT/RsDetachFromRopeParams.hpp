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
struct RsDetachFromRopeParams {
    private: char pad_0[0x1]; public:
    bool get_bUnstretchRope();
    void set_bUnstretchRope(bool value);
    bool get_bResetNavState();
    void set_bResetNavState(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1
#pragma pack(pop)
}
