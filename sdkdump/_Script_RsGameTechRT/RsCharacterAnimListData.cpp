#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCharacterAnimListData.hpp"
void* _Script_RsGameTechRT::RsCharacterAnimListData::get_AnimationList() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsCharacterAnimListData::get_AnimationSlot() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_RsGameTechRT::RsCharacterAnimListData::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_RsGameTechRT::RsCharacterAnimListData::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_RsGameTechRT::RsCharacterAnimListData::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_RsGameTechRT::RsCharacterAnimListData::get_BlendOutTriggerTime() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_RsGameTechRT::RsCharacterAnimListData::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacterAnimListData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsCharacterAnimListData");
    return result;
}
