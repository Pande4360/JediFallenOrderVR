#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Game_WorldInteracts_VoidTears_BP_VoidTearExit {
struct BP_VoidTearExit_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Game_WorldInteracts_EventZones_BP_SavePointVOID {
struct BP_SavePointVOID_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt {
struct BP_VoidTearAccessPt_C;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerState {
struct BP_SwPlayerState_C;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact {
struct Zone_Interact_C;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance {
#pragma pack(push, 1)
struct BP_VoidTearEntrance_C : public _Script_Engine::Actor {
    private: char pad_360[0x180]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ChildActorComponent*& get_ZoneInteract();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Script_Engine::SceneComponent*& get_ReturnTeleportPoint();
    _Script_Engine::RsStreamingDefinition*& get_VoidLevelStreamingDef();
    float& get_StoredHealth();
    int32_t& get_StoredPots();
    _Script_Engine::RsStreamingDefinition*& get_MeditationStreamingDef();
    _Game_WorldInteracts_VoidTears_BP_VoidTearExit::BP_VoidTearExit_C*& get_VoidTearExit();
    _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt::BP_VoidTearAccessPt_C*& get_VoidTearAccessPt();
    void* get_VoidTearID();
    void* get_MeditationID();
    _Script_Engine::RsStreamingDefinition*& get_CurrentLevelStreamingDef();
    void* get_LevelNameToPlanet();
    void* get_DEBUGStreamingLevel();
    _Game_WorldInteracts_EventZones_BP_SavePointVOID::BP_SavePointVOID_C*& get_MantisSavePoint();
    void* get_EnterVoidText();
    void* get_ExitVoidText();
    _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& get_PlayerState();
    bool get_IsRespawn();
    void set_IsRespawn(bool value);
    bool get_TearTransition();
    void set_TearTransition(bool value);
    bool get_IsMeditation();
    void set_IsMeditation(bool value);
    void* get_LevelLoadComplete_Dispatcher();
    void* get_FadeInComplete();
    void* get_TeleportTransform();
    _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& get_Interact();
    bool get_hasInteract_();
    void set_hasInteract_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void setPlayerCineMode(bool On_);
    void SetAllowXP(bool IsAllowed);
    void RestorePlayerStatistics();
    void UserConstructionScript0();
    void LoadedStreamingDefinitions_A39664334A7C0B56A298CD807FFCD384(void*& Definitions);
    void OnLoaded_DEDF70E147E60258AB00AFBD368FCB75(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_DEDF70E147E60258AB00AFBD14B8C586(_Script_CoreUObject::Object* Loaded);
    void LoadedStreamingDefinitions_A39664334A7C0B56A298CD805DCBDD77(void*& Definitions);
    void ExitVoidTear();
    void LoadVoidLevel();
    void ConnectWithVoidExit();
    void LevelLoadComplete();
    void LevelUnloadComplete();
    void UnloadVoidLevel();
    void ReceiveBeginPlay0();
    void EnterVoidLevel(void* VoidTearID, bool IsRespawn, bool IsTearTransition);
    void LeaveMeditationEnterVoidTear();
    void LeaveVoidTearEnterMeditation();
    void LVL_InteractedEvent_Event_0();
    void ExecuteUbergraph_BP_VoidTearEntrance(int32_t EntryPoint);
    void FadeInComplete__DelegateSignature();
    void LevelLoadComplete_Dispatcher__DelegateSignature();
}; // Size: 0x4e0
#pragma pack(pop)
}
