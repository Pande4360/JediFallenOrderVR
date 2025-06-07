#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_Interfaces_INT_LightsaberUser {
#pragma pack(push, 1)
struct INT_LightsaberUser_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SetLightsaberAttacksEnabled(bool NewEnabled, bool HideLightsaberWhileDisabled);
    void GetLightsaberType(void*& CurrentType);
    void SetLightsaberType(void* NewType);
    void GetLightsaber(_Script_Engine::Actor*& Lightsaber, _Script_Engine::Actor*& Lightsaber02);
    void SaberSheathe(bool Unsheathe, bool ignoreFlashlight, bool saveFlashlight);
    void SaberAttach(bool hip);
    void SaberOn(bool Off, bool Instant, void* SaberToExtend);
    void FanLightsaber(bool On);
}; // Size: 0x28
#pragma pack(pop)
}
