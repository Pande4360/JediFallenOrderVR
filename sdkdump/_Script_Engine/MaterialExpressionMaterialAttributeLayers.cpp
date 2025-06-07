#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMaterialAttributeLayers.hpp"
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_NumActiveLayerCallers() {
    return *(int32_t*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_Input() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_NumActiveBlendCallers() {
    return *(int32_t*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_DefaultLayers() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_BlendCallers() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_LayerCallers() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_bIsLayerGraphBuilt() {
    return (*(uint8_t*)((uintptr_t)this + 0xe4 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionMaterialAttributeLayers::set_bIsLayerGraphBuilt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMaterialAttributeLayers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMaterialAttributeLayers");
    return result;
}
