#include "..\FUObjectArray.hpp"
#include "DestructibleSpecialHierarchyDepths.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_ApexDestruction::DestructibleSpecialHierarchyDepths::get_DebrisDepth() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_ApexDestruction::DestructibleSpecialHierarchyDepths::get_SupportDepth() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleSpecialHierarchyDepths::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ApexDestruction.DestructibleSpecialHierarchyDepths");
    return result;
}
int32_t& _Script_ApexDestruction::DestructibleSpecialHierarchyDepths::get_MinimumFractureDepth() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
bool _Script_ApexDestruction::DestructibleSpecialHierarchyDepths::get_bEnableDebris() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_ApexDestruction::DestructibleSpecialHierarchyDepths::set_bEnableDebris(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_ApexDestruction::DestructibleSpecialHierarchyDepths::get_EssentialDepth() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
