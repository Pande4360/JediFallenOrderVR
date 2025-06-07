#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "MaterialInstanceActor.hpp"
void* _Script_Engine::MaterialInstanceActor::get_TargetActors() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialInstanceActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialInstanceActor");
    return result;
}
