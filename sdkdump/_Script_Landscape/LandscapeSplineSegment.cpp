#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LandscapeSplineSegment.hpp"
void* _Script_Landscape::LandscapeSplineSegment::get_Connections() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Landscape::LandscapeSplineSegment::get_SplineInfo() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Landscape::LandscapeSplineSegment::get_Points() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Landscape::LandscapeSplineSegment::get_Bounds() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Landscape::LandscapeSplineSegment::get_LocalMeshComponents() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSplineSegment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeSplineSegment");
    return result;
}
