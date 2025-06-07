#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsInfluence {
    private: char pad_0[0x60]; public:
    void* get_Transform();
    void* get_LinearOverride();
    void* get_LinearAdditive();
    void* get_LinearType();
    float& get_LinearDuration();
    void* get_AngularType();
    float& get_AngularDuration();
    void* get_base();
    bool get_StripLinearIdentity();
    void set_StripLinearIdentity(bool value);
    bool get_StripAngularIdentity();
    void set_StripAngularIdentity(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
