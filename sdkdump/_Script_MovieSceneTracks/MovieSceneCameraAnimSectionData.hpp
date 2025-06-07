#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneCameraAnimSectionData {
    private: char pad_0[0x20]; public:
    _Script_Engine::CameraAnim*& get_CameraAnim();
    float& get_Playrate();
    float& get_PlayScale();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    bool get_bLooping();
    void set_bLooping(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
