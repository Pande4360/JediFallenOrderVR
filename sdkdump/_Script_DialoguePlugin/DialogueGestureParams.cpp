#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DialogueGestureParams.hpp"
void* _Script_DialoguePlugin::DialogueGestureParams::get_Asset() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_DialoguePlugin::DialogueGestureParams::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_DialoguePlugin::DialogueGestureParams::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_DialoguePlugin::DialogueGestureParams::get_SlotNodeName() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_DialoguePlugin::DialogueGestureParams::get_GestureStartDelay() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_DialoguePlugin::DialogueGestureParams::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_DialoguePlugin::DialogueGestureParams::get_InPlayRate() {
    return *(float*)((uintptr_t)this + 0x40);
}
int32_t& _Script_DialoguePlugin::DialogueGestureParams::get_LoopCount() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
float& _Script_DialoguePlugin::DialogueGestureParams::get_BlendOutTriggerTime() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_DialoguePlugin::DialogueGestureParams::get_InTimeToStartMontageAt() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_DialoguePlugin::DialogueGestureParams::get_BlendSpaceInput() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_DialoguePlugin::DialogueGestureParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DialoguePlugin.DialogueGestureParams");
    return result;
}
