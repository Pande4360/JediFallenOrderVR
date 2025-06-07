#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "NavigationObjectBase.hpp"
#include "PlayerStart.hpp"
void* _Script_Engine::PlayerStart::get_PlayerStartTag() {
    return (void*)((uintptr_t)this + 0x388);
}
_Script_CoreUObject::Class* _Script_Engine::PlayerStart::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlayerStart");
    return result;
}
_Script_CoreUObject::Transform _Script_Engine::PlayerStart::GetSpawnTransform() {
    return;
}
