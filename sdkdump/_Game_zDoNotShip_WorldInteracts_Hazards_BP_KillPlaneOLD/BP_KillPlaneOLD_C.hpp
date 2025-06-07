#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD {
#pragma pack(push, 1)
struct BP_KillPlaneOLD_C : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    bool get_Enabled();
    void set_Enabled(bool value);
    bool get_bAIOnly();
    void set_bAIOnly(bool value);
    bool get_bFullDeath();
    void set_bFullDeath(bool value);
    _Script_RsGameTechRT::RsCharacter*& get_damageActor();
    _Script_Engine::Actor*& get_Actor();
    static _Script_CoreUObject::Class* static_class();
    void LVL_Disable();
    void LVL_Enable();
    void UserConstructionScript0();
    void ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor);
    void LoadZoneShow(bool Show_);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_KillPlaneOLD(int32_t EntryPoint);
}; // Size: 0x390
#pragma pack(pop)
}
