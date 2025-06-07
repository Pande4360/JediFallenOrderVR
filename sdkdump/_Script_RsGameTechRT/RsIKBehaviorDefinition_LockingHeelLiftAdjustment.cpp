#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorDefinition.hpp"
#include "RsIKBehaviorDefinition_LockingHeelLiftAdjustment.hpp"
void _Script_RsGameTechRT::RsIKBehaviorDefinition_LockingHeelLiftAdjustment::set_bDebugDraw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsIKBehaviorDefinition_LockingHeelLiftAdjustment::get_bDebugDraw() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorDefinition_LockingHeelLiftAdjustment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorDefinition_LockingHeelLiftAdjustment");
    return result;
}
