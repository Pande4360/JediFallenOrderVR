#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwSimpleDestructibleActor.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_Tile_Sets_PushTemple_PSH_Pot_01_breakable_DM_PSH_pot_sleep_01 {
#pragma pack(push, 1)
struct DM_PSH_pot_sleep_01_C : public _Script_SwGame::SwSimpleDestructibleActor {
    private: char pad_750[0x50]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_Engine::CapsuleComponent*& get_Trigger();
    _Script_Engine::SkeletalMeshComponent*& get_Brake();
    _Script_Engine::StaticMeshComponent*& get_prestine();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    float& get_Timeline_0_Erosion_8BA90B3D4DEB53B93DF2498253A1CED9();
    void* get_Timeline_0__Direction_8BA90B3D4DEB53B93DF2498253A1CED9();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    _Script_Engine::MaterialInstanceDynamic*& get_Opacity_Mask();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLastPhaseDestructed0();
    void ExecuteUbergraph_DM_PSH_pot_sleep_01(int32_t EntryPoint);
}; // Size: 0x7a0
#pragma pack(pop)
}
