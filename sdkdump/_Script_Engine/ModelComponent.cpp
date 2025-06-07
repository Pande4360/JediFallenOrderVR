#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BodySetup.hpp"
#include "ModelComponent.hpp"
#include "PrimitiveComponent.hpp"
_Script_Engine::BodySetup*& _Script_Engine::ModelComponent::get_ModelBodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0xb40);
}
_Script_CoreUObject::Class* _Script_Engine::ModelComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ModelComponent");
    return result;
}
