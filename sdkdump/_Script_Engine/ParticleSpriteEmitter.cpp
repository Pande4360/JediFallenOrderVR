#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleEmitter.hpp"
#include "ParticleSpriteEmitter.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleSpriteEmitter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleSpriteEmitter");
    return result;
}
