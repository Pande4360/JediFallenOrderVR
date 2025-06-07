#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotifyQueue.hpp"
void* _Script_Engine::AnimNotifyQueue::get_AnimNotifies() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::AnimNotifyQueue::get_UnfilteredMontageAnimNotifies() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotifyQueue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNotifyQueue");
    return result;
}
