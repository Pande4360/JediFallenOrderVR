#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "LandscapeSplinesComponent.hpp"
void* _Script_Landscape::LandscapeSplinesComponent::get_Segments() {
    return (void*)((uintptr_t)this + 0xb38);
}
void* _Script_Landscape::LandscapeSplinesComponent::get_ControlPoints() {
    return (void*)((uintptr_t)this + 0xb28);
}
void* _Script_Landscape::LandscapeSplinesComponent::get_CookedForeignMeshComponents() {
    return (void*)((uintptr_t)this + 0xb48);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSplinesComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeSplinesComponent");
    return result;
}
void* _Script_Landscape::LandscapeSplinesComponent::GetSplineMeshComponents() {
    return;
}
