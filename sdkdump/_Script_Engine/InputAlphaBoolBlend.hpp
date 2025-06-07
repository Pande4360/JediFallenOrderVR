#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InputAlphaBoolBlend {
    private: char pad_0[0x50]; public:
    float& get_BlendInTime();
    float& get_BlendOutTime();
    void* get_BlendOption();
    bool get_bInitialized();
    void set_bInitialized(bool value);
    _Script_Engine::CurveFloat*& get_CustomCurve();
    void* get_AlphaBlend();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
