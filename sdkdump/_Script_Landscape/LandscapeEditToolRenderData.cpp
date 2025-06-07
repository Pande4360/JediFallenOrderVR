#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "LandscapeEditToolRenderData.hpp"
int32_t& _Script_Landscape::LandscapeEditToolRenderData::get_DebugChannelR() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeEditToolRenderData::get_ToolMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x0);
}
_Script_Engine::MaterialInterface*& _Script_Landscape::LandscapeEditToolRenderData::get_GizmoMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x8);
}
int32_t& _Script_Landscape::LandscapeEditToolRenderData::get_SelectedType() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Landscape::LandscapeEditToolRenderData::get_DebugChannelG() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Landscape::LandscapeEditToolRenderData::get_DebugChannelB() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
_Script_Engine::Texture2D*& _Script_Landscape::LandscapeEditToolRenderData::get_DataTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x20);
}
bool _Script_Landscape::LandscapeEditToolRenderData::get_CheckboardMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeEditToolRenderData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeEditToolRenderData");
    return result;
}
void _Script_Landscape::LandscapeEditToolRenderData::set_CheckboardMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
