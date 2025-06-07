#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotifyState_CameraRotationMethod : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x10]; public:
    void* get_NotifyViewTargetRotationUpdateMethod();
    void* get_NotifyModeName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
