#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "MaterialInterface.hpp"
#include "ParticleSysParam.hpp"
void* _Script_Engine::ParticleSysParam::get_Color() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::ParticleSysParam::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::ParticleSysParam::get_Scalar() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::ParticleSysParam::get_ParamType() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::Actor*& _Script_Engine::ParticleSysParam::get_Actor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30);
}
float& _Script_Engine::ParticleSysParam::get_Scalar_Low() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ParticleSysParam::get_Vector() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::ParticleSysParam::get_Vector_Low() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_Engine::MaterialInterface*& _Script_Engine::ParticleSysParam::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleSysParam::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParticleSysParam");
    return result;
}
