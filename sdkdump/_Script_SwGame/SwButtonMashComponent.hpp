#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwButtonMashComponent : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x118]; public:
    float& get_ButtonMashAnimNotifyTimeout();
    static _Script_CoreUObject::Class* static_class();
    void OnSingleButtonPress();
    void OnDied(_Script_Engine::Actor* DeadActor);
    void MontageStarted(_Script_Engine::AnimMontage* Montage);
    void MontageEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    bool CanAcceptInput(void* ActionName);
}; // Size: 0x298
#pragma pack(pop)
}
