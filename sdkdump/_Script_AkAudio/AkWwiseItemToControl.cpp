#include "..\FUObjectArray.hpp"
#include "AkWwiseItemToControl.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkWwiseItemToControl::get_ItemPicked() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AkAudio::AkWwiseItemToControl::get_ItemPath() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkWwiseItemToControl::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkWwiseItemToControl");
    return result;
}
