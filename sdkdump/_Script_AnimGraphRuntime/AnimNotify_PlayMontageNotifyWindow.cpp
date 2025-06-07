#include "..\FUObjectArray.hpp"
#include "AnimNotify_PlayMontageNotifyWindow.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
void* _Script_AnimGraphRuntime::AnimNotify_PlayMontageNotifyWindow::get_NotifyName() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNotify_PlayMontageNotifyWindow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
    return result;
}
