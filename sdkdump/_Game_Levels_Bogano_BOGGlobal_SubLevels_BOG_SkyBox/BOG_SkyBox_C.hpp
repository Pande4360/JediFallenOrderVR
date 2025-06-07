#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Game_WorldInteracts_EventZones_Zone_Flashlight {
struct Zone_Flashlight_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOGGlobal_SubLevels_BOG_SkyBox {
#pragma pack(push, 1)
struct BOG_SkyBox_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x18]; public:
    void* get_UberGraphFrame();
    float& get_SunIntensity();
    float& get_SkylightIntensity();
    _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C*& get_Zone_FlashlightWorkshop_ExecuteUbergraph_BOG_SkyBox_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void EnterDarkZone();
    void ExitDarkZone();
    void BndEvt__T_Flashlight_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void ReceiveBeginPlay();
    void RE_BogWorkshopLightsOn();
    void RE_BogWorkshopLightsOff();
    void BndEvt__T_FlashlightBogVillage_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_FlashlightBogVillage_K2Node_ActorBoundEvent_7_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_FlashlightBogTown2_K2Node_ActorBoundEvent_19_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_FlashlightBogTown2_K2Node_ActorBoundEvent_20_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_Flashlight_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_FlashlightCordovaHome_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_FlashlightCordovaHome_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void ExecuteUbergraph_BOG_SkyBox(int32_t EntryPoint);
}; // Size: 0x380
#pragma pack(pop)
}
