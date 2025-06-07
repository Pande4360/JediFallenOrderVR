#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotifyState_PhysicalAnimation : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x20]; public:
    bool get_DoNotActivate();
    void set_DoNotActivate(bool value);
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfile();
    void* get_PhysicalAnimationOperationParameters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
