#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkSurfaceReflectorSetComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x30]; public:
    bool get_bEnableSurfaceReflectors();
    void set_bEnableSurfaceReflectors(bool value);
    void* get_AcousticPolys();
    bool get_bEnableDiffraction();
    void set_bEnableDiffraction(bool value);
    bool get_bEnableDiffractionOnBoundaryEdges();
    void set_bEnableDiffractionOnBoundaryEdges(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateSurfaceReflectorSet();
    void SendSurfaceReflectorSet();
    void RemoveSurfaceReflectorSet();
}; // Size: 0x300
#pragma pack(pop)
}
