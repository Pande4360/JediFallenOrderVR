#include "..\FUObjectArray.hpp"
#include "ChumpController_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwAIController.hpp"
void* _Game_Narrative_Hub_Chumps_Data_ChumpController::ChumpController_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x848);
}
_Script_CoreUObject::Class* _Game_Narrative_Hub_Chumps_Data_ChumpController::ChumpController_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Hub/Chumps/Data/ChumpController.ChumpController_C");
    return result;
}
void _Game_Narrative_Hub_Chumps_Data_ChumpController::ChumpController_C::ExecuteUbergraph_ChumpController(int32_t EntryPoint) {
    return;
}
void _Game_Narrative_Hub_Chumps_Data_ChumpController::ChumpController_C::UserConstructionScript() {
    return;
}
void _Game_Narrative_Hub_Chumps_Data_ChumpController::ChumpController_C::ReceiveInitializeAI() {
    return;
}
