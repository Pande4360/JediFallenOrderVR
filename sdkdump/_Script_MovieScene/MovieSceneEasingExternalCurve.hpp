#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneEasingExternalCurve : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    _Script_Engine::CurveFloat*& get_Curve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
