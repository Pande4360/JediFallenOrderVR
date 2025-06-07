#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DistributionLookupTable.hpp"
void* _Script_Engine::DistributionLookupTable::get_LockFlag() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::DistributionLookupTable::get_Op() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::DistributionLookupTable::get_TimeBias() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::DistributionLookupTable::get_EntryCount() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_Engine::DistributionLookupTable::get_EntryStride() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_Engine::DistributionLookupTable::get_Values() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::DistributionLookupTable::get_SubEntryStride() {
    return (void*)((uintptr_t)this + 0x3);
}
float& _Script_Engine::DistributionLookupTable::get_TimeScale() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::DistributionLookupTable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DistributionLookupTable");
    return result;
}
