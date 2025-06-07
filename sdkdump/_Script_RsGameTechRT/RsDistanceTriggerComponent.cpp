#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsBaseTriggerComponent.hpp"
#include "RsDistanceTriggerComponent.hpp"
float& _Script_RsGameTechRT::RsDistanceTriggerComponent::get_TriggerDistance() {
    return *(float*)((uintptr_t)this + 0xb68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDistanceTriggerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsDistanceTriggerComponent");
    return result;
}
void _Script_RsGameTechRT::RsDistanceTriggerComponent::SetTriggerDistance(float InTriggerDistance) {
    return;
}
float _Script_RsGameTechRT::RsDistanceTriggerComponent::GetClosestPointOnTrigger(_Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& OutPointOnTrigger) {
    return;
}
