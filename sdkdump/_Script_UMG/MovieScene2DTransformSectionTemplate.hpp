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
struct MovieScene2DTransformSectionTemplate : public _Script_MovieScene::MovieScenePropertySectionTemplate {
    private: char pad_48[0x468]; public:
    void* get_Translation();
    void* get_Rotation();
    void* get_Scale();
    void* get_Shear();
    void* get_BlendType();
    void* get_Mask();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4b0
#pragma pack(pop)
}
