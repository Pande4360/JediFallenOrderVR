#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "ShapeComponent.hpp"
#include "TriggerBase.hpp"
_Script_Engine::ShapeComponent*& _Script_Engine::TriggerBase::get_CollisionComponent() {
    return *(_Script_Engine::ShapeComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::TriggerBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TriggerBase");
    return result;
}
