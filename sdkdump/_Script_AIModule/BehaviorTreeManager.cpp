#include "..\FUObjectArray.hpp"
#include "BehaviorTreeManager.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BehaviorTreeManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BehaviorTreeManager");
    return result;
}
int32_t& _Script_AIModule::BehaviorTreeManager::get_MaxDebuggerSteps() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_AIModule::BehaviorTreeManager::get_LoadedTemplates() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AIModule::BehaviorTreeManager::get_ActiveComponents() {
    return (void*)((uintptr_t)this + 0x40);
}
