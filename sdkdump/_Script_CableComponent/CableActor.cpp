#include "..\FUObjectArray.hpp"
#include "CableActor.hpp"
#include "CableComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_CableComponent::CableComponent*& _Script_CableComponent::CableActor::get_CableComponent() {
    return *(_Script_CableComponent::CableComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_CableComponent::CableActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CableComponent.CableActor");
    return result;
}
