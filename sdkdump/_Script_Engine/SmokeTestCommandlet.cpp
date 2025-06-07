#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Commandlet.hpp"
#include "SmokeTestCommandlet.hpp"
_Script_CoreUObject::Class* _Script_Engine::SmokeTestCommandlet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SmokeTestCommandlet");
    return result;
}
