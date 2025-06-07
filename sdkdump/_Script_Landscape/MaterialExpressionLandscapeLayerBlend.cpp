#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpression.hpp"
#include "MaterialExpressionLandscapeLayerBlend.hpp"
void* _Script_Landscape::MaterialExpressionLandscapeLayerBlend::get_Layers() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerBlend::get_DebugLayerDensity() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerBlend::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_Landscape::MaterialExpressionLandscapeLayerBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend");
    return result;
}
