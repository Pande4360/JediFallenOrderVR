#include "..\FUObjectArray.hpp"
#include "AnimNotify_PlayMontageNotify.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNotify_PlayMontageNotify::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify");
    return result;
}
void* _Script_AnimGraphRuntime::AnimNotify_PlayMontageNotify::get_NotifyName() {
    return (void*)((uintptr_t)this + 0x38);
}
