#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "SplineMeshActor.hpp"
#include "SplineMeshComponent.hpp"
_Script_Engine::SplineMeshComponent*& _Script_Engine::SplineMeshActor::get_SplineMeshComponent() {
    return *(_Script_Engine::SplineMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::SplineMeshActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SplineMeshActor");
    return result;
}
