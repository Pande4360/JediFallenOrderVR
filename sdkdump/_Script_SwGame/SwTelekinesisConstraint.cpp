#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PhysicsHandleComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "SwTelekinesisConstraint.hpp"
_Script_Engine::SceneComponent*& _Script_SwGame::SwTelekinesisConstraint::get_SceneComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x360);
}
_Script_Engine::PhysicsHandleComponent*& _Script_SwGame::SwTelekinesisConstraint::get_PhysicsHandleComponent() {
    return *(_Script_Engine::PhysicsHandleComponent**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_SwGame::SwTelekinesisConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwTelekinesisConstraint");
    return result;
}
