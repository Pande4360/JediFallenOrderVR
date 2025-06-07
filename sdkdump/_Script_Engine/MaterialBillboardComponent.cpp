#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "MaterialBillboardComponent.hpp"
#include "MaterialInterface.hpp"
#include "PrimitiveComponent.hpp"
void* _Script_Engine::MaterialBillboardComponent::get_Elements() {
    return (void*)((uintptr_t)this + 0xb28);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialBillboardComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialBillboardComponent");
    return result;
}
void _Script_Engine::MaterialBillboardComponent::SetElements(void*& NewElements) {
    return;
}
void _Script_Engine::MaterialBillboardComponent::AddElement(_Script_Engine::MaterialInterface* Material, _Script_Engine::CurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, _Script_Engine::CurveFloat* DistanceToSizeCurve) {
    return;
}
