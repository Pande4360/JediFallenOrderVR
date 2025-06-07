#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticMaterialLayersParameter.hpp"
void* _Script_Engine::StaticMaterialLayersParameter::get_ParameterInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::StaticMaterialLayersParameter::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::StaticMaterialLayersParameter::get_Value() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_Engine::StaticMaterialLayersParameter::get_bOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_Engine::StaticMaterialLayersParameter::set_bOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMaterialLayersParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticMaterialLayersParameter");
    return result;
}
