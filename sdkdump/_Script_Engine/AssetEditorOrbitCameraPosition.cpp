#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AssetEditorOrbitCameraPosition.hpp"
bool _Script_Engine::AssetEditorOrbitCameraPosition::get_bIsSet() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::AssetEditorOrbitCameraPosition::set_bIsSet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AssetEditorOrbitCameraPosition::get_CamOrbitPoint() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::AssetEditorOrbitCameraPosition::get_CamOrbitZoom() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::AssetEditorOrbitCameraPosition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AssetEditorOrbitCameraPosition");
    return result;
}
void* _Script_Engine::AssetEditorOrbitCameraPosition::get_CamOrbitRotation() {
    return (void*)((uintptr_t)this + 0x1c);
}
