#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSlotInfo.hpp"
void* _Script_Engine::AnimSlotInfo::get_SlotName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AnimSlotInfo::get_ChannelWeights() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSlotInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimSlotInfo");
    return result;
}
