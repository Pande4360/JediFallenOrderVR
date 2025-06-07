#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimState_NavTransition.hpp"
void* _Script_RsGameTechRT::AnimState_NavTransition::get_FromNavigationComponent() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimState_NavTransition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.AnimState_NavTransition");
    return result;
}
void* _Script_RsGameTechRT::AnimState_NavTransition::get_ToNavigationComponent() {
    return (void*)((uintptr_t)this + 0x1);
}
