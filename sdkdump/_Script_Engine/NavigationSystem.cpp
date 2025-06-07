#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "Controller.hpp"
#include "NavigationSystem.hpp"
void _Script_Engine::NavigationSystem::SimpleMoveToActor(_Script_Engine::Controller* Controller, _Script_Engine::Actor* Goal) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::NavigationSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationSystem");
    return result;
}
void _Script_Engine::NavigationSystem::SimpleMoveToLocation(_Script_Engine::Controller* Controller, _Script_CoreUObject::Vector& Goal) {
    return;
}
