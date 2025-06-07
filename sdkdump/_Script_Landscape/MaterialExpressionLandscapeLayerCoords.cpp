#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpression.hpp"
#include "MaterialExpressionLandscapeLayerCoords.hpp"
void* _Script_Landscape::MaterialExpressionLandscapeLayerCoords::get_CustomUVType() {
    return (void*)((uintptr_t)this + 0x41);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerCoords::get_MappingType() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_Landscape::MaterialExpressionLandscapeLayerCoords::get_MappingPanV() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_Landscape::MaterialExpressionLandscapeLayerCoords::get_MappingScale() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Landscape::MaterialExpressionLandscapeLayerCoords::get_MappingRotation() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Landscape::MaterialExpressionLandscapeLayerCoords::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords");
    return result;
}
float& _Script_Landscape::MaterialExpressionLandscapeLayerCoords::get_MappingPanU() {
    return *(float*)((uintptr_t)this + 0x4c);
}
