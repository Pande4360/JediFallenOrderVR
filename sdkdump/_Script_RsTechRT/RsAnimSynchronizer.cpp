#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
#include "RsAnimSynchronizer.hpp"
int32_t& _Script_RsTechRT::RsAnimSynchronizer::get_Selector() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_RsTechRT::RsAnimSynchronizer::get_Poses() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_RsTechRT::RsAnimSynchronizer::get_SelectorOverlap() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
float& _Script_RsTechRT::RsAnimSynchronizer::get_SelectorNormalizedSubRange() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_RsTechRT::RsAnimSynchronizer::get_TweenTime() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsAnimSynchronizer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsAnimSynchronizer");
    return result;
}
