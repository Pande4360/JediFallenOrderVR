#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimState_Hero.hpp"
void* _Script_RsGameTechRT::AnimState_Hero::get_CurrentNavState() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::AnimState_Hero::get_PreviousNavState() {
    return (void*)((uintptr_t)this + 0x1);
}
float& _Script_RsGameTechRT::AnimState_Hero::get_TimeInCurrentNavState() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimState_Hero::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.AnimState_Hero");
    return result;
}
