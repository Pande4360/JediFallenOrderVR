#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Game_Narrative_Interactables_BP_DroidScan {
struct BP_DroidScan_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Levels_Bogano_BOG500_SubLevels_BOG500_Nar {
#pragma pack(push, 1)
struct BOG500_Nar_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x30]; public:
    void* get_UberGraphFrame();
    float& get_BinogLookatTime();
    void* get_BinogFirstTimer();
    bool get_AtLookout();
    void set_AtLookout(bool value);
    bool get_LookingAtBinog();
    void set_LookingAtBinog(bool value);
    float& get_BinogLookatTimeFirst();
    void* get_BinogMainTimer();
    _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C*& get_DroidScan_SnakeHint_ExecuteUbergraph_BOG500_Nar_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__LookAt_Binog_K2Node_ActorBoundEvent_0_LVL_LookingAt__DelegateSignature();
    void BndEvt__LookAt_Binog_K2Node_ActorBoundEvent_1_LVL_UnLookAt__DelegateSignature();
    void SecretBinogScan();
    void BndEvt__T_BinogLookout_2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void BndEvt__T_BinogLookout_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void ForceBinogLook();
    void ExecuteUbergraph_BOG500_Nar(int32_t EntryPoint);
}; // Size: 0x398
#pragma pack(pop)
}
