#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsBoxDistanceTriggerComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Levels_WorldMap_BP_BP_TraversalLevelActor {
#pragma pack(push, 1)
struct BP_TraversalLevelActor_C : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& get_RsWorldMapStateTransitionGateway();
    _Script_RsGameTechRT::RsBoxDistanceTriggerComponent*& get_OneWayTrigger();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    bool get_WallRun_();
    void set_WallRun_(bool value);
    bool get_ForceFlip_();
    void set_ForceFlip_(bool value);
    bool get_Rope_();
    void set_Rope_(bool value);
    bool get_IsOptional_();
    void set_IsOptional_(bool value);
    bool get_ForcePull_();
    void set_ForcePull_(bool value);
    bool get_ForcePush_();
    void set_ForcePush_(bool value);
    bool get_Lightsaber_();
    void set_Lightsaber_(bool value);
    bool get_IsScannable_();
    void set_IsScannable_(bool value);
    void* get_ScanIdentifier();
    bool get_DroidHack_();
    void set_DroidHack_(bool value);
    bool get_Overcharge_();
    void set_Overcharge_(bool value);
    bool get_ClimbingClaws_();
    void set_ClimbingClaws_(bool value);
    bool get_Dive_();
    void set_Dive_(bool value);
    bool get_TK_();
    void set_TK_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void BndEvt__OneWayTrigger_K2Node_ComponentBoundEvent_1_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void SetOptional(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags Loadout, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags SecondaryLoadout);
    void ExecuteUbergraph_BP_TraversalLevelActor(int32_t EntryPoint);
}; // Size: 0x390
#pragma pack(pop)
}
