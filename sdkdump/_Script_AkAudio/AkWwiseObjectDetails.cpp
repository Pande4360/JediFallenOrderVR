#include "..\FUObjectArray.hpp"
#include "AkWwiseObjectDetails.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AkAudio::AkWwiseObjectDetails::get_ItemName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AkAudio::AkWwiseObjectDetails::get_ItemPath() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AkAudio::AkWwiseObjectDetails::get_ItemId() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkWwiseObjectDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkWwiseObjectDetails");
    return result;
}
