#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PhysicsCollisionHandler.hpp"
#include "SoundBase.hpp"
float& _Script_Engine::PhysicsCollisionHandler::get_ImpactThreshold() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsCollisionHandler::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsCollisionHandler");
    return result;
}
float& _Script_Engine::PhysicsCollisionHandler::get_ImpactReFireDelay() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_Engine::SoundBase*& _Script_Engine::PhysicsCollisionHandler::get_DefaultImpactSound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x30);
}
float& _Script_Engine::PhysicsCollisionHandler::get_LastImpactSoundTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
