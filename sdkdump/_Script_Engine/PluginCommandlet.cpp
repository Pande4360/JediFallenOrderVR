#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Commandlet.hpp"
#include "PluginCommandlet.hpp"
_Script_CoreUObject::Class* _Script_Engine::PluginCommandlet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PluginCommandlet");
    return result;
}
