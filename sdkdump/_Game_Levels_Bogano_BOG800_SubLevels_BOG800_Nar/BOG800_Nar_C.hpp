#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Game_Narrative_Interactables_BP_VOTrigger {
struct BP_VOTrigger_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG800_SubLevels_BOG800_Nar {
#pragma pack(push, 1)
struct BOG800_Nar_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x10]; public:
    void* get_UberGraphFrame();
    _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C*& get_BP_VOTrigger_FracturedPlain_DirectionHint_ExecuteUbergraph_BOG800_Nar_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__TriggerBox_VO_FracturedPlain_DirectionHint_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__ForceEcho_BoglingsAndCrabs_K2Node_ActorBoundEvent_2_LVL_InteractedEvent__DelegateSignature();
    void ExecuteUbergraph_BOG800_Nar(int32_t EntryPoint);
}; // Size: 0x378
#pragma pack(pop)
}
