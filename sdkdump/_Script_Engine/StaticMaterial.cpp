#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInterface.hpp"
#include "StaticMaterial.hpp"
_Script_Engine::MaterialInterface*& _Script_Engine::StaticMaterial::get_MaterialInterface() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::StaticMaterial::get_MaterialSlotName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::StaticMaterial::get_UVChannelData() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::StaticMaterial::get_ImportedMaterialSlotName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticMaterial");
    return result;
}
