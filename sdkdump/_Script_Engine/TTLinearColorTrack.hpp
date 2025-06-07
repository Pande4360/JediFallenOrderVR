#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TTTrackBase.hpp"
namespace _Script_Engine {
struct CurveLinearColor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TTLinearColorTrack : public TTTrackBase {
    private: char pad_10[0x8]; public:
    _Script_Engine::CurveLinearColor*& get_CurveLinearColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
