#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScene3DTransformSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x6a0]; public:
    void* get_TransformMask();
    void* get_Translation();
    void* get_Rotation();
    void* get_Scale();
    void* get_ManualWeight();
    void* get_FrameToTeleportTypeMap();
    bool get_bUseQuaternionInterpolation();
    void set_bUseQuaternionInterpolation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x780
#pragma pack(pop)
}
