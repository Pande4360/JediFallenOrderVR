#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSimulationAnalysisTweaks.hpp"
int32_t& _Script_RsTechRT::RsSimulationAnalysisTweaks::get_ExtrapolateStates() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_RsTechRT::RsSimulationAnalysisTweaks::get_SimulatedStates() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_RsTechRT::RsSimulationAnalysisTweaks::get_SimulatedScratchpad() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_RsTechRT::RsSimulationAnalysisTweaks::get_ExtrapolateTimeStep() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsTechRT::RsSimulationAnalysisTweaks::get_ExtrapolateTime() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_RsTechRT::RsSimulationAnalysisTweaks::get_ExtrapolatedHistoryCount() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void* _Script_RsTechRT::RsSimulationAnalysisTweaks::get_ExtrapolateScratchpad() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_RsTechRT::RsSimulationAnalysisTweaks::get_ExtrapolatedHistoryDelay() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsSimulationAnalysisTweaks::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsSimulationAnalysisTweaks");
    return result;
}
