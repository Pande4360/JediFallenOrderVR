#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpression.hpp"
#include "MaterialExpressionLandscapeLayerSwitch.hpp"
void* _Script_Landscape::MaterialExpressionLandscapeLayerSwitch::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerSwitch::get_LayerUsed() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerSwitch::get_LayerNotUsed() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerSwitch::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_Landscape::MaterialExpressionLandscapeLayerSwitch::get_PreviewUsed() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_Landscape::MaterialExpressionLandscapeLayerSwitch::set_PreviewUsed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Landscape::MaterialExpressionLandscapeLayerSwitch::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch");
    return result;
}
