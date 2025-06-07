#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotifyState_BuddyLerpTransform.hpp"
void* _Script_SwGame::SwAnimNotifyState_BuddyLerpTransform::get_TransformLerpMode() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotifyState_BuddyLerpTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotifyState_BuddyLerpTransform");
    return result;
}
