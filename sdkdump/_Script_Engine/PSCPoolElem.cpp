#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PSCPoolElem.hpp"
#include "ParticleSystemComponent.hpp"
_Script_Engine::ParticleSystemComponent*& _Script_Engine::PSCPoolElem::get_PSC() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::PSCPoolElem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PSCPoolElem");
    return result;
}
