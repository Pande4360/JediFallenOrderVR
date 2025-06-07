#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ParticleCurvePair.hpp"
void* _Script_Engine::ParticleCurvePair::get_CurveName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Object*& _Script_Engine::ParticleCurvePair::get_CurveObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleCurvePair::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParticleCurvePair");
    return result;
}
