#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpression.hpp"
#include "MaterialExpressionLandscapeLayerWeight.hpp"
_Script_CoreUObject::Class* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight");
    return result;
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_base() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_Layer() {
    return (void*)((uintptr_t)this + 0x58);
}
float& _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_PreviewWeight() {
    return *(float*)((uintptr_t)this + 0x78);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_ConstBase() {
    return (void*)((uintptr_t)this + 0x7c);
}
