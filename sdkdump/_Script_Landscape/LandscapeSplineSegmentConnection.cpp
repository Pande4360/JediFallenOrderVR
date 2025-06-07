#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeSplineControlPoint.hpp"
#include "LandscapeSplineSegmentConnection.hpp"
_Script_Landscape::LandscapeSplineControlPoint*& _Script_Landscape::LandscapeSplineSegmentConnection::get_ControlPoint() {
    return *(_Script_Landscape::LandscapeSplineControlPoint**)((uintptr_t)this + 0x0);
}
float& _Script_Landscape::LandscapeSplineSegmentConnection::get_TangentLen() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Landscape::LandscapeSplineSegmentConnection::get_SocketName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSplineSegmentConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeSplineSegmentConnection");
    return result;
}
