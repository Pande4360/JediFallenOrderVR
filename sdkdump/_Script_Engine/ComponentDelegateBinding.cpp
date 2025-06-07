#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComponentDelegateBinding.hpp"
#include "DynamicBlueprintBinding.hpp"
_Script_CoreUObject::Class* _Script_Engine::ComponentDelegateBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ComponentDelegateBinding");
    return result;
}
void* _Script_Engine::ComponentDelegateBinding::get_ComponentDelegateBindings() {
    return (void*)((uintptr_t)this + 0x28);
}
