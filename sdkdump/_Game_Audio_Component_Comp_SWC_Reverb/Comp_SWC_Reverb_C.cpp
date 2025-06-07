#include "..\FUObjectArray.hpp"
#include "Comp_SWC_Reverb_C.hpp"
#include "..\_Script_AkAudio\AkAuxBus.hpp"
#include "..\_Script_AkAudio\AkLateReverbComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Audio_Component_Comp_SWC_Reverb::Comp_SWC_Reverb_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x310);
}
void _Game_Audio_Component_Comp_SWC_Reverb::Comp_SWC_Reverb_C::ExecuteUbergraph_Comp_SWC_Reverb(int32_t EntryPoint) {
    return;
}
_Script_AkAudio::AkAuxBus*& _Game_Audio_Component_Comp_SWC_Reverb::Comp_SWC_Reverb_C::get_Reverb() {
    return *(_Script_AkAudio::AkAuxBus**)((uintptr_t)this + 0x318);
}
float& _Game_Audio_Component_Comp_SWC_Reverb::Comp_SWC_Reverb_C::get_Send_Level() {
    return *(float*)((uintptr_t)this + 0x320);
}
float& _Game_Audio_Component_Comp_SWC_Reverb::Comp_SWC_Reverb_C::get_Fade_Rate() {
    return *(float*)((uintptr_t)this + 0x324);
}
float& _Game_Audio_Component_Comp_SWC_Reverb::Comp_SWC_Reverb_C::get_Priority_Of_Reverb() {
    return *(float*)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_Audio_Component_Comp_SWC_Reverb::Comp_SWC_Reverb_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Component/Comp_SWC_Reverb.Comp_SWC_Reverb_C");
    return result;
}
void _Game_Audio_Component_Comp_SWC_Reverb::Comp_SWC_Reverb_C::ReceiveBeginPlay() {
    return;
}
