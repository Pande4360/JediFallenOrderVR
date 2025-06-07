#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInterface.hpp"
#include "NamedEmitterMaterial.hpp"
void* _Script_Engine::NamedEmitterMaterial::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::MaterialInterface*& _Script_Engine::NamedEmitterMaterial::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::NamedEmitterMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NamedEmitterMaterial");
    return result;
}
