#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintCookedComponentInstancingData.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlueprintCookedComponentInstancingData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintCookedComponentInstancingData");
    return result;
}
bool _Script_Engine::BlueprintCookedComponentInstancingData::get_bIsValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::BlueprintCookedComponentInstancingData::set_bIsValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BlueprintCookedComponentInstancingData::get_ChangedPropertyList() {
    return (void*)((uintptr_t)this + 0x8);
}
