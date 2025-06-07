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
struct AkRoomComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x20]; public:
    bool get_bEnable();
    void set_bEnable(bool value);
    _Script_AkAudio::AkRoomComponent*& get_NextLowerPriorityComponent();
    float& get_Priority();
    float& get_WallOcclusion();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2f0
#pragma pack(pop)
}
