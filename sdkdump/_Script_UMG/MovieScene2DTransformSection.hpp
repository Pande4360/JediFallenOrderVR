#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct MovieScene2DTransformSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x470]; public:
    void* get_TransformMask();
    void* get_Translation();
    void* get_Rotation();
    void* get_Scale();
    void* get_Shear();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x550
#pragma pack(pop)
}
