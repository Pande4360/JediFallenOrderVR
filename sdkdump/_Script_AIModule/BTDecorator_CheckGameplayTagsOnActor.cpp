#include "..\FUObjectArray.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_CheckGameplayTagsOnActor.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTDecorator_CheckGameplayTagsOnActor::get_ActorToCheck() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_AIModule::BTDecorator_CheckGameplayTagsOnActor::get_TagsToMatch() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_AIModule::BTDecorator_CheckGameplayTagsOnActor::get_GameplayTags() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_CheckGameplayTagsOnActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor");
    return result;
}
void* _Script_AIModule::BTDecorator_CheckGameplayTagsOnActor::get_CachedDescription() {
    return (void*)((uintptr_t)this + 0xb8);
}
