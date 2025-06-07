#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsBaseTriggerComponent.hpp"
#include "RsBoxDistanceTriggerComponent.hpp"
void* _Script_RsGameTechRT::RsBoxDistanceTriggerComponent::get_BoxExtent() {
    return (void*)((uintptr_t)this + 0xb68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBoxDistanceTriggerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBoxDistanceTriggerComponent");
    return result;
}
void _Script_RsGameTechRT::RsBoxDistanceTriggerComponent::SetBoxExtent(_Script_CoreUObject::Vector InBoxExtent) {
    return;
}
float _Script_RsGameTechRT::RsBoxDistanceTriggerComponent::GetClosestPointOnTrigger(_Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& OutPointOnTrigger) {
    return;
}
