#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BodySetup.hpp"
#include "BrushComponent.hpp"
#include "Model.hpp"
#include "PrimitiveComponent.hpp"
_Script_Engine::Model*& _Script_Engine::BrushComponent::get_Brush() {
    return *(_Script_Engine::Model**)((uintptr_t)this + 0xb28);
}
_Script_Engine::BodySetup*& _Script_Engine::BrushComponent::get_BrushBodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0xb30);
}
_Script_CoreUObject::Class* _Script_Engine::BrushComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BrushComponent");
    return result;
}
