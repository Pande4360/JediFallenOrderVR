#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "LandscapeSplineMeshEntry.hpp"
void* _Script_Landscape::LandscapeSplineMeshEntry::get_Scale() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Landscape::LandscapeSplineMeshEntry::get_bScaleToWidth() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
_Script_Engine::StaticMesh*& _Script_Landscape::LandscapeSplineMeshEntry::get_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::LandscapeSplineMeshEntry::get_MaterialOverrides() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Landscape::LandscapeSplineMeshEntry::get_bCenterH() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeSplineMeshEntry::set_bCenterH(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::LandscapeSplineMeshEntry::get_CenterAdjust() {
    return (void*)((uintptr_t)this + 0x1c);
}
void _Script_Landscape::LandscapeSplineMeshEntry::set_bScaleToWidth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Landscape::LandscapeSplineMeshEntry::get_Orientation() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Landscape::LandscapeSplineMeshEntry::get_ForwardAxis() {
    return (void*)((uintptr_t)this + 0x35);
}
void* _Script_Landscape::LandscapeSplineMeshEntry::get_UpAxis() {
    return (void*)((uintptr_t)this + 0x36);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSplineMeshEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeSplineMeshEntry");
    return result;
}
