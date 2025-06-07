#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneCameraAnimSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0x40]; public:
    void* get_AnimData();
    _Script_Engine::CameraAnim*& get_CameraAnim();
    float& get_Playrate();
    float& get_PlayScale();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    bool get_bLooping();
    void set_bLooping(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
