#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ParticleSystemReplay.hpp"
int32_t& _Script_Engine::ParticleSystemReplay::get_ClipIDNumber() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleSystemReplay::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleSystemReplay");
    return result;
}
