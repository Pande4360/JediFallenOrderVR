#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Info.hpp"
#include "WindDirectionalSource.hpp"
#include "WindDirectionalSourceComponent.hpp"
_Script_Engine::WindDirectionalSourceComponent*& _Script_Engine::WindDirectionalSource::get_Component() {
    return *(_Script_Engine::WindDirectionalSourceComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::WindDirectionalSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.WindDirectionalSource");
    return result;
}
