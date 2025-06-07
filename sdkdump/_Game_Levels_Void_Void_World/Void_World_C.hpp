#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroUpgradeFlags.hpp"
namespace _Script_Engine {
struct DecalActor;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct StaticMeshActor;
}
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Script_Engine {
struct SkyLight;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_Void_Void_World_BP_VoidWorldBranches {
struct BP_VoidWorldBranches_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Levels_Void_Void_World {
#pragma pack(push, 1)
struct Void_World_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x1b0]; public:
    void* get_UberGraphFrame();
    float& get_Timeline_1_Reveal_844C46FA434FFA550C800BB455A62289();
    void* get_Timeline_1__Direction_844C46FA434FFA550C800BB455A62289();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    bool get_In_The_Void();
    void set_In_The_Void(bool value);
    _Script_Engine::MaterialInstanceDynamic*& get_saveStar();
    _Script_Engine::MaterialInstanceDynamic*& get_SkillBranches();
    bool get_IsSkillPurchased();
    void set_IsSkillPurchased(bool value);
    void* get_UpgradeFlag();
    void* get_SkillSpheres();
    _Script_LevelSequence::LevelSequenceActor*& get_Void_Save_Lights_01_ExecuteUbergraph_Void_World_RefProperty();
    _Script_Engine::DecalActor*& get_M_Save_Decal_Void_2_ExecuteUbergraph_Void_World_RefProperty();
    _Script_Engine::SkyLight*& get_voidworld_Skylight_ExecuteUbergraph_Void_World_RefProperty();
    _Game_Models_Void_Void_World_BP_VoidWorldBranches::BP_VoidWorldBranches_C*& get_BP_VoidWorldBranches_ExecuteUbergraph_Void_World_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere63_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere78_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere79_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere77_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere80_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere10_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere49_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere48_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere70_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere68_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere72_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere73_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere17_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere18_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere75_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere69_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere51_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere67_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere66_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere61_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere59_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere58_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere62_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere60_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere64_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere65_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere50_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere81_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere46_1_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere74_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere57_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere56_EdGraph_0_RefProperty();
    _Script_Engine::StaticMeshActor*& get_Sphere22_EdGraph_0_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void HandleSphereVisibility();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__TriggerVolume_1_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void ReceiveBeginPlay();
    void HandleHeroUpgradeChanged(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags OldUpgradeFlags, _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags NewUpgradeFlags);
    void ReceiveLevelVisible0();
    void ExecuteUbergraph_Void_World(int32_t EntryPoint);
}; // Size: 0x518
#pragma pack(pop)
}
