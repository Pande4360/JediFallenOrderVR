#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Script_SwGame {
struct SwWallRunSettings;
}
namespace _Script_Engine {
struct Controller;
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
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwWallRunComponent : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x50]; public:
    _Script_SwGame::SwWallRunSettings*& get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetWallRunState(void* State);
    void OnWallRunLost(void* Reason);
    void OnWallRunFound(void* wallOrientation);
    void OnWallRunExpiredEnd();
    void OnWallRunExpiredBegin();
    void OnWallRunEnd(void* Reason);
    bool IsWallRunning();
    bool IsWallRunJumping();
    bool IsWallRunFalling();
    bool IsWallRunAllowed();
    bool HasWallRunExpired();
    void* GetWallRunState();
    void* GetWallRunOrientation();
    float GetWallRunExpiredElapsedTime();
    float GetWallRunElapsedTime();
    float GetWallRunAbsoluateElapsedTime();
    _Script_CoreUObject::Vector GetWallNormal();
    _Script_CoreUObject::Vector GetViewDirection();
    void EndWallRun(void* Reason);
    void BeginWallRun();
    void _OnWallTopologyChange(void* prevMode, void* newMode, float Proximity);
    void _OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void _OnGroundTopologyChange(void* prevMode, void* newMode, float Proximity);
    void _OnForceMeterBarEmptied(void* ForceAbility, float timeUntilRegen);
    void _OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* myCharacter);
    void _OnAnyNavStateChanged(void* NewState, void* PrevState);
}; // Size: 0x1d0
#pragma pack(pop)
}
