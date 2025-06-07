#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialLayersFunctions.hpp"
void* _Script_Engine::MaterialLayersFunctions::get_Layers() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MaterialLayersFunctions::get_Blends() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::MaterialLayersFunctions::get_KeyString() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::MaterialLayersFunctions::get_LayerStates() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialLayersFunctions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialLayersFunctions");
    return result;
}
