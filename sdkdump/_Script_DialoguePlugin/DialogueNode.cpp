#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DialogueNode.hpp"
void* _Script_DialoguePlugin::DialogueNode::get_TextStr() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_DialoguePlugin::DialogueNode::get_RAPUID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_DialoguePlugin::DialogueNode::get_Coordinates() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_DialoguePlugin::DialogueNode::get_ID() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_DialoguePlugin::DialogueNode::get_Links() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_DialoguePlugin::DialogueNode::get_isPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_DialoguePlugin::DialogueNode::set_isPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DialoguePlugin::DialogueNode::get_Description() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_DialoguePlugin::DialogueNode::get_Events() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_DialoguePlugin::DialogueNode::get_Conditions() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_DialoguePlugin::DialogueNode::set_bCritPath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xfa + 0);
    *(uint8_t*)((uintptr_t)this + 0xfa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DialoguePlugin::DialogueNode::get_TagsToEnable() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_DialoguePlugin::DialogueNode::get_UnsetTagsToEnable() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_AkAudio::AkAudioEvent*& _Script_DialoguePlugin::DialogueNode::get_Sound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x88);
}
float& _Script_DialoguePlugin::DialogueNode::get_Delay() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_DialoguePlugin::DialogueNode::get_CharacterType() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_DialoguePlugin::DialogueNode::get_WwiseEventName() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_DialoguePlugin::DialogueNode::get_Choice() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_DialoguePlugin::DialogueNode::get_ChoicePromptStr() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_DialoguePlugin::DialogueNode::get_ChoicePromptText() {
    return (void*)((uintptr_t)this + 0xe0);
}
bool _Script_DialoguePlugin::DialogueNode::get_bIsRadio() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void _Script_DialoguePlugin::DialogueNode::set_bIsRadio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DialoguePlugin::DialogueNode::get_bNotSpatialized() {
    return (*(uint8_t*)((uintptr_t)this + 0xf9 + 0)) & 1 != 0;
}
void _Script_DialoguePlugin::DialogueNode::set_bNotSpatialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DialoguePlugin::DialogueNode::get_bCritPath() {
    return (*(uint8_t*)((uintptr_t)this + 0xfa + 0)) & 1 != 0;
}
void* _Script_DialoguePlugin::DialogueNode::get_LookatTarget() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_DialoguePlugin::DialogueNode::get_Gesture() {
    return (void*)((uintptr_t)this + 0x108);
}
_Script_CoreUObject::Class* _Script_DialoguePlugin::DialogueNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DialoguePlugin.DialogueNode");
    return result;
}
