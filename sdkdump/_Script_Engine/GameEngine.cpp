#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Engine.hpp"
#include "GameEngine.hpp"
#include "GameInstance.hpp"
_Script_CoreUObject::Class* _Script_Engine::GameEngine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameEngine");
    return result;
}
float& _Script_Engine::GameEngine::get_ServerFlushLogInterval() {
    return *(float*)((uintptr_t)this + 0xd10);
}
_Script_Engine::GameInstance*& _Script_Engine::GameEngine::get_GameInstance() {
    return *(_Script_Engine::GameInstance**)((uintptr_t)this + 0xd18);
}
