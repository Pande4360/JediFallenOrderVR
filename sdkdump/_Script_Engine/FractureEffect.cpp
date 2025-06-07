#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FractureEffect.hpp"
#include "ParticleSystem.hpp"
#include "SoundBase.hpp"
_Script_Engine::ParticleSystem*& _Script_Engine::FractureEffect::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x0);
}
_Script_Engine::SoundBase*& _Script_Engine::FractureEffect::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::FractureEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FractureEffect");
    return result;
}
