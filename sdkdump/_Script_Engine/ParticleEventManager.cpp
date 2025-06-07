#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "ParticleEventManager.hpp"
_Script_CoreUObject::Class* _Script_Engine::ParticleEventManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleEventManager");
    return result;
}
