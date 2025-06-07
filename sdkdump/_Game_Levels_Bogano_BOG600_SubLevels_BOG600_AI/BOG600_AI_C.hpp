#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_RsGameTechRT {
struct RsAIEncounterGroup;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG600_SubLevels_BOG600_AI {
#pragma pack(push, 1)
struct BOG600_AI_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x20]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsAIEncounterGroup*& get_Enc_CrabsStaffTraining_ExecuteUbergraph_BOG600_AI_RefProperty();
    _Script_RsGameTechRT::RsAIEncounterGroup*& get_Enc_CrabsStaffTraining2_ExecuteUbergraph_BOG600_AI_RefProperty();
    _Script_RsGameTechRT::RsAIEncounterGroup*& get_Enc_VaultCroak_ExecuteUbergraph_BOG600_AI_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void RE_SendInTheCrabs();
    void BndEvt__Enc_VaultCroak_K2Node_ActorBoundEvent_2_RsOnEncounterGroupEvent__DelegateSignature();
    void BndEvt__TriggerSphere2_2_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void ExecuteUbergraph_BOG600_AI(int32_t EntryPoint);
}; // Size: 0x388
#pragma pack(pop)
}
