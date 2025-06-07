#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "LandscapeHeightfieldCollisionComponent.hpp"
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_ComponentLayerInfos() {
    return (void*)((uintptr_t)this + 0xb28);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_SectionBaseX() {
    return *(int32_t*)((uintptr_t)this + 0xb38);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CollisionQuadFlags() {
    return (void*)((uintptr_t)this + 0xb50);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_SectionBaseY() {
    return *(int32_t*)((uintptr_t)this + 0xb3c);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CollisionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0xb40);
}
float& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CollisionScale() {
    return *(float*)((uintptr_t)this + 0xb44);
}
int32_t& _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_SimpleCollisionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0xb48);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_HeightfieldGuid() {
    return (void*)((uintptr_t)this + 0xb60);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CachedLocalBox() {
    return (void*)((uintptr_t)this + 0xb70);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_RenderComponent() {
    return (void*)((uintptr_t)this + 0xb8c);
}
void* _Script_Landscape::LandscapeHeightfieldCollisionComponent::get_CookedPhysicalMaterials() {
    return (void*)((uintptr_t)this + 0xbb8);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeHeightfieldCollisionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeHeightfieldCollisionComponent");
    return result;
}
