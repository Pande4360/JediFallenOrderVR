#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Script_SwGame {
struct SwSuperJumpSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSuperJumpComponent : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0xc8]; public:
    _Script_SwGame::SwSuperJumpSettings*& get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void OnJumpEnd(void* State);
    void OnJumpAscentCompleted();
    void OnChargeEnd(void* State, void* Reason);
    void OnChargeCompleted();
    bool IsJumping();
    bool IsJumpDescending();
    bool IsJumpAscending();
    bool IsCharging();
    bool IsChargeComplete();
    void* GetState();
    void EndJump();
    void EndCharge(void* Reason);
    void BeginJump();
    void BeginCharge();
    void _OnTopologyChange(void* prevMode, void* newMode, float Proximity);
    void _OnTakeDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void _OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* InterruptedCharacter);
}; // Size: 0x248
#pragma pack(pop)
}
