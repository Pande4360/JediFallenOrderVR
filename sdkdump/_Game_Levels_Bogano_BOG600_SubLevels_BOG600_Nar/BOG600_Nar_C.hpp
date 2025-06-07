#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Game_Narrative_Interactables_BP_DroidScan {
struct BP_DroidScan_C;
}
namespace _Game_Narrative_Interactables_BP_CinematicTrigger {
struct BP_CinematicTrigger_C;
}
namespace _Game_Narrative_Interactables_BP_VOTrigger {
struct BP_VOTrigger_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG600_SubLevels_BOG600_Nar {
#pragma pack(push, 1)
struct BOG600_Nar_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x28]; public:
    void* get_UberGraphFrame();
    void* get_Ilum_Gameplay_Tag();
    _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C*& get_DroidScan_FadedMural_ExecuteUbergraph_BOG600_Nar_RefProperty();
    _Game_Narrative_Interactables_BP_CinematicTrigger::BP_CinematicTrigger_C*& get_BOG_300_DathomirDiscovered_BP_CinematicTrigger_ExecuteUbergraph_BOG600_Nar_RefProperty();
    _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C*& get_BP_VOTrigger_FracturedPlain_GoinExplorin_ExecuteUbergraph_BOG600_Nar_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void Seq_BOG_300_DathomirDiscovered_CIN();
    void BndEvt__BOG_300_DathomirDiscovered_BP_CinematicTrigger_K2Node_ActorBoundEvent_0_LVL_FinishedOrAlreadyPlayed__DelegateSignature(bool UsedSkip);
    void ReceiveBeginPlay();
    void RE_BogratFightTriggered();
    void ExecuteUbergraph_BOG600_Nar(int32_t EntryPoint);
}; // Size: 0x390
#pragma pack(pop)
}
