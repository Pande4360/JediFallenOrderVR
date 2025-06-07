#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct MovieSceneMarginSectionTemplate : public _Script_MovieScene::MovieScenePropertySectionTemplate {
    private: char pad_48[0x288]; public:
    void* get_TopCurve();
    void* get_LeftCurve();
    void* get_RightCurve();
    void* get_BottomCurve();
    void* get_BlendType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d0
#pragma pack(pop)
}
