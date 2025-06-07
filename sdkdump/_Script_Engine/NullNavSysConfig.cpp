#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationSystemConfig.hpp"
#include "NullNavSysConfig.hpp"
_Script_CoreUObject::Class* _Script_Engine::NullNavSysConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NullNavSysConfig");
    return result;
}
