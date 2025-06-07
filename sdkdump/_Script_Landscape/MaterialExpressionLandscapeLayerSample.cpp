#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpression.hpp"
#include "MaterialExpressionLandscapeLayerSample.hpp"
void* _Script_Landscape::MaterialExpressionLandscapeLayerSample::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Landscape::MaterialExpressionLandscapeLayerSample::get_PreviewWeight() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerSample::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x4c);
}
_Script_CoreUObject::Class* _Script_Landscape::MaterialExpressionLandscapeLayerSample::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.MaterialExpressionLandscapeLayerSample");
    return result;
}
