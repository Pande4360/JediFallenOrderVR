#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Game_UI_UI_HUD_ROOT {
struct UI_HUD_ROOT_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition {
struct BP_GreebleUI_StateTransition_C;
}
namespace _Game_Levels_WorldMap_BP_BP_GreebleUI {
struct BP_GreebleUI_C;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble {
#pragma pack(push, 1)
struct WMC_UITechGreeble_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x2d0]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WolrdMapHologram_Ref();
    void* get_GreebleBP();
    void* get_GreebleUItoBP();
    float& get_DistanceGreebleUITurnsOff();
    void* get_GreebleBPToPlanet();
    void* get_GreebleUItoBP_Cine();
    void* get_MissionEnumToMissionName();
    _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& get_HUD_Ref();
    void* get_GreebleUItoDoor();
    void* get_GreebleUItoDoorUnlocked();
    void* get_GreebleBP_STA();
    void* get_GreebleUItoBP_STA();
    void* get_GreebleBPSTAToPlanet();
    void* get_MinBoundMargin();
    static _Script_CoreUObject::Class* static_class();
    void SetSTAGreebleToLocation(_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C*& STAActor, void*& TMap);
    void SetPerSTA(bool StateChanged_, bool AlwaysOn, bool IsUnlockable, bool ChangeColors_, _Script_RsGameTechRT::RsUiWindow* GreebleUI, _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C* GreebleBP);
    void SetSTAState(_Script_CoreUObject::Object* RsUiWindow, bool IsUnlockable);
    void SetGreebleSTAState(_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C*& BP);
    void SetGreebleType_STA(_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C* GreebleBP);
    void SetGreebleDoorState(_Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C*& BP);
    void SetInitialDoorUI(_Script_UMG::UserWidget* CurrentWidget);
    void SetMissionObjectiveUIGreeble(_Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C* Actor, bool& IsObjectiveActive);
    void SetGreebleToLocation(_Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C*& Actor, void*& TMap, bool ForceLocation);
    void SetGreebleType(_Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C* GreebleBP);
    void ReceiveBeginPlay0();
    void GetAllActorsOGreebles();
    void SetLocationForGreeble();
    void SetDoorWidgets();
    void TurnOffDoorWidgets();
    void CheckIfGreebleIsUnlocked();
    void CollapseAllUITechGreeble();
    void SetLocationThroughTutorial();
    void ExecuteUbergraph_WMC_UITechGreeble(int32_t EntryPoint);
}; // Size: 0x440
#pragma pack(pop)
}
