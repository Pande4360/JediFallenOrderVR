#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScalarParameterAtlasInstanceData.hpp"
bool _Script_Engine::ScalarParameterAtlasInstanceData::get_bIsUsedAsAtlasPosition() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::ScalarParameterAtlasInstanceData::set_bIsUsedAsAtlasPosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ScalarParameterAtlasInstanceData::get_Curve() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ScalarParameterAtlasInstanceData::get_Atlas() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::ScalarParameterAtlasInstanceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ScalarParameterAtlasInstanceData");
    return result;
}
