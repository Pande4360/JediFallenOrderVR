#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeSplineConnection.hpp"
#include "LandscapeSplineSegment.hpp"
_Script_Landscape::LandscapeSplineSegment*& _Script_Landscape::LandscapeSplineConnection::get_Segment() {
    return *(_Script_Landscape::LandscapeSplineSegment**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSplineConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeSplineConnection");
    return result;
}
void _Script_Landscape::LandscapeSplineConnection::set_End(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeSplineConnection::get_End() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
