#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSlotDesc.hpp"
void* _Script_Engine::AnimSlotDesc::get_SlotName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSlotDesc::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimSlotDesc");
    return result;
}
int32_t& _Script_Engine::AnimSlotDesc::get_NumChannels() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
