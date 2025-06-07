#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ControlPointMeshComponent.hpp"
#include "LandscapeSplineControlPoint.hpp"
float& _Script_Landscape::LandscapeSplineControlPoint::get_Width() {
    return *(float*)((uintptr_t)this + 0x40);
}
void* _Script_Landscape::LandscapeSplineControlPoint::get_Location() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Landscape::LandscapeSplineControlPoint::get_Rotation() {
    return (void*)((uintptr_t)this + 0x34);
}
float& _Script_Landscape::LandscapeSplineControlPoint::get_SideFalloff() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Landscape::LandscapeSplineControlPoint::get_EndFalloff() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_Landscape::LandscapeSplineControlPoint::get_ConnectedSegments() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Landscape::LandscapeSplineControlPoint::get_Points() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Landscape::LandscapeSplineControlPoint::get_Bounds() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_Landscape::ControlPointMeshComponent*& _Script_Landscape::LandscapeSplineControlPoint::get_LocalMeshComponent() {
    return *(_Script_Landscape::ControlPointMeshComponent**)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSplineControlPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeSplineControlPoint");
    return result;
}
